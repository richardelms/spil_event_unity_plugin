﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using SpilGames.Unity.Base.SDK;
using System;

namespace SpilGames.Unity.Helpers.GameData {
    /// <summary>
    /// This is the business object that the developer can use to work with for the InGame Shop.
    /// </summary>
    public class Shop {
        /// <summary>
        /// The Shop Tabs as defined in SLOT
        /// </summary>
        public List<Tab> Tabs {
            get { return _Tabs; }
        }

        private List<Tab> _Tabs = new List<Tab>();

        public Shop(List<SpilShopTabData> shop) {
            if (shop != null) {
                foreach (SpilShopTabData tab in shop) {
                    _Tabs.Add(new Tab(tab.name, tab.entries));
                }
            }
        }
    }

    /// <summary>
    /// This is the business object that the developer can use to work with for the Tab contained in the Shop.
    /// </summary>
    public class Tab {
        /// <summary>
        /// The tab Name
        /// </summary>
        public string Name {
            get { return _Name; }
        }

        private string _Name;

        /// <summary>
        /// The Shop Entries as defined in SLOT
        /// </summary>
        public List<Entry> Entries {
            get { return _Entries; }
        }

        private List<Entry> _Entries = new List<Entry>();

        public Tab(string name, List<SpilShopEntryData> entries) {
            _Name = name;
            if (entries != null) {
                foreach (SpilShopEntryData entry in entries) {
                    _Entries.Add(new Entry(entry.bundleId, entry.label, entry.position));
                }
            }
        }
    }

    /// <summary>
    /// This is the business object that the developer can use to work with for the Entry contained in the Tab.
    /// </summary>
    public class Entry {
        /// <summary>
        /// The bundle Id assoctiated with this shop entry
        /// </summary>
        public int BundleId {
            get { return _BundleId; }
        }

        private int _BundleId;

        /// <summary>
        /// The entry label
        /// </summary>
        public string Label {
            get { return _Label; }
        }

        private string _Label;

        /// <summary>
        /// The entry position as defined in SLOT
        /// </summary>
        public int Position {
            get { return _Position; }
        }

        private int _Position;

        public Entry(int bundleId, string label, int position) {
            _BundleId = bundleId;
            _Label = label;
            _Position = position;
        }
    }

    /// <summary>
    /// This is the business object that the developer can use to work with for the InGame Shop Promotion.
    /// </summary>
    public class Promotion {
        /// <summary>
        /// The bundle Id assoctiated with this shop promotion
        /// </summary>
        public int BundleId {
            get { return _BundleId; }
        }

        private int _BundleId;

        /// <summary>
        /// The amount of bundles for the shop promotion
        /// </summary>
        public int Amount {
            get { return _Amount; }
        }

        private int _Amount;

        /// <summary>
        /// The promotion Prices. Can have multiple prices with different currencies
        /// </summary>
        public List<BundlePrice> Prices {
            get { return _Prices; }
        }

        private List<BundlePrice> _Prices = new List<BundlePrice>();

        /// <summary>
        /// The promotion discount label
        /// </summary>
        public string Discount {
            get { return _Discount; }
        }

        private string _Discount;

        /// <summary>
        /// The begin date of an active promotion for this bundle. Returns DateTime.Min if there is no active promotion for this bundle.
        /// </summary>
        public DateTime PromotionBeginDate {
            get { return _StartDate; }
        }

        private DateTime _StartDate;

        /// <summary>
        /// The begin date of an active promotion for this bundle. Returns DateTime.Min if there is no active promotion for this bundle.
        /// </summary>
        public DateTime PromotionEndDate {
            get { return _EndDate; }
        }

        private DateTime _EndDate;

        public Promotion(int bundleId, int amount, List<SpilBundlePriceData> prices, string discount, DateTime startDate, DateTime endDate) {
            _BundleId = bundleId;
            _Amount = amount;

            if (prices != null) {
                foreach (SpilBundlePriceData bundlePriceData in prices) {
                    _Prices.Add(new BundlePrice(bundlePriceData.currencyId, bundlePriceData.value));
                }
            }

            _Discount = discount;
            _StartDate = startDate;
            _EndDate = endDate;
        }
    }
}