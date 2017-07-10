﻿#if UNITY_EDITOR
using UnityEngine;
using System.Collections;
using SpilGames.Unity.Base.Implementations;
using SpilGames.Unity;
using SpilGames.Unity.Helpers;
using System.Collections.Generic;
using System;
using System.IO;
using System.Linq;
using SpilGames.Unity.Base.SDK;
using SpilGames.Unity.Json;
using SpilGames.Unity.Helpers.PlayerData;

namespace SpilGames.Unity.Base.UnityEditor.Responses {
    public class PlayerDataResponse : Response {
        public WalletData Wallet;
        public InventoryData Inventory;

        public void ProcessPlayerDataResponse(ResponseEvent response) {
            WalletData receivedWallet = null;
            InventoryData receivedInventory = null;

            if (response.data.HasField("wallet")) {
                JSONObject walletJSON = response.data.GetField("wallet");

                receivedWallet = new WalletData();

                if (walletJSON.HasField("currencies")) {
                    receivedWallet.currencies = new List<PlayerCurrencyData>();

                    JSONObject currenciesJSON = walletJSON.GetField("currencies");

                    for (int i = 0; i < currenciesJSON.Count; i++) {
                        PlayerCurrencyData currency = new PlayerCurrencyData();

                        currency.id = (int) currenciesJSON.list[i].GetField("id").n;
                        currency.currentBalance = (int) currenciesJSON.list[i].GetField("currentBalance").n;
                        currency.delta = (int) currenciesJSON.list[i].GetField("delta").n;

                        receivedWallet.currencies.Add(currency);
                    }
                }

                receivedWallet.offset = (int) walletJSON.GetField("offset").n;
                receivedWallet.logic = walletJSON.GetField("logic").str;
            }

            if (response.data.HasField("inventory")) {
                JSONObject inventoryJSON = response.data.GetField("inventory");

                receivedInventory = new InventoryData();

                if (inventoryJSON.HasField("items")) {
                    receivedInventory.items = new List<PlayerItemData>();

                    JSONObject itemsJSON = inventoryJSON.GetField("items");

                    for (int i = 0; i < itemsJSON.Count; i++) {
                        PlayerItemData item = new PlayerItemData();

                        item.id = (int) itemsJSON.list[i].GetField("id").n;
                        item.amount = (int) itemsJSON.list[i].GetField("amount").n;
                        item.delta = (int) itemsJSON.list[i].GetField("delta").n;

                        receivedInventory.items.Add(item);
                    }
                }

                receivedInventory.offset = (int) inventoryJSON.GetField("offset").n;
                receivedInventory.logic = inventoryJSON.GetField("logic").str;
            }

            CalculatePlayerDataResponse(receivedWallet, receivedInventory);
        }

        public WalletData InitWallet() {
            if (Wallet != null) return Wallet;
            TempUserInfo temp;
            try {
                string playerData =
                    File.ReadAllText(Application.streamingAssetsPath + "/defaultPlayerData.json");
                temp = JsonHelper.getObjectFromJson<TempUserInfo>(playerData);
            }
            catch (FileNotFoundException e) {
                SpilLogging.Log("defaultPlayerData.json not found. Creating a placeholder!" + e);
                string placeholder =
                    "{\"wallet\":{\"currencies\":[],\"offset\": 0,\"logic\": \"CLIENT\"},\"inventory\":{\"items\":[],\"offset\":0,\"logic\": \"\"}}";
                temp = JsonHelper.getObjectFromJson<TempUserInfo>(placeholder);
            }

            return temp.wallet;
        }

        public void SetInitalWalletValues() {
            string init = PlayerPrefs.GetString("walletInit-" + Spil.SpilUserIdEditor, "false");

            if (Wallet != null && init.Equals("false")) {
                foreach (SpilCurrencyData currency in SpilUnityEditorImplementation.gData.currencies) {
                    if (currency.initialValue > 0) {
                        WalletOperation("add", currency.id, currency.initialValue, PlayerDataUpdateReasons.InitialValue,
                            null, "sdk", null);
                    }
                }
            }

            PlayerPrefs.SetString("walletInit-" + Spil.SpilUserIdEditor, "true");
        }

        public void ResetWallet() {
            foreach (PlayerCurrencyData playerCurrency in SpilUnityEditorImplementation.pData.Wallet.currencies) {
                int initialValue = SpilUnityEditorImplementation.gData.currencies
                    .FirstOrDefault(a => a.id == playerCurrency.id).initialValue;
                int newDelta = initialValue - playerCurrency.currentBalance;

                playerCurrency.currentBalance = initialValue;
                playerCurrency.delta =
                    newDelta + playerCurrency.delta;
            }
        }

        public InventoryData InitInventory() {
            if (Inventory != null) return Inventory;
            TempUserInfo temp;
            try {
                string playerData =
                    File.ReadAllText(Application.streamingAssetsPath + "/defaultPlayerData.json");
                temp = JsonHelper.getObjectFromJson<TempUserInfo>(playerData);
            }
            catch (FileNotFoundException e) {
                SpilLogging.Log("defaultPlayerData.json not found. Creating a placeholder! " + e);
                string placeholder =
                    "{\"wallet\":{\"currencies\":[],\"offset\": 0,\"logic\": \"CLIENT\"},\"inventory\":{\"items\":[],\"offset\":0,\"logic\": \"\"}}";
                temp = JsonHelper.getObjectFromJson<TempUserInfo>(placeholder);
            }

            return temp.inventory;
        }

        public void SetInitalInventoryValues() {
            string init = PlayerPrefs.GetString("inventoryInit-" + Spil.SpilUserIdEditor, "false");

            if (Inventory != null && init.Equals("false")) {
                foreach (SpilItemData item in SpilUnityEditorImplementation.gData.items) {
                    if (item.initialValue > 0) {
                        InventoryOperation("add", item.id, item.initialValue, PlayerDataUpdateReasons.InitialValue,
                            null, "sdk", null);
                    }
                }
            }

            PlayerPrefs.SetString("inventoryInit-" + Spil.SpilUserIdEditor, "true");
        }

        public void ResetInventory() {
            foreach (PlayerItemData playerItem in SpilUnityEditorImplementation.pData.Inventory.items) {
                int initialValue = SpilUnityEditorImplementation.gData.items.FirstOrDefault(a => a.id == playerItem.id)
                    .initialValue;
                int newDelta = initialValue - playerItem.amount;

                playerItem.amount = initialValue;
                playerItem.delta =
                    newDelta + playerItem.delta;
            }
        }

        public void ResetPlayerData() {
            ResetWallet();
            ResetInventory();
        }

        private void CalculatePlayerDataResponse(WalletData receivedWallet, InventoryData receivedInventory) {
            bool updated = false;
            PlayerDataUpdatedData updatedData = new PlayerDataUpdatedData();

            if (receivedWallet != null) {
                foreach (PlayerCurrencyData playerCurrency in Wallet.currencies) {
                    playerCurrency.delta = 0;
                }

                if (Wallet.offset < receivedWallet.offset && receivedWallet.currencies.Count > 0) {
                    foreach (PlayerCurrencyData playerCurrency in receivedWallet.currencies) {
                        if (receivedWallet.logic.Equals("CLIENT")) {
                            PlayerCurrencyData currency =
                                Wallet.currencies.FirstOrDefault(a => a.id == playerCurrency.id);

                            if (currency == null) continue;
                            if (Wallet.offset == 0 && receivedWallet.offset != 0) {
                                currency.currentBalance = playerCurrency.currentBalance;
                            }
                            else {
                                if (playerCurrency.delta != 0) {
                                    int updatedBalance =
                                        currency.currentBalance + playerCurrency.delta;

                                    if (updatedBalance < 0) {
                                        updatedBalance = 0;
                                    }

                                    currency.currentBalance = updatedBalance;
                                }
                            }

                            updated = true;
                            updatedData.currencies.Add(currency);
                        }
                        else if (receivedWallet.logic.Equals("SERVER")) {
                        }
                    }
                }

                Wallet.offset = receivedWallet.offset;
                Wallet.logic = receivedWallet.logic;
            }

            if (receivedInventory != null) {
                foreach (PlayerItemData playerItem in Inventory.items) {
                    playerItem.delta = 0;
                }

                if (Inventory.offset < receivedInventory.offset && receivedInventory.items.Count > 0) {
                    List<PlayerItemData> itemsToBeAdded = new List<PlayerItemData>();

                    foreach (PlayerItemData playerItem in receivedInventory.items) {
                        if (receivedInventory.logic.Equals("CLIENT")) {
                            PlayerItemData item = Inventory.items.FirstOrDefault(a => a.id == playerItem.id);
                            if (item != null && playerItem.delta != 0) {
                                item.amount = item.amount + playerItem.delta;
                            }
                            else {
                                itemsToBeAdded.Add(playerItem);
                            }

                            updated = true;
                        }
                        else if (receivedInventory.logic.Equals("SERVER")) {
                        }

                        updatedData.items.Add(playerItem);
                    }

                    foreach (PlayerItemData itemToAdd in itemsToBeAdded) {
                        SpilItemData item = GetItemFromObjects(itemToAdd.id);

                        if (item != null && itemToAdd.amount > 0) {
                            PlayerItemData playerItem = new PlayerItemData();
                            playerItem.id = item.id;
                            playerItem.name = item.name;
                            playerItem.type = item.type;
                            playerItem.amount = itemToAdd.amount;
                            playerItem.value = itemToAdd.value;
                            playerItem.delta = 0;

                            Inventory.items.Add(playerItem);

                            updated = true;
                        }
                    }
                }

                Inventory.offset = receivedInventory.offset;
                Inventory.logic = receivedInventory.logic;
            }

            if (updated) {
                updatedData.reason = PlayerDataUpdateReasons.ServerUpdate;

                SpilUnityImplementationBase.firePlayerDataUpdated(JsonHelper.getJSONFromObject(updatedData));
            }
            SpilUnityImplementationBase.firePlayerDataAvailable();
        }

        public void WalletOperation(string action, int currencyId, int amount, string reason, string reasonDetails,
            string location, string transactionId) {
            if (currencyId <= 0 || reason == null) {
                SpilLogging.Error("Error updating wallet!");
                return;
            }

            PlayerCurrencyData currency = null;

            foreach (PlayerCurrencyData playerCurrency in Wallet.currencies) {
                if (playerCurrency.id == currencyId) {
                    currency = playerCurrency;
                }
            }

            if (currency == null) {
                SpilLogging.Error("Currency does not exist!");
                return;
            }

            int currentBalance = currency.currentBalance;

            if (action.Equals("subtract")) {
                amount = -amount;
            }

            int updatedBalance = currentBalance + amount;

            if (updatedBalance < 0) {
                SpilLogging.Error("Not enough balance for currency!");
                return;
            }

            int updatedDelta = amount + currency.delta;

            if (updatedDelta == 0) {
                updatedDelta = amount;
            }

            currency.delta = updatedDelta;
            currency.currentBalance = updatedBalance;

            if (Wallet.logic.Equals("CLIENT")) {
                UpdateCurrency(currency);

                PlayerDataUpdatedData updatedData = new PlayerDataUpdatedData();
                updatedData.currencies.Add(currency);
                updatedData.reason = reason;
                updatedData.location = location;

                SpilUnityImplementationBase.firePlayerDataUpdated(JsonHelper.getJSONFromObject(updatedData));

                SendUpdatePlayerDataEvent(reason, reasonDetails, location, transactionId);
            }
            else if (Wallet.logic.Equals("SERVER")) {
            }
        }

        private PlayerCurrencyData GetCurrencyFromWallet(int currencyId) {
            foreach (PlayerCurrencyData playerCurrency in Wallet.currencies) {
                if (playerCurrency.id == currencyId) {
                    return playerCurrency;
                }
            }

            return null;
        }

        private void UpdateCurrency(PlayerCurrencyData currency) {
            foreach (PlayerCurrencyData playerCurrency in Wallet.currencies) {
                if (playerCurrency.id != currency.id) continue;
                playerCurrency.currentBalance = currency.currentBalance;
                playerCurrency.delta = currency.delta;
            }
        }

        public void InventoryOperation(string action, int itemId, int amount, string reason, string reasonDetails,
            string location, string transactionId) {
            SpilItemData gameItem = GetItemFromObjects(itemId);

            if (gameItem == null || itemId <= 0 || action == null || reason == null) {
                SpilLogging.Error("Error updating item to player inventory!");
                return;
            }

            PlayerItemData item = new PlayerItemData();
            item.id = gameItem.id;
            item.name = gameItem.name;
            item.type = gameItem.type;
            item.amount = amount;
            item.delta = amount;

            PlayerItemData inventoryItem = GetItemFromInventory(itemId);

            if (inventoryItem != null) {
                int inventoryItemAmount = inventoryItem.amount;

                if (action.Equals("add")) {
                    inventoryItemAmount = inventoryItemAmount + amount;
                }
                else if (action.Equals("subtract")) {
                    inventoryItemAmount = inventoryItemAmount - amount;

                    if (inventoryItemAmount < 0) {
                        SpilLogging.Error("Could not remove item as amount is too low!");
                        return;
                    }
                }

                inventoryItem.delta = amount;
                inventoryItem.amount = inventoryItemAmount;
                UpdateItem(inventoryItem);
            }
            else {
                if (action.Equals("add")) {
                    Inventory.items.Add(item);
                }
                else if (action.Equals("subtract")) {
                    SpilLogging.Error("Could not remove item as amount is too low!");
                }
            }

            PlayerDataUpdatedData updatedData = new PlayerDataUpdatedData();
            updatedData.items.Add(item);
            updatedData.reason = reason;
            updatedData.location = location;

            SpilUnityImplementationBase.firePlayerDataUpdated(JsonHelper.getJSONFromObject(updatedData));

            SendUpdatePlayerDataEvent(item, reason, reasonDetails, location, transactionId);
        }

        private SpilItemData GetItemFromObjects(int itemId) {
            foreach (SpilItemData item in SpilUnityEditorImplementation.gData.items) {
                if (item.id == itemId) {
                    return item;
                }
            }

            return null;
        }

        private PlayerItemData GetItemFromInventory(int itemId) {
            foreach (PlayerItemData item in Inventory.items) {
                if (item.id == itemId) {
                    return item;
                }
            }

            return null;
        }

        private void UpdateItem(PlayerItemData item) {
            foreach (PlayerItemData playerItem in Inventory.items) {
                if (playerItem.id != item.id) continue;
                playerItem.amount = item.amount;
                playerItem.delta = item.delta;
            }
        }

        public void BuyBundle(int bundleId, string reason, string reasonDetails, string location,
            string transactionId) {
            PlayerDataUpdatedData updatedData = new PlayerDataUpdatedData();

            SpilBundleData bundle = GetBundleFromObjects(bundleId);

            if (bundle == null || reason == null) {
                SpilLogging.Error("Error adding bundle to player inventory!");
                return;
            }

            SpilShopPromotionData promotion = GetPromotionFromObjects(bundleId);
            bool isPromotionValid = false;

            if (promotion != null) {
                isPromotionValid = IsPromotionValid(promotion);
            }

            List<SpilBundlePriceData> bundlePrices = isPromotionValid ? promotion.prices : bundle.prices;

            foreach (SpilBundlePriceData bundlePrice in bundlePrices) {
                PlayerCurrencyData currency = GetCurrencyFromWallet(bundlePrice.currencyId);

                if (currency == null) {
                    SpilLogging.Error("Currency does not exist!");
                    return;
                }

                int currentBalance = currency.currentBalance;
                int updatedBalance = currentBalance - bundlePrice.value;

                if (updatedBalance < 0) {
                    SpilLogging.Error("Not enough balance for currency!");
                    return;
                }

                int updatedDelta = -bundlePrice.value + currency.delta;

                if (updatedDelta == 0) {
                    updatedDelta = -bundlePrice.value;
                }

                currency.delta = updatedDelta;
                currency.currentBalance = updatedBalance;

                UpdateCurrency(currency);
                updatedData.currencies.Add(currency);
            }

            foreach (SpilBundleItemData bundleItem in bundle.items) {
                SpilItemData gameItem = GetItemFromObjects(bundleItem.id);

                if (gameItem == null) continue;
                PlayerItemData item = new PlayerItemData();
                item.id = gameItem.id;
                item.name = gameItem.name;
                item.type = gameItem.type;

                PlayerItemData inventoryItem = GetItemFromInventory(bundleItem.id);

                int inventoryItemAmount;

                if (inventoryItem != null) {
                    inventoryItemAmount = inventoryItem.amount;

                    int promoAmount = 1;

                    if (isPromotionValid) {
                        promoAmount = promotion.amount;
                    }

                    inventoryItemAmount = inventoryItemAmount + bundleItem.amount * promoAmount;

                    inventoryItem.delta = bundleItem.amount;
                    inventoryItem.amount = inventoryItemAmount;

                    UpdateItem(inventoryItem);

                    updatedData.items.Add(inventoryItem);
                }
                else {
                    inventoryItemAmount = bundleItem.amount;

                    if (isPromotionValid) {
                        inventoryItemAmount = inventoryItemAmount * promotion.amount;
                    }

                    item.delta = inventoryItemAmount;
                    item.amount = inventoryItemAmount;

                    Inventory.items.Add(item);

                    updatedData.items.Add(item);
                }
            }

            updatedData.reason = reason;
            updatedData.location = location;

            SpilUnityImplementationBase.firePlayerDataUpdated(JsonHelper.getJSONFromObject(updatedData));

            SendUpdatePlayerDataEvent(bundle, reason, reasonDetails, location, transactionId);
        }

        private SpilBundleData GetBundleFromObjects(int bundleId) {
            foreach (SpilBundleData bundleData in SpilUnityEditorImplementation.gData.bundles) {
                if (bundleData.id == bundleId) {
                    return bundleData;
                }
            }

            return null;
        }

        private SpilShopPromotionData GetPromotionFromObjects(int bundleId) {
            foreach (SpilShopPromotionData shopPromotionData in SpilUnityEditorImplementation.gData.promotions) {
                if (shopPromotionData.bundleId == bundleId) {
                    return shopPromotionData;
                }
            }

            return null;
        }

        private bool IsPromotionValid(SpilShopPromotionData promotion) {
            return DateTime.Now > promotion.startDate && DateTime.Now < promotion.endDate;
        }

        private void SendUpdatePlayerDataEvent(string reason, string reasonDetails, string location,
            string transationId) {
            SpilEvent spilEvent = Spil.MonoInstance.gameObject.AddComponent<SpilEvent>();
            spilEvent.eventName = "updatePlayerData";

            JSONObject walletJSON = new JSONObject();
            List<PlayerCurrencyData> list = new List<PlayerCurrencyData>();

            foreach (PlayerCurrencyData currencyData in Wallet.currencies) {
                if (currencyData.delta != 0) {
                    list.Add(currencyData);
                }
            }

            JSONObject currenciesJSON = new JSONObject(JSONObject.Type.ARRAY);

            foreach (PlayerCurrencyData currencyData in list) {
                JSONObject obj = new JSONObject();
                obj.AddField("id", currencyData.id);
                obj.AddField("currentBalance", currencyData.currentBalance);
                obj.AddField("delta", currencyData.delta);

                currenciesJSON.Add(obj);
            }

            walletJSON.AddField("currencies", currenciesJSON);
            walletJSON.AddField("offset", Wallet.offset);

            spilEvent.customData.AddField("wallet", walletJSON);
            spilEvent.customData.AddField("reason", reason);

            if (location != null) {
                spilEvent.customData.AddField("location", location);
            }

            if (transationId != null) {
                spilEvent.customData.AddField("transactionId", transationId);
            }

            spilEvent.Send();
        }

        private void SendUpdatePlayerDataEvent(PlayerItemData item, string reason, string reasonDetails,
            string location, string transationId) {
            SpilEvent spilEvent = Spil.MonoInstance.gameObject.AddComponent<SpilEvent>();
            spilEvent.eventName = "updatePlayerData";

            JSONObject walletJSON = new JSONObject();
            walletJSON.AddField("offset", Wallet.offset);

            spilEvent.customData.AddField("wallet", walletJSON);

            JSONObject inventoryJSON = new JSONObject();

            JSONObject itemsJSON = new JSONObject(JsonHelper.getJSONFromObject(Inventory.items));

            inventoryJSON.AddField("items", itemsJSON);
            inventoryJSON.AddField("offset", Inventory.offset);

            spilEvent.customData.AddField("inventory", inventoryJSON);

            spilEvent.customData.AddField("item", new JSONObject(JsonHelper.getJSONFromObject(item)));

            spilEvent.customData.AddField("reason", reason);

            if (reasonDetails != null) {
                spilEvent.customData.AddField("reasonDetails", reasonDetails);
            }

            if (location != null) {
                spilEvent.customData.AddField("location", location);
            }

            if (transationId != null) {
                spilEvent.customData.AddField("transactionId", transationId);
            }

            spilEvent.Send();
        }

        private void SendUpdatePlayerDataEvent(SpilBundleData bundle, string reason, string reasonDetails,
            string location, string transationId) {
            SpilEvent spilEvent = Spil.MonoInstance.gameObject.AddComponent<SpilEvent>();
            spilEvent.eventName = "updatePlayerData";

            JSONObject walletJSON = new JSONObject();

            JSONObject currenciesJSON = new JSONObject(JsonHelper.getJSONFromObject(Wallet.currencies));

            walletJSON.AddField("currencies", currenciesJSON);
            walletJSON.AddField("offset", Wallet.offset);

            spilEvent.customData.AddField("wallet", walletJSON);

            JSONObject inventoryJSON = new JSONObject();

            JSONObject itemsJSON = new JSONObject(JsonHelper.getJSONFromObject(Inventory.items));

            inventoryJSON.AddField("items", itemsJSON);
            inventoryJSON.AddField("offset", Inventory.offset);

            spilEvent.customData.AddField("inventory", inventoryJSON);

            spilEvent.customData.AddField("bundle", new JSONObject(JsonHelper.getJSONFromObject(bundle)));

            spilEvent.customData.AddField("reason", reason);

            if (reasonDetails != null) {
                spilEvent.customData.AddField("reasonDetails", reasonDetails);
            }

            if (location != null) {
                spilEvent.customData.AddField("location", location);
            }

            if (transationId != null) {
                spilEvent.customData.AddField("transactionId", transationId);
            }

            spilEvent.Send();
        }

        public void SendUpdatePlayerDataEvent(bool wallet, bool inventory, string reason) {
            SpilEvent spilEvent = Spil.MonoInstance.gameObject.AddComponent<SpilEvent>();
            spilEvent.eventName = "updatePlayerData";

            if (wallet) {
                JSONObject walletJSON = new JSONObject();

                JSONObject currenciesJSON =
                    new JSONObject(JsonHelper.getJSONFromObject(SpilUnityEditorImplementation.pData.Wallet.currencies));

                walletJSON.AddField("currencies", currenciesJSON);
                walletJSON.AddField("offset", Wallet.offset);

                spilEvent.customData.AddField("wallet", walletJSON);
            }

            if (inventory) {
                JSONObject inventoryJSON = new JSONObject();

                JSONObject itemsJSON =
                    new JSONObject(JsonHelper.getJSONFromObject(SpilUnityEditorImplementation.pData.Inventory.items));

                inventoryJSON.AddField("items", itemsJSON);
                inventoryJSON.AddField("offset", Inventory.offset);

                spilEvent.customData.AddField("inventory", inventoryJSON);
            }

            spilEvent.customData.AddField("reason", reason);

            spilEvent.Send();
        }

        public class TempUserInfo {
            public WalletData wallet;
            public InventoryData inventory;
        }
    }
}

#endif