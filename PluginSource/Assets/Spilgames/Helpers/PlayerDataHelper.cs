using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using SpilGames.Unity.Utils;
using SpilGames.Unity.Helpers;

namespace SpilGames.Unity.Helpers
{
	public class PlayerDataHelper
	{
		public Wallet Wallet;
		public Inventory Inventory;
		
		public PlayerDataHelper (WalletData wallet, InventoryData inventory)
		{
			Wallet = new Wallet(wallet.currencies);
			Inventory = new Inventory(inventory.items);
		}
		
		public void ConsumeBundle(int bundleId, string reason)
		{
			Spil.Instance.ConsumeBundle(bundleId, reason);
		}
	}
	
	public class PlayerCurrency : Currency
	{
		public int CurrrentBalance { get { return currentBalance; } }
		private int currentBalance;
		
		public int Delta { get { return delta; } }
		private int delta;
		
		public PlayerCurrency(int id, string name, int type, int currentBalance, int delta) : base(id, name, type)
		{
			this.currentBalance = currentBalance;
			this.delta = delta;
		}
	}
	
	public class Wallet
	{
		public List<PlayerCurrency> Currencies { get { return currencies; } }
		public List<PlayerCurrency> currencies;
		
		public Wallet(List<PlayerCurrencyData> currencyData)
		{
			currencies = new List<PlayerCurrency>();
			
			//Adding currencies of the player
			foreach(PlayerCurrencyData playerCurrencyData in currencyData)
			{
				currencies.Add(new PlayerCurrency(playerCurrencyData.id, playerCurrencyData.name, playerCurrencyData.type, playerCurrencyData.currentBalance, playerCurrencyData.delta));
			}
			
		}
		
		public void Add (int currencyId, int amount, string reason)
		{
			Spil.Instance.AddCurrencyToWallet(currencyId, amount, reason);
		}
		
		public void Subtract (int currencyId, int amount, string reason)
		{
			Spil.Instance.SubtractCurrencyFromWallet(currencyId, amount, reason);
		}
	}
	
	public class PlayerItem : Item
	{
		public int Amount { get { return amount; } }
		private int amount;
		
		public int Value { get { return value; } }
		private int value;
		
		public PlayerItem(int id, string name, int type, int amount, int value) : base(id, name, type)
		{
			this.amount = amount;
			this.value = value;
		}
	}
	
	public class Inventory
	{
		public List<PlayerItem> Items { get { return items; } }
		private List<PlayerItem> items;
		
		public Inventory(List<PlayerItemData> itemData)
		{
			items = new List<PlayerItem>();
			
			//Adding currencies of the player
			foreach(PlayerItemData playerItemData in itemData)
			{
				items.Add(new PlayerItem(playerItemData.id, playerItemData.name, playerItemData.type, playerItemData.amount, playerItemData.value));
			}
		}
		
		public void Add (int itemId, int amount, string reason)
		{
			Spil.Instance.AddItemToInventory(itemId, amount, reason);
		}
		
		public void Subtract (int itemId, int amount, string reason)
		{
			Spil.Instance.SubtractItemFromInventory(itemId, amount, reason);
		}
	}
}

