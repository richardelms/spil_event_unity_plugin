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
		public List<Currency> Currencies = new List<Currency>();
		public List<Item> Items = new List<Item>();
		public List<Bundle> Bundles = new List<Bundle>();
		public Shop Shop;
		public List<Promotion> Promotions = new List<Promotion>();
		
		public SpilGameDataHelper (List<SpilCurrencyData> currencies , List<SpilItemData> items, List<SpilBundleData> bundles, List<SpilShopTabData> shop, List<SpilShopPromotionData> promotions)
		{
			foreach(SpilCurrencyData spilCurrencyData in currencies)
			{
				Currencies.Add(new Currency(spilCurrencyData.id, spilCurrencyData.name, spilCurrencyData.type));
			}

            foreach (SpilItemData spilCurrencyItems in items)
			{
				Items.Add(new Item(spilCurrencyItems.id, spilCurrencyItems.name, spilCurrencyItems.type));
			}

			foreach(SpilBundleData spilBundleData in bundles)
			{
				Bundles.Add(new Bundle(spilBundleData.id, spilBundleData.name, spilBundleData.prices, spilBundleData.items));
			}

			//Adding shop data to helper
			Shop = new Shop(shop);

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
		public int Id { get { return _Id; } }
		private int _Id;

		/// <summary>
		/// The currency Name
		/// </summary>
		public string Name { get { return _Name; } }
		private string _Name;

		/// <summary>
		/// The currency Type (Premium and Non-Premium)
		/// </summary>
		public int Type { get { return _Type; } }
		public int _Type;
		
		public Currency(int id, string name, int type)
		{
			_Id = id;
			_Name = name;
			_Type = type;
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
		public int Id { get { return _Id; } }
		private int _Id;

		/// <summary>
		/// The item Name
		/// </summary>
		public string Name { get { return _Name; } }
		private string _Name;

		/// <summary>
		/// The item Type (Consumable, Booster and Permanent)
		/// </summary>
		public int Type { get { return _Type; } }
		public int _Type;
		
		public Item(int id, string name, int type)
		{
			_Id = id;
			_Name = name;
			_Type = type;
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
		public int Id { get { return _Id; } }
		private int _Id;

		/// <summary>
		/// The bundle Name
		/// </summary>
		public string Name { get { return _Name; } }
		private string _Name;

		/// <summary>
		/// The bundle Prices. Can have multiple prices with different currencies
		/// </summary>
		public List<BundlePrice> Prices { get { return _Prices; } }
		private List<BundlePrice> _Prices = new List<BundlePrice>();

		/// <summary>
		/// The bundle Items that are contained within a Bundle
		/// </summary>
		public List<BundleItem> Items { get { return _Items; } }
		private List<BundleItem> _Items = new List<BundleItem>();
		
		public Bundle(int id, string name, List<SpilBundlePriceData> prices, List<SpilBundleItemData> items)
        {
			_Id = id;
			_Name = name;
					
			//Adding Prices for Bundle
			foreach(SpilBundlePriceData bundlePriceData in prices)
			{
				_Prices.Add(new BundlePrice(bundlePriceData.currencyId, bundlePriceData.value));
			}
			
			//Adding Items to Bundle
			foreach(SpilBundleItemData bundleItemData in items)
			{	
				_Items.Add(new BundleItem(bundleItemData.id, bundleItemData.amount));
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
		public int CurrencyId { get { return _CurrencyId; } }
		private int _CurrencyId;

		/// <summary>
		/// The value required in order to consume the bundle for the assoctiated currency
		/// </summary>
		public int Value { get { return _Value; } }
		private int _Value;
		
		public BundlePrice(int currencyId, int value)
		{
			_CurrencyId = currencyId;
			_Value = value;
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
		public int Id { get { return _Id; } }
		private int _Id;

		/// <summary>
		/// The amount if items contained withing the Bundle Item
		/// </summary>
		public int Amount { get { return _Amount; } }
		private int _Amount;
		
		public BundleItem(int id, int amount)
		{
			_Id = id;
			_Amount = amount;
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
		public List<Tab> Tabs { get { return _Tabs; } }
		private List<Tab> _Tabs = new List<Tab>();

		public Shop(List<SpilShopTabData> shop)
		{
			foreach (SpilShopTabData tab in shop) 
			{
				_Tabs.Add (new Tab(tab.name, tab.entries));
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
		public string Name { get { return _Name; } }
		private string _Name;

		/// <summary>
		/// The Shop Entries as defined in SLOT
		/// </summary>
		public List<Entry> Entries { get { return _Entries; } }
		private List<Entry> _Entries = new List<Entry>();

		public Tab(string name, List<SpilShopEntryData> entries)
		{
			_Name = name;

			foreach (SpilShopEntryData entry in entries) 
			{
				_Entries.Add (new Entry(entry.bundleId, entry.label, entry.position));
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
		public int BundleId { get { return _BundleId; } }
		private int _BundleId;

		/// <summary>
		/// The entry label
		/// </summary>
		public string Label { get { return _Label; } }
		private string _Label;

		/// <summary>
		/// The entry position as defined in SLOT
		/// </summary>
		public int Position { get { return _Position; } }
		private int _Position;

		public Entry(int bundleId, string label, int position)
		{
			_BundleId = bundleId;
			_Label = label;
			_Position = position;
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
		public int BundleId { get { return _BundleId; } }
		private int _BundleId;

		/// <summary>
		/// The amount of bundles for the shop promotion
		/// </summary>
		public int Amount { get { return _Amount; } }
		private int _Amount;

		/// <summary>
		/// The promotion Prices. Can have multiple prices with different currencies
		/// </summary>
		public List<BundlePrice> Prices { get { return _Prices; } }
		private List<BundlePrice> _Prices = new List<BundlePrice>();

		/// <summary>
		/// The promotion discount label
		/// </summary>
		public string Discount { get { return _Discount; } }
		private string _Discount;

		/// <summary>
		/// The begin date of an active promotion for this bundle. Returns DateTime.Min if there is no active promotion for this bundle.
		/// </summary>
		public DateTime PromotionBeginDate { get { return _StartDate; } }
		private DateTime _StartDate;

		/// <summary>
		/// The begin date of an active promotion for this bundle. Returns DateTime.Min if there is no active promotion for this bundle.
		/// </summary>
		public DateTime PromotionEndDate { get { return _EndDate; } }
		private DateTime _EndDate;

		public Promotion(int bundleId, int amount, List<SpilBundlePriceData> prices, string discount, DateTime startDate, DateTime endDate)
		{
			_BundleId = bundleId;
			_Amount = amount;

			foreach(SpilBundlePriceData bundlePriceData in prices)
			{
				_Prices.Add(new BundlePrice(bundlePriceData.currencyId, bundlePriceData.value));
			}

			_Discount = discount;
			_StartDate = startDate;
			_EndDate = endDate;
		}
	}
}

