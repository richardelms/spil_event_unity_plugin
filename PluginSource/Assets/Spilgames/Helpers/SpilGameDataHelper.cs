using System;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using SpilGames.Unity.Utils;

namespace SpilGames.Unity.Helpers
{
	/// <summary>
	/// This is the business object that the developer can use to work with Spil Game Data (Currencies, Items, Bundles, Shop).
	/// Much easier to work with than the raw data!
	/// </summary>
	public class SpilGameDataHelper
	{
		public List<Currency> Currencies;
		public List<Item> Items;
		public List<Bundle> Bundles;
		public Shop Shop;
		public List<Promotion> Promotions;
		
		public SpilGameDataHelper (List<SpilCurrencyData> currencies , List<SpilItemData> items, List<SpilBundleData> bundles, List<SpilShopTabData> shop, List<SpilShopPromotionData> promotions)
		{
			//Adding currency data to helper
			Currencies = new List<Currency>();

			foreach(SpilCurrencyData spilCurrencyData in currencies)
			{
				Currencies.Add(new Currency(spilCurrencyData.id, spilCurrencyData.name, spilCurrencyData.type));
			}
			
			//Adding item data to helper
			Items = new List<Item>();

			foreach(SpilItemData spilCurrencyItems in items)
			{
				Items.Add(new Item(spilCurrencyItems.id, spilCurrencyItems.name, spilCurrencyItems.type));
			}
			
			//Adding bundle data to helper
			Bundles = new List<Bundle>();

			foreach(SpilBundleData spilBundleData in bundles)
			{
				Bundles.Add(new Bundle(spilBundleData.id, spilBundleData.name, spilBundleData.prices, spilBundleData.items));
			}

			//Adding shop data to helper
			Shop = new Shop(shop);

			//Adding bundle promotion data to helper
			Promotions = new List<Promotion>();

			foreach (SpilShopPromotionData promotion in promotions) 
			{
				Promotions.Add (new Promotion (promotion.bundleId, promotion.amount, promotion.prices, promotion.discount, promotion.startDate, promotion.endDate));
			}

		}
		
	}

	/// <summary>
	/// This is the business object that the developer can use to work with a Currency.
	/// </summary>
	public class Currency
	{
		/// <summary>
		/// The currency Id
		/// </summary>
		public int Id { get { return id; } }
		private int id;

		/// <summary>
		/// The currency Name
		/// </summary>
		public string Name { get { return name; } }
		private string name;

		/// <summary>
		/// The currency Type (Premium and Non-Premium)
		/// </summary>
		public int Type { get { return type; } }
		public int type;
		
		public Currency(int id, string name, int type)
		{
			this.id = id;
			this.name = name;
			this.type = type;
		}
	}

	/// <summary>
	/// This is the business object that the developer can use to work with an Item.
	/// </summary>
	public class Item
	{
		/// <summary>
		/// The item Id
		/// </summary>
		public int Id { get { return id; } }
		private int id;

		/// <summary>
		/// The item Name
		/// </summary>
		public string Name { get { return name; } }
		private string name;

		/// <summary>
		/// The item Type (Consumable, Booster and Permanent)
		/// </summary>
		public int Type { get { return type; } }
		public int type;
		
		public Item(int id, string name, int type)
		{
			this.id = id;
			this.name = name;
			this.type = type;
		}
	}

	/// <summary>
	/// This is the business object that the developer can use to work a Bundle.
	/// </summary>
	public class Bundle
	{
		/// <summary>
		/// The bundle Id
		/// </summary>
		public int Id { get { return id; } }
		private int id;

		/// <summary>
		/// The bundle Name
		/// </summary>
		public string Name { get { return name; } }
		private string name;

		/// <summary>
		/// The bundle Prices. Can have multiple prices with different currencies
		/// </summary>
		public List<BundlePrice> Prices { get { return prices; } }
		private List<BundlePrice> prices;

		/// <summary>
		/// The bundle Items that are contained within a Bundle
		/// </summary>
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

	/// <summary>
	/// This is the business object that the developer can use to work with for the Bundle Price.
	/// </summary>
	public class BundlePrice
	{
		/// <summary>
		/// The currency Id assoctiated with the Bundle Price
		/// </summary>
		public int CurrencyId { get { return currencyId; } }
		private int currencyId;

		/// <summary>
		/// The value required in order to consume the bundle for the assoctiated currency
		/// </summary>
		public int Value { get { return value; } }
		private int value;
		
		public BundlePrice(int currencyId, int value)
		{
			this.currencyId = currencyId;
			this.value = value;
		}
	}

	/// <summary>
	/// This is the business object that the developer can use to work with for the Items contained in a Bundle.
	/// </summary>
	public class BundleItem
	{
		/// <summary>
		/// The item Id assoctiated with the Bundle Item
		/// </summary>
		public int Id { get { return id; } }
		private int id;

		/// <summary>
		/// The amount if items contained withing the Bundle Item
		/// </summary>
		public int Amount { get { return amount; } }
		private int amount;
		
		public BundleItem(int id, int amount)
		{
			this.id = id;
			this.amount = amount;
		}
	}

	/// <summary>
	/// This is the business object that the developer can use to work with for the InGame Shop.
	/// </summary>
	public class Shop
	{
		/// <summary>
		/// The Shop Tabs as defined in SLOT
		/// </summary>
		public List<Tab> Tabs { get { return tabs; } }
		private List<Tab> tabs;

		public Shop(List<SpilShopTabData> shop)
		{
			foreach (SpilShopTabData tab in shop) 
			{
				this.tabs.Add (new Tab(tab.name, tab.entries));
			}
		}
	}

	/// <summary>
	/// This is the business object that the developer can use to work with for the Tab contained in the Shop.
	/// </summary>
	public class Tab
	{
		/// <summary>
		/// The tab Name
		/// </summary>
		public string Name { get { return name; } }
		private string name;

		/// <summary>
		/// The Shop Entries as defined in SLOT
		/// </summary>
		public List<Entry> Entries { get { return entries; } }
		private List<Entry> entries;

		public Tab(string name, List<SpilShopEntryData> entries)
		{
			this.name = name;

			foreach (SpilShopEntryData entry in entries) 
			{
				this.entries.Add (new Entry(entry.bundleId, entry.label, entry.position));
			}
		}
	}

	/// <summary>
	/// This is the business object that the developer can use to work with for the Entry contained in the Tab.
	/// </summary>
	public class Entry
	{
		/// <summary>
		/// The bundle Id assoctiated with this shop entry
		/// </summary>
		public int BundleId { get { return bundleId; } }
		private int bundleId;

		/// <summary>
		/// The entry label
		/// </summary>
		public string Label { get { return label; } }
		private string label;

		/// <summary>
		/// The entry position as defined in SLOT
		/// </summary>
		public int Position { get { return position; } }
		private int position;

		public Entry(int bundleId, string label, int position)
		{
			this.bundleId = bundleId;
			this.label = label;
			this.position = position;
		}
	}

	/// <summary>
	/// This is the business object that the developer can use to work with for the InGame Shop Promotion.
	/// </summary>
	public class Promotion
	{
		/// <summary>
		/// The bundle Id assoctiated with this shop promotion
		/// </summary>
		public int BundleId { get { return bundleId; } }
		private int bundleId;

		/// <summary>
		/// The amount of bundles for the shop promotion
		/// </summary>
		public int Amount { get { return amount; } }
		private int amount;

		/// <summary>
		/// The promotion Prices. Can have multiple prices with different currencies
		/// </summary>
		public List<BundlePrice> Prices { get { return prices; } }
		private List<BundlePrice> prices;

		/// <summary>
		/// The promotion discount label
		/// </summary>
		public string Discount { get { return discount; } }
		private string discount;

		/// <summary>
		/// The begin date of an active promotion for this bundle. Returns DateTime.Min if there is no active promotion for this bundle.
		/// </summary>
		public DateTime PromotionBeginDate { get { return startDate; } }
		private DateTime startDate;

		/// <summary>
		/// The begin date of an active promotion for this bundle. Returns DateTime.Min if there is no active promotion for this bundle.
		/// </summary>
		public DateTime PromotionEndDate { get { return endDate; } }
		private DateTime endDate;

		public Promotion(int bundleId, int amount, List<SpilBundlePriceData> prices, string discount, DateTime startDate, DateTime endDate)
		{
			this.bundleId = bundleId;
			this.amount = amount;

			//Adding Prices for Bundle Promotion
			foreach(SpilBundlePriceData bundlePriceData in prices)
			{
				this.prices.Add(new BundlePrice(bundlePriceData.currencyId, bundlePriceData.value));
			}

			this.discount = discount;
			this.startDate = startDate;
			this.endDate = endDate;
		}
	}
	
}

