using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using SpilGames.Unity.Utils;

namespace SpilGames.Unity.Helpers
{
	public class SpilGameDataHelper
	{
		public List<Currency> Currencies;
		public List<PackageItem> Items;
		public List<Bundle> Bundles;
		
		public SpilGameDataHelper (List<SpilCurrencyData> currencies , List<SpilItemData> items, List<SpilBundleData> bundles)
		{
			Currencies = new List<Currency>();
			
			//Adding currency data to helper
			foreach(SpilCurrencyData spilCurrencyData in currencies)
			{
				Currencies.Add(new Currency(spilCurrencyData.id, spilCurrencyData.name, spilCurrencyData.type));
			}
			
			Items = new List<PackageItem>();
			
			//Adding item data to helper
			foreach(SpilItemData spilCurrencyItems in items)
			{
				Items.Add(new PackageItem(spilCurrencyItems.id, spilCurrencyItems.name, spilCurrencyItems.type));
			}
			
			Bundles = new List<Bundle>();
			
			//Adding bundle data to helper
			foreach(SpilBundleData spilBundleData in bundles)
			{
				Bundles.Add(new Bundle(spilBundleData.id, spilBundleData.name, spilBundleData.prices, spilBundleData.items));
			}
			
		}
		
	}
	
	public class Currency
	{
		public int Id { get { return id; } }
		private int id;
		
		public string Name { get { return name; } }
		private string name;
		
		public int Type { get { return type; } }
		public int type;
		
		public Currency(int id, string name, int type)
		{
			this.id = id;
			this.name = name;
			this.type = type;
		}
	}
	
	public class Item
	{
		public int Id { get { return id; } }
		private int id;
		
		public string Name { get { return name; } }
		private string name;
		
		public int Type { get { return type; } }
		public int type;
		
		public Item(int id, string name, int type)
		{
			this.id = id;
			this.name = name;
			this.type = type;
		}
	}
	
	public class Bundle
	{
		public int Id { get { return id; } }
		private int id;
		
		public string Name { get { return name; } }
		private string name;
		
		public List<BundlePrice> Prices { get { return prices; } }
		private List<BundlePrice> prices;
		
		public List<BundleItem> Items { get { return items; } }
		private List<BundleItem> items;
		
		public Bundle(int id, string name, List<SpilBundlePriceData> prices, List<SpilBundleItemData> items){
			this.id = id;
			this.name = name;
			
			this.prices = new List<BundlePrice>();
			
			//Adding Prices for Bundle
			foreach(SpilBundlePriceData bundlePriceData in prices)
			{
				this.prices.Add(new BundlePrice(bundlePriceData.currencyId, bundlePriceData.value));
			}
			
			this.items = new List<BundleItem>();
			
			//Adding Items to Bundle
			foreach(SpilBundleItemData bundleItemData in items)
			{	
				this.items.Add(new BundleItem(bundleItemData.id, bundleItemData.amount));
			}
		}
	}
	
	public class BundlePrice
	{
		public int CurrencyId { get { return currencyId; } }
		private int currencyId;
		
		public int Value { get { return value; } }
		private int value;
		
		public BundlePrice(int currencyId, int value)
		{
			this.currencyId = currencyId;
			this.value = value;
		}
	}
	
	public class BundleItem
	{
		public int Id { get { return id; } }
		private int id;
		
		public int Amount { get { return amount; } }
		private int amount;
		
		public BundleItem(int id, int amount)
		{
			this.id = id;
			this.amount = amount;
		}
	}
}

