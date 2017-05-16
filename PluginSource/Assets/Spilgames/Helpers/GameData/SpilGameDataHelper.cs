using System;
using System.Collections.Generic;
using UnityEngine;
using SpilGames.Unity.Base.Implementations;
using SpilGames.Unity.Base.SDK;
using SpilGames.Unity.Json;

namespace SpilGames.Unity.Helpers.GameData
{
	/// <summary>
	/// This is the business object that the developer can use to work with Spil Game Data (Currencies, Items, Bundles, Shop).
	/// Much easier to work with than the raw data!
	/// </summary>
	public class SpilGameDataHelper
	{
		public List<Currency> Currencies = new List<Currency> ();
		public List<Item> Items = new List<Item> ();
		public List<Bundle> Bundles = new List<Bundle> ();
		public Shop Shop;
		public List<Promotion> Promotions = new List<Promotion> ();

		public SpilGameDataHelper (SpilUnityImplementationBase Instance)
		{
			string spilGameDataString = Instance.GetSpilGameDataFromSdk ();
			if (spilGameDataString != null) {
				SpilGameData spilGameData = JsonHelper.getObjectFromJson<SpilGameData> (spilGameDataString);
				if (spilGameData != null) {
					AddDataToHelper (spilGameData.currencies, spilGameData.items, spilGameData.bundles, spilGameData.shop, spilGameData.promotions);
					Debug.Log ("Spil GameData created");
				} else {
					Debug.Log ("Spil GameData not created, Instance.GetSpilGameDataFromsdk() did not return any data.");
				}				
			}
		}

		public void RefreshData (SpilUnityImplementationBase Instance)
		{
			string spilGameDataString = Instance.GetSpilGameDataFromSdk ();
			if (spilGameDataString != null) {
				SpilGameData spilGameData = JsonHelper.getObjectFromJson<SpilGameData> (spilGameDataString);
				if (spilGameData != null) {
					AddDataToHelper (spilGameData.currencies, spilGameData.items, spilGameData.bundles, spilGameData.shop, spilGameData.promotions);
					Debug.Log ("Spil GameData Refreshed");
				} else {
					Debug.Log ("Spil GameData not created, Instance.GetSpilGameDataFromsdk() did not return any data.");
				}				
			}
		}

		/// <summary>
		/// Helper method that returns the Bundle for a given bundleId
		/// Returns null if no bundle was found
		/// </summary>
		public Bundle GetBundle (int bundleId)
		{
			if (Bundles != null) {
				foreach (Bundle bundle in Bundles) {
					if (bundle.Id == bundleId) {
						return bundle;
					}
				}
				return null;
			} else {
				return null;
			}
		}

		/// <summary>
		/// Helper method that returns the Bundle for a given name
		/// Returns null if no bundle was found
		/// </summary>
		public Bundle GetBundle (string name)
		{
			if (Bundles != null) {
				foreach (Bundle bundle in Bundles) {
					if (bundle.Name == name) {
						return bundle;
					}
				}
				return null;
			} else {
				return null;
			}
		}

		/// <summary>
		/// Helper method that returns the Item for a given itemId
		/// Returns null if no item was found
		/// </summary>
		public Item GetItem (int itemId)
		{
			if (Items != null) {
				foreach (Item item in Items) {
					if (item.Id == itemId) {
						return item;
					}
				}
				return null;
			} else {
				return null;
			}
		}

		/// <summary>
		/// Helper method that returns the Item for a given name
		/// Returns null if no item was found
		/// </summary>
		public Item GetItem (string name)
		{
			if (Items != null) {
				foreach (Item item in Items) {
					if (item.Name == name) {
						return item;
					}
				}
				return null;
			} else {
				return null;
			}
		}

		/// <summary>
		/// Helper method that returns the Currency for a given currencyId
		/// Returns null if no currency was found
		/// </summary>
		public Currency GetCurrency (int currencyId)
		{
			if (Currencies != null) {
				foreach (Currency currency in Currencies) {
					if (currency.Id == currencyId) {
						return currency;
					}
				}
				return null;
			} else {
				return null;
			}
		}

		/// <summary>
		/// Helper method that returns the Currency for a given name
		/// Returns null if no currency was found
		/// </summary>
		public Currency GetCurrency (string name)
		{
			if (Currencies != null) {
				foreach (Currency currency in Currencies) {
					if (currency.Name == name) {
						return currency;
					}
				}
				return null;
			} else {
				return null;
			}
		}

		private void AddDataToHelper (List<SpilCurrencyData> currencies, List<SpilItemData> items, List<SpilBundleData> bundles, List<SpilShopTabData> shop, List<SpilShopPromotionData> promotions)
		{
			Currencies.Clear ();

			if (currencies != null) {
				foreach (SpilCurrencyData spilCurrencyData in currencies) {
					Currencies.Add (new Currency (spilCurrencyData.id, spilCurrencyData.name, spilCurrencyData.type, spilCurrencyData.imageUrl, spilCurrencyData.displayName, spilCurrencyData.displayDescription));
				}
			}

			Items.Clear ();

			if (items != null) {
				foreach (SpilItemData spilItemsData in items) {
					Items.Add (new Item (spilItemsData.id, spilItemsData.name, spilItemsData.type, spilItemsData.imageUrl, spilItemsData.displayName, spilItemsData.displayDescription));
				}
			}

			Bundles.Clear ();

			if (bundles != null) {
				foreach (SpilBundleData spilBundleData in bundles) {
					Bundles.Add (new Bundle (spilBundleData.id, spilBundleData.name, spilBundleData.prices, spilBundleData.items, spilBundleData.imageUrl, spilBundleData.displayName, spilBundleData.displayDescription));
				}
			}

			//Adding shop data to helper
			Shop = new Shop (shop);

			Promotions.Clear ();

			if (promotions != null) {
				foreach (SpilShopPromotionData promotion in promotions) {
					Promotions.Add (new Promotion (promotion.bundleId, promotion.amount, promotion.prices, promotion.discount, promotion.startDate, promotion.endDate));
				}
			}
		}

		public void SpilGameDataHandler ()
		{
			UpdateSpilGameData ();
		}

		private void UpdateSpilGameData ()
		{
			string spilGameDataString = Spil.Instance.GetSpilGameDataFromSdk ();
			if (spilGameDataString != null) {
				SpilGameData spilGameData = JsonHelper.getObjectFromJson<SpilGameData> (spilGameDataString);
				AddDataToHelper (spilGameData.currencies, spilGameData.items, spilGameData.bundles, spilGameData.shop, spilGameData.promotions);
				Debug.Log ("Spil Game Data Updated");
			}
		}
	}
}
