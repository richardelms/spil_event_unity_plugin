using UnityEngine;
using SpilGames.Unity;
using UnityEngine.UI;
using SpilGames.Unity.Utils;
using SpilGames.Unity.Helpers;
using System;

public class ExampleGameSpilSDK : MonoBehaviour
{
    // Here's some example methods to show what can be done

    // Note: Be sure to include a defaultGameConfig.json file with your chartboost
    // id and signature in the /StreamingAssets directory. ChartBoost videos and 
    // more apps screens won't work without them. Instructions for creating a
    // defaultGameConfig.json are included in the SpilSDK documentation.
    // A defaultGameData.json and defaultPlayerData.json file are required if
    // you wish to use game data (currencies, promotions, shop data) and 
    // player data (inventory & wallet).
    // You can take a look at the files included in the /StreamingAssets
    // folder of this app for examples.

    // Attach the listeners and update the UI when the app starts
    void Awake()
    {
        AttachListeners();
        updateUI();
    }

    #region Events

    void AttachListeners()
    {
        // Make sure that any existing handlers are removed and add new ones

        // When we've requested an ad, if it is available it will call OnAdAvailable
        Spil.Instance.OnAdAvailable -= AdAvailableHandler;
        Spil.Instance.OnAdAvailable += AdAvailableHandler;

        // When we've requested an ad, if it is not available it will call OnAdNotAvailable
        Spil.Instance.OnAdNotAvailable -= AdNotAvailableHandler;
        Spil.Instance.OnAdNotAvailable += AdNotAvailableHandler;

        // When an ad starts it will first call OnAdStarted so music can be muted etc
        Spil.Instance.OnAdStarted -= AdStartedHandler;
        Spil.Instance.OnAdStarted += AdStartedHandler;

        // When an ad finishes or is dismissed it will call OnAdFinished so music can be re-enabled etc
        Spil.Instance.OnAdFinished -= AdFinishedHandler;
        Spil.Instance.OnAdFinished += AdFinishedHandler;

        // When the SpilSDK has retrieved playerdata from the back-end PlayerDataAvailable is called
        Spil.Instance.OnPlayerDataAvailable -= PlayerDataAvailableHandler;
        Spil.Instance.OnPlayerDataAvailable += PlayerDataAvailableHandler;

        // When the player data (inventory or wallet) has been updated PlayerDataUpdated is called
        Spil.Instance.OnPlayerDataUpdated -= PlayerDataUpdatedHandler;
        Spil.Instance.OnPlayerDataUpdated += PlayerDataUpdatedHandler;

        // When something has gone wrong while retrieving or updating the player data OnPlayerDataError is called and contains information about the error
        Spil.Instance.OnPlayerDataError -= PlayerDataErrorHandler;
        Spil.Instance.OnPlayerDataError += PlayerDataErrorHandler;

        // When tbe SpilSDK has retrieved game data (currencies, promotions, shop data) from the back-end SpilGameDataAvailable is called 
        Spil.Instance.OnSpilGameDataAvailable -= SpilGameDataAvailableHandler;
        Spil.Instance.OnSpilGameDataAvailable += SpilGameDataAvailableHandler;

        // When something has gone wrong while retrieving or updating the game data SpilGameDataErrorHandler is called and contains information about the error
        Spil.Instance.OnSpilGameDataError -= SpilGameDataErrorHandler;
        Spil.Instance.OnSpilGameDataError += SpilGameDataErrorHandler;

        // When a splash screen is opened it will first call OnSplashScreenOpen so music can be muted etc
        Spil.Instance.OnSplashScreenOpen -= SplashScreenOpenHandler;
		Spil.Instance.OnSplashScreenOpen += SplashScreenOpenHandler;

        // When a splash screen closes it will call OnSplashScreenClosed so music can be re-enabled etc
        Spil.Instance.OnSplashScreenClosed -= SplashScreenClosedHandler;
		Spil.Instance.OnSplashScreenClosed += SplashScreenClosedHandler;

        // When a splash screen encountered an error while trying to open OnSplashScreenError is called and contains information about the error
        Spil.Instance.OnSplashScreenError -= SplashScreenErrorHandler;
		Spil.Instance.OnSplashScreenError += SplashScreenErrorHandler;

        // When no Splash screen has been configured in the back-end or no internet connection is available OnSplashScreenNotAvailable is called
        Spil.Instance.OnSplashScreenNotAvailable -= SplashScreenNotAvailabelHandler;
		Spil.Instance.OnSplashScreenNotAvailable += SplashScreenNotAvailabelHandler;

        // When a player taps on a button on the splash screen that should open the shop (for instance for a special promotion) OnSplashScreenOpenShop is called
		Spil.Instance.OnSplashScreenOpenShop -= SplashScreenOpenShopHandler;
		Spil.Instance.OnSplashScreenOpenShop += SplashScreenOpenShopHandler;

        // When a daily bonus screen is opened it will first call OnDailyBonusOpen so music can be muted etc
        Spil.Instance.OnDailyBonusOpen -= DailyBonusOpenHandler;
		Spil.Instance.OnDailyBonusOpen += DailyBonusOpenHandler;

        // When a daily bonus screen closes it will call OnDailyBonusClosed so music can be re-enabled etc
        Spil.Instance.OnDailyBonusClosed -= DailyBonusClosedHandler;
		Spil.Instance.OnDailyBonusClosed += DailyBonusClosedHandler;

        // When a daily bonus screen encountered an error while trying to open OnDailyBonusError is called and contains information about the error
        Spil.Instance.OnDailyBonusError -= DailyBonusErrorHandler;
		Spil.Instance.OnDailyBonusError += DailyBonusErrorHandler;

        // When no daily bonus screen has been configured in the back-end or no internet connection is available OnDailyBonusNotAvailable is called
        Spil.Instance.OnDailyBonusNotAvailable -= DailyBonusNotAvailabelHandler;
		Spil.Instance.OnDailyBonusNotAvailable += DailyBonusNotAvailabelHandler;

        // When the user has earned a daily bonus reward OnDailyBonusReward is called and contains information about the reward
		Spil.Instance.OnDailyBonusReward -= DailyBonusRewardHandler;
		Spil.Instance.OnDailyBonusReward += DailyBonusRewardHandler;
    }

    // When an ad is available it can be shown
    void AdAvailableHandler(enumAdType adType)
    {
        txtStatus1.text = adType.ToString() + " available";

        if (adType == enumAdType.RewardVideo)
        {
            Spil.Instance.PlayVideo();
        }
        else if (adType == enumAdType.MoreApps)
        {
            Spil.Instance.PlayMoreApps();
        }

        // Interstitials aren't played on command but are automatically played by the SpilSDK 
        // when certain events are fired such as "levelComplete" or "playerDies".
        // Which events trigger interstitials is configured by Spil.
        // Interstitials do trigger OnAdStarted and OnAdFinished events when they play.
    }

    // When an ad is not available the UI may have to be updated,
    // for instance to hide a button.
    void AdNotAvailableHandler(enumAdType adType)
    {
        txtStatus1.text = adType.ToString() + " was not available";
    }

    void AdStartedHandler()
    {
        // Mute the game music etc.
        txtStatus1.text = "Ad started";
    }

    void AdFinishedHandler(SpilAdFinishedResponse response)
    {
        // Re-enable the game music etc.
        txtStatus1.text = "Ad finished";

        // Reward video's may also send a reward in the response if the video wasn't dismissed
        if (response.reward != null)
        {
            int rewardAmount = response.reward.reward;
            txtStatus1.text = "Rewarded " + rewardAmount + (response.reward.currencyName != null ? " " + response.reward.currencyName : " credits");
        }
    }

    private void PlayerDataAvailableHandler()
    {
        updateUI();
    }

    private void PlayerDataUpdatedHandler(string reason, PlayerDataUpdatedData updatedData)
    {
        if (reason.Equals(PlayerDataUpdateReasons.ItemBought))
        {
            txtErrorMessage.text = "Transaction successfull";
            pnlErrorMessage.SetActive(true);
        }

        updateUI();
    }

    private void PlayerDataErrorHandler(SpilErrorMessage errorMessage)
    {
        txtErrorMessage.text = errorMessage.name + ": " + errorMessage.message;
        pnlErrorMessage.SetActive(true);

        updateUI();
        updateUIShop();
    }

    private void SpilGameDataAvailableHandler()
    {
        updateUI();
    }

    private void SpilGameDataErrorHandler(SpilErrorMessage errorMessage)
    {
        txtErrorMessage.text = errorMessage.name + ": " + errorMessage.message;
        pnlErrorMessage.SetActive(true);

        updateUI();
        updateUIShop();
    }

    public void SplashScreenOpenHandler()
    {
        txtWebStatus2.text += "\nSplashscreen open";
    }

    public void SplashScreenClosedHandler()
    {
        txtWebStatus2.text += "\nSplashscreen closed";
    }

    public void SplashScreenErrorHandler(SpilErrorMessage message)
    {
        txtWebStatus2.text += "\nSplashscreen error: " + message;
    }

    public void SplashScreenNotAvailabelHandler()
    {
        txtWebStatus2.text += "\nSplashscreen not available";
    }

    public void SplashScreenOpenShopHandler()
    {
        txtWebStatus2.text += "\nSplashscreen open shop";
    }

    public void DailyBonusOpenHandler()
    {
        txtWebStatus2.text += "\nDailybonus open";
    }

    public void DailyBonusClosedHandler()
    {
        txtWebStatus2.text += "\nDailybonus closed";
    }

    public void DailyBonusErrorHandler(SpilErrorMessage message)
    {
        txtWebStatus2.text += "\nDailybonus error: " + message;
    }

    public void DailyBonusNotAvailabelHandler()
    {
        txtWebStatus2.text += "\nDailybonus not available";
    }

    public void DailyBonusRewardHandler(String rewardList)
    {
        txtWebStatus2.text = "Splashscreen reward: " + rewardList;
    }

    #endregion

    #region Main navigation

    public GameObject pnlErrorMessage;
    public Text txtErrorMessage;

    public void btnErrorMessageOkClick()
    {
        pnlErrorMessage.SetActive(false);
    }

    int currentScreenShowing = 0;

    public GameObject panel1;
    public GameObject panel2;
    public GameObject panel3;
    public GameObject panel4;

    public void btnPrevClick()
    {
        if (--currentScreenShowing < 0)
        {
            currentScreenShowing = 3;
        }
        setCurrentPanel();
    }

    public void btnNextClick()
    {
        if (++currentScreenShowing > 3)
        {
            currentScreenShowing = 0;
        }
        setCurrentPanel();
    }

    private void setCurrentPanel()
    {
        panel1.SetActive(currentScreenShowing == 0);
        panel2.SetActive(currentScreenShowing == 1);
        panel3.SetActive(currentScreenShowing == 2);
        panel4.SetActive(currentScreenShowing == 3);

        switch (currentScreenShowing)
        {
            case 0:
                break;
            case 1:
                updateUI();
                break;
            case 2:
                updateUIShop();
                break;
            case 3:
                break;
        }
    }

    #endregion

    #region Tab 1: Ads and tracking

    public Button btnRequestRewardVideo;
    public Button btnFyberRewardVideo;
    public Button btnChartBoostRewardVideo;
    public Button btnMoreApps;
    public Button btnDFPInterstitial;
    public Button btnChartBoostInterstitial;
    public Button btnCake;

    public Text txtStatus1;
    public Text txtStatus2;

    public void toggleUIEnabled(bool enabled)
    {
        if (enabled)
        {
            btnRequestRewardVideo.gameObject.SetActive(true);
            btnFyberRewardVideo.gameObject.SetActive(true);
            btnChartBoostRewardVideo.gameObject.SetActive(true);
            btnMoreApps.gameObject.SetActive(true);
            btnDFPInterstitial.gameObject.SetActive(true);
            btnChartBoostInterstitial.gameObject.SetActive(true);
            btnCake.gameObject.SetActive(true);
        } else {
            btnRequestRewardVideo.gameObject.SetActive(false);
            btnFyberRewardVideo.gameObject.SetActive(false);
            btnChartBoostRewardVideo.gameObject.SetActive(false);
            btnMoreApps.gameObject.SetActive(false);
            btnDFPInterstitial.gameObject.SetActive(false);
            btnChartBoostInterstitial.gameObject.SetActive(false);
            btnCake.gameObject.SetActive(false);
        }
    }

    public void RequestRewardVideo()
    {
        txtStatus1.text = "Requesting reward video";
        Spil.Instance.SendRequestRewardVideoEvent();
    }

    public void RequestFyberRewardVideo()
    {
        txtStatus1.text = "Requesting Fyber reward video";

        Spil.Instance.TestRequestAd("Fyber", "rewardVideo", false);
    }

    public void RequestChartBoostRewardVideo()
    {
        txtStatus1.text = "Requesting ChartBoost reward video";
        Spil.Instance.TestRequestAd("ChartBoost", "rewardVideo", false);
    }

    public void RequestMoreApps()
    {
        txtStatus1.text = "Requesting more apps";
        Spil.Instance.RequestMoreApps();
    }

    public void RequestDFPInterstitial()
    {
        txtStatus1.text = "Requesting DFP interstitial";
        Spil.Instance.TestRequestAd("DFP", "interstitial", false);
    }

    public void RequestChartBoostInterstitial()
    {
        txtStatus1.text = "Requesting ChartBoost interstitial";
        //#if UNITY_ANDROID
        Spil.Instance.TestRequestAd("chartboost", "interstitial", false);
        //#endif
        //#if UNITY_IPHONE
        //Spil.Instance.TestRequestAd("ChartBoost", "interstitial", false);
        //#endif
    }

    public void RequestCake()
    {
        // The cake button has no set purpose and is changed often for testing miscellaneous stuff, put anything you'd like to test here!

        txtStatus1.text = "The cake is a lie";

        Spil.Instance.TrackLevelCompleteEvent("Level1");
    }

    #endregion

    #region Tab 2: Wallet & inventory

    // Wallet panels and buttons and
    // Add/subtract Item and Buy Bundle panel

    public Text txtPnlSelectItemsId1;
    public Text txtPnlSelectItemsId2;
    public Text txtPnlSelectItemsId3;
    public Text txtPnlSelectItemsId4;

    public Text txtPnlSelectItemsAmount1;
    public Text txtPnlSelectItemsAmount2;
    public Text txtPnlSelectItemsAmount3;
    public Text txtPnlSelectItemsAmount4;

    public Text txtPnlSelectItems1;
    public Text txtPnlSelectItems2;
    public Text txtPnlSelectItems3;
    public Text txtPnlSelectItems4;

    public Text txtPnlSelectItemsCurrencyAmount1;
    public Text txtPnlSelectItemsCurrencyAmount2;
    public Text txtPnlSelectItemsCurrencyAmount3;
    public Text txtPnlSelectItemsCurrencyAmount4;

    public Text txtPnlSelectItemsCurrency1;
    public Text txtPnlSelectItemsCurrency2;
    public Text txtPnlSelectItemsCurrency3;
    public Text txtPnlSelectItemsCurrency4;

    public Text txtFirstCurrencyName;
    public Text txtFirstCurrencyValue;
    public Text txtSecondCurrencyName;
    public Text txtSecondCurrencyValue;

    public GameObject pnlItems;
    public Text txtItemsMenuTitle;
    bool Adding = true;
    bool ShowBundles = false;

    public void addItem()
    {
        Adding = true;
        pnlSelectItemCurrentPage = 0;
        txtItemsMenuTitle.text = "Spil SDK Game Items";
        ShowBundles = false;
        showItemSelectList();
        pnlItems.SetActive(true);
    }

    public void subtractItem()
    {
        Adding = false;
        pnlSelectItemCurrentPage = 0;
        txtItemsMenuTitle.text = "Spil SDK Game Items";
        ShowBundles = false;
        showItemSelectList();
        pnlItems.SetActive(true);
    }

    public void itemPanelCancelBtn()
    {
        pnlItems.SetActive(false);
    }

    public void buyBundle()
    {
        txtItemsMenuTitle.text = "Spil SDK Game Bundles";
        ShowBundles = true;
        showItemSelectList();
        pnlItems.SetActive(true);
    }

    int pnlSelectItemCurrentPage = 0;

    public void pnlSelectItemPreviousPage()
    {
        pnlSelectItemCurrentPage -= 1;
        if (pnlSelectItemCurrentPage < 0)
        {
            pnlSelectItemCurrentPage = 0;
        }
    }

    public void pnlSelectItemNextPage()
    {
        pnlSelectItemCurrentPage += 1;
        if (pnlSelectItemCurrentPage >= Spil.GameData.Items.Count)
        {
            pnlSelectItemCurrentPage = 0;
        }
    }

    public void addFirstCurrencyValue()
    {
        Spil.PlayerData.Wallet.Add(Spil.PlayerData.Wallet.Currencies[0].Id, 100, PlayerDataUpdateReasons.Trade, "ExampleGame Wallet Screen", "Pressed the add button", "IAPTransactionId");
    }

    public void subtractFirstCurrencyValue()
    {
        Spil.PlayerData.Wallet.Subtract(Spil.PlayerData.Wallet.Currencies[0].Id, 100, PlayerDataUpdateReasons.Trade, "ExampleGame Wallet Screen", "Pressed the subtract button", "IAPTransactionId");
    }

    public void addSecondCurrencyValue()
    {
        Spil.PlayerData.Wallet.Add(Spil.PlayerData.Wallet.Currencies[1].Id, 100, PlayerDataUpdateReasons.Trade, "ExampleGame Wallet Screen", "Pressed the add button", "IAPTransactionId");
    }

    public void subtractSecondCurrencyValue()
    {
        Spil.PlayerData.Wallet.Subtract(Spil.PlayerData.Wallet.Currencies[1].Id, 100, PlayerDataUpdateReasons.Trade, "ExampleGame Wallet Screen", "Pressed the add button", "IAPTransactionId");
    }

    private void showItemSelectList()
    {
        txtPnlSelectItemsId1.text = "";
        txtPnlSelectItemsId2.text = "";
        txtPnlSelectItemsId3.text = "";
        txtPnlSelectItemsId4.text = "";

        txtPnlSelectItemsAmount1.text = "";
        txtPnlSelectItemsAmount2.text = "";
        txtPnlSelectItemsAmount3.text = "";
        txtPnlSelectItemsAmount4.text = "";

        txtPnlSelectItems1.text = "";
        txtPnlSelectItems2.text = "";
        txtPnlSelectItems3.text = "";
        txtPnlSelectItems4.text = "";

        txtPnlSelectItemsCurrencyAmount1.text = "";
        txtPnlSelectItemsCurrencyAmount2.text = "";
        txtPnlSelectItemsCurrencyAmount3.text = "";
        txtPnlSelectItemsCurrencyAmount4.text = "";

        txtPnlSelectItemsCurrency1.text = "";
        txtPnlSelectItemsCurrency2.text = "";
        txtPnlSelectItemsCurrency3.text = "";
        txtPnlSelectItemsCurrency4.text = "";

        for (int i = 0; i < (!ShowBundles ? Spil.GameData.Items.Count : Spil.GameData.Bundles.Count); i++)
        {
            if (i >= pnlSelectItemCurrentPage * 4 && i < (pnlSelectItemCurrentPage + 1) * 4)
            {
                if (i % 4 == 0)
                {
                    txtPnlSelectItemsId1.text = "Id: " + (!ShowBundles ? Spil.GameData.Items[i].Id.ToString() : Spil.GameData.Bundles[i].Id.ToString());
                    txtPnlSelectItemsAmount1.text = "X: 0";
                    txtPnlSelectItems1.text = (!ShowBundles ? Spil.GameData.Items[i].Name : Spil.GameData.Bundles[i].Name);
                    if (ShowBundles)
                    {
                        txtPnlSelectItemsCurrencyAmount1.text = Spil.GameData.Bundles[i].Prices[0].Value.ToString();
                        txtPnlSelectItemsCurrency1.text = Spil.GameData.GetCurrency(Spil.GameData.Bundles[i].Prices[0].CurrencyId).Name;
                    }
                }
                if (i % 4 == 1)
                {
                    txtPnlSelectItemsId2.text = "Id: " + (!ShowBundles ? Spil.GameData.Items[i].Id.ToString() : Spil.GameData.Bundles[i].Id.ToString());
                    txtPnlSelectItemsAmount2.text = "X: 0";
                    txtPnlSelectItems2.text = (!ShowBundles ? Spil.GameData.Items[i].Name : Spil.GameData.Bundles[i].Name);
                    if (ShowBundles)
                    {
                        txtPnlSelectItemsCurrencyAmount2.text = Spil.GameData.Bundles[i].Prices[0].Value.ToString();
                        txtPnlSelectItemsCurrency2.text = Spil.GameData.GetCurrency(Spil.GameData.Bundles[i].Prices[0].CurrencyId).Name;
                    }
                }
                if (i % 4 == 2)
                {
                    txtPnlSelectItemsId3.text = "Id: " + (!ShowBundles ? Spil.GameData.Items[i].Id.ToString() : Spil.GameData.Bundles[i].Id.ToString());
                    txtPnlSelectItemsAmount3.text = "X: 0";
                    txtPnlSelectItems3.text = (!ShowBundles ? Spil.GameData.Items[i].Name : Spil.GameData.Bundles[i].Name);
                    if (ShowBundles)
                    {
                        txtPnlSelectItemsCurrencyAmount3.text = Spil.GameData.Bundles[i].Prices[0].Value.ToString();
                        txtPnlSelectItemsCurrency3.text = Spil.GameData.GetCurrency(Spil.GameData.Bundles[i].Prices[0].CurrencyId).Name;
                    }
                }
                if (i % 4 == 3)
                {
                    txtPnlSelectItemsId4.text = "Id: " + (!ShowBundles ? Spil.GameData.Items[i].Id.ToString() : Spil.GameData.Bundles[i].Id.ToString());
                    txtPnlSelectItemsAmount4.text = "X: 0";
                    txtPnlSelectItems4.text = (!ShowBundles ? Spil.GameData.Items[i].Name : Spil.GameData.Bundles[i].Name);
                    if (ShowBundles)
                    {
                        txtPnlSelectItemsCurrencyAmount4.text = Spil.GameData.Bundles[i].Prices[0].Value.ToString();
                        txtPnlSelectItemsCurrency4.text = Spil.GameData.GetCurrency(Spil.GameData.Bundles[i].Prices[0].CurrencyId).Name;
                    }
                }
            }
        }
    }

    public void txtPnlSelectItems1Click()
    {
        if (Spil.GameData.Items.Count >= pnlSelectItemCurrentPage * 4)
        {
            if (!ShowBundles)
            {
                if (Adding)
                {
                    Spil.PlayerData.Inventory.Add(Spil.GameData.Items[pnlSelectItemCurrentPage * 4].Id, 1, PlayerDataUpdateReasons.Trade, "ExampleGame Wallet Screen", "Pressed the add button", "IAPTransactionId");
                } else {
                    Spil.PlayerData.Inventory.Subtract(Spil.GameData.Items[pnlSelectItemCurrentPage * 4].Id, 1, PlayerDataUpdateReasons.Trade, "ExampleGame Wallet Screen", "Pressed the subtract button", "IAPTransactionId");
                }
            } else {
                Spil.PlayerData.BuyBundle(Spil.GameData.Bundles[pnlSelectItemCurrentPage * 4].Id, PlayerDataUpdateReasons.ItemBought, "ExampleGame Wallet Screen", "Pressed the buy bundle button", "IAPTransactionId");
            }
            pnlItems.SetActive(false);
            updateUI();
        }
    }

    public void txtPnlSelectItems2Click()
    {
        if (Spil.GameData.Items.Count >= pnlSelectItemCurrentPage * 4 + 1)
        {
            if (!ShowBundles)
            {
                if (Adding)
                {
                    Spil.PlayerData.Inventory.Add(Spil.GameData.Items[pnlSelectItemCurrentPage * 4 + 1].Id, 1, PlayerDataUpdateReasons.Trade, "ExampleGame Wallet Screen", "Pressed the add button", "IAPTransactionId");
                } else {
                    Spil.PlayerData.Inventory.Subtract(Spil.GameData.Items[pnlSelectItemCurrentPage * 4 + 1].Id, 1, PlayerDataUpdateReasons.Trade, "ExampleGame Wallet Screen", "Pressed the subtract button", "IAPTransactionId");
                }
            } else {
                Spil.PlayerData.BuyBundle(Spil.GameData.Bundles[pnlSelectItemCurrentPage * 4 + 1].Id, PlayerDataUpdateReasons.ItemBought, "ExampleGame Wallet Screen", "Pressed the buy bundle button", "IAPTransactionId");
            }
            pnlItems.SetActive(false);
            updateUI();
        }
    }

    public void txtPnlSelectItems3Click()
    {
        if (Spil.GameData.Items.Count >= pnlSelectItemCurrentPage * 4 + 2)
        {
            if (!ShowBundles)
            {
                if (Adding)
                {
                    Spil.PlayerData.Inventory.Add(Spil.GameData.Items[pnlSelectItemCurrentPage * 4 + 2].Id, 1, PlayerDataUpdateReasons.ItemBought, "ExampleGame Wallet Screen", "Pressed the add button", "IAPTransactionId");
                } else {
                    Spil.PlayerData.Inventory.Subtract(Spil.GameData.Items[pnlSelectItemCurrentPage * 4 + 2].Id, 1, PlayerDataUpdateReasons.Trade, "ExampleGame Wallet Screen", "Pressed the subtract button", "IAPTransactionId");
                }
            } else {
                Spil.PlayerData.BuyBundle(Spil.GameData.Bundles[pnlSelectItemCurrentPage * 4 + 2].Id, PlayerDataUpdateReasons.ItemBought, "ExampleGame Wallet Screen", "Pressed the buy bundle button", "IAPTransactionId");
            }
            pnlItems.SetActive(false);
            updateUI();
        }
    }

    public void txtPnlSelectItems4Click()
    {
        if (Spil.GameData.Items.Count >= pnlSelectItemCurrentPage * 4 + 3)
        {
            if (!ShowBundles)
            {
                if (Adding)
                {
                    Spil.PlayerData.Inventory.Add(Spil.GameData.Items[pnlSelectItemCurrentPage * 4 + 3].Id, 1, PlayerDataUpdateReasons.ItemBought, "ExampleGame Wallet Screen", "Pressed the add button", "IAPTransactionId");
                } else {
                    Spil.PlayerData.Inventory.Subtract(Spil.GameData.Items[pnlSelectItemCurrentPage * 4 + 3].Id, 1, PlayerDataUpdateReasons.Trade, "ExampleGame Wallet Screen", "Pressed the subtract button", "IAPTransactionId");
                }
            } else {
                Spil.PlayerData.BuyBundle(Spil.GameData.Bundles[pnlSelectItemCurrentPage * 4 + 3].Id, PlayerDataUpdateReasons.ItemBought, "ExampleGame Wallet Screen", "Pressed the buy bundle button", "IAPTransactionId");
            }
            pnlItems.SetActive(false);
            updateUI();
        }
    }

    int pnlItemsCurrentPage = 0;

    public void pnlItemPreviousPage()
    {
        pnlItemsCurrentPage -= 1;
        if (pnlItemsCurrentPage < 0)
        {
            pnlItemsCurrentPage = 0;
        }
    }

    public void pnlItemNextPage()
    {
        pnlItemsCurrentPage += 1;
        if (pnlItemsCurrentPage >= Spil.PlayerData.Inventory.Items.Count)
        {
            pnlItemsCurrentPage = 0;
        }
    }

    public void updateUI()
    {
        Debug.Log("UpdateUI");

        txtFirstCurrencyName.text = "";
        txtFirstCurrencyValue.text = "";
        txtSecondCurrencyName.text = "";
        txtSecondCurrencyValue.text = "";

        Currency firstCurrency = null;
        Currency secondCurrency = null;

        if (Spil.PlayerData.Wallet.Currencies.Count > 0)
        {
            firstCurrency = Spil.PlayerData.Wallet.Currencies[0];
            txtFirstCurrencyName.text = firstCurrency.Name + ":";
        }

        if (Spil.PlayerData.Wallet.Currencies.Count > 1)
        {
            secondCurrency = Spil.PlayerData.Wallet.Currencies[1];
            txtSecondCurrencyName.text = secondCurrency.Name + ":";
        }

        PlayerCurrency playerFirstCurrency = null;
        PlayerCurrency playerSecondCurrency = null;

        for (int i = 0; i < Spil.PlayerData.Wallet.Currencies.Count; i++)
        {
            if (firstCurrency != null && firstCurrency.Id == Spil.PlayerData.Wallet.Currencies[i].Id)
            {
                playerFirstCurrency = Spil.PlayerData.Wallet.Currencies[i];
            }
            if (secondCurrency != null && secondCurrency.Id == Spil.PlayerData.Wallet.Currencies[i].Id)
            {
                playerSecondCurrency = Spil.PlayerData.Wallet.Currencies[i];
            }
        }

        if (playerFirstCurrency != null)
        {
            txtFirstCurrencyValue.text = playerFirstCurrency.CurrentBalance.ToString();
        } else {
            txtFirstCurrencyValue.text = "";
        }

        if (playerSecondCurrency != null)
        {
            txtSecondCurrencyValue.text = playerSecondCurrency.CurrentBalance.ToString();
        } else {
            txtSecondCurrencyValue.text = "";
        }

        showInventory();
    }

    // Inventory

    public Text txtPnlItemsId1;
    public Text txtPnlItemsId2;
    public Text txtPnlItemsId3;
    public Text txtPnlItemsId4;

    public Text txtPnlItemsAmount1;
    public Text txtPnlItemsAmount2;
    public Text txtPnlItemsAmount3;
    public Text txtPnlItemsAmount4;

    public Text txtPnlItems1;
    public Text txtPnlItems2;
    public Text txtPnlItems3;
    public Text txtPnlItems4;

    private void showInventory()
    {
        txtPnlItemsId1.text = "";
        txtPnlItemsId2.text = "";
        txtPnlItemsId3.text = "";
        txtPnlItemsId4.text = "";

        txtPnlItemsAmount1.text = "";
        txtPnlItemsAmount2.text = "";
        txtPnlItemsAmount3.text = "";
        txtPnlItemsAmount4.text = "";

        txtPnlItems1.text = "";
        txtPnlItems2.text = "";
        txtPnlItems3.text = "";
        txtPnlItems4.text = "";

        for (int i = 0; i < Spil.PlayerData.Inventory.Items.Count; i++)
        {
            if (i >= pnlItemsCurrentPage * 4 && i < (pnlItemsCurrentPage + 1) * 4)
            {
                if (i % 4 == 0)
                {
                    txtPnlItemsId1.text = "Id: " + Spil.PlayerData.Inventory.Items[i].Id.ToString();
                    txtPnlItemsAmount1.text = "X: " + Spil.PlayerData.Inventory.Items[i].Amount.ToString();
                    txtPnlItems1.text = Spil.PlayerData.Inventory.Items[i].Name;
                }
                if (i % 4 == 1)
                {
                    txtPnlItemsId2.text = "Id: " + Spil.PlayerData.Inventory.Items[i].Id.ToString();
                    txtPnlItemsAmount2.text = "X: " + Spil.PlayerData.Inventory.Items[i].Amount.ToString();
                    txtPnlItems2.text = Spil.PlayerData.Inventory.Items[i].Name;
                }
                if (i % 4 == 2)
                {
                    txtPnlItemsId3.text = "Id: " + Spil.PlayerData.Inventory.Items[i].Id.ToString();
                    txtPnlItemsAmount3.text = "X: " + Spil.PlayerData.Inventory.Items[i].Amount.ToString();
                    txtPnlItems3.text = Spil.PlayerData.Inventory.Items[i].Name;
                }
                if (i % 4 == 3)
                {
                    txtPnlItemsId4.text = "Id: " + Spil.PlayerData.Inventory.Items[i].Id.ToString();
                    txtPnlItemsAmount4.text = "X: " + Spil.PlayerData.Inventory.Items[i].Amount.ToString();
                    txtPnlItems4.text = Spil.PlayerData.Inventory.Items[i].Name;
                }
            }
        }
    }

    #endregion

    #region Tab 3: Shop

    public Text txtPnlShopItemId1;
    public Text txtPnlShopItemId2;
    public Text txtPnlShopItemId3;
    public Text txtPnlShopItemId4;
    public Text txtPnlShopItemId5;
    public Text txtPnlShopItemId6;
    public Text txtPnlShopItemId7;

    public Text txtPnlShopItem1;
    public Text txtPnlShopItem2;
    public Text txtPnlShopItem3;
    public Text txtPnlShopItem4;
    public Text txtPnlShopItem5;
    public Text txtPnlShopItem6;
    public Text txtPnlShopItem7;

    public Text txtPnlShopItemAmount1;
    public Text txtPnlShopItemAmount2;
    public Text txtPnlShopItemAmount3;
    public Text txtPnlShopItemAmount4;
    public Text txtPnlShopItemAmount5;
    public Text txtPnlShopItemAmount6;
    public Text txtPnlShopItemAmount7;

    public Text txtPnlShopItemCurrency1;
    public Text txtPnlShopItemCurrency2;
    public Text txtPnlShopItemCurrency3;
    public Text txtPnlShopItemCurrency4;
    public Text txtPnlShopItemCurrency5;
    public Text txtPnlShopItemCurrency6;
    public Text txtPnlShopItemCurrency7;

    public void btnPreviousTabClick()
    {
        pnlShopCurrentTabPage -= 1;
        if (pnlShopCurrentTabPage < 0)
        {
            pnlShopCurrentTabPage = Convert.ToInt32(Math.Floor(Spil.GameData.Shop.Tabs.Count / 4d));
        }
        updateUIShop();
    }

    public void btnNextTabClick()
    {
        pnlShopCurrentTabPage += 1;
        if (pnlShopCurrentTabPage > Convert.ToInt32(Math.Floor(Spil.GameData.Shop.Tabs.Count / 4d)))
        {
            pnlShopCurrentTabPage = 0;
        }
        updateUIShop();
    }

    public void btnTab1Click()
    {
        pnlShopCurrentTab = pnlShopCurrentTabPage * 4;
        pnlShopCurrentPage = 0;
        updateUIShop();
    }

    public void btnTab2Click()
    {
        pnlShopCurrentTab = pnlShopCurrentTabPage * 4 + 1;
        pnlShopCurrentPage = 0;
        updateUIShop();
    }

    public void btnTab3Click()
    {
        pnlShopCurrentTab = pnlShopCurrentTabPage * 4 + 2;
        pnlShopCurrentPage = 0;
        updateUIShop();
    }

    public void btnTab4Click()
    {
        pnlShopCurrentTab = pnlShopCurrentTabPage * 4 + 3;
        pnlShopCurrentPage = 0;
        updateUIShop();
    }

    public void btnShopItem1Click()
    {
        Spil.PlayerData.BuyBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[pnlShopCurrentPage * 7].BundleId, PlayerDataUpdateReasons.ItemBought, "ExampleGame Shop Screen", "Pressed the buy bundle button", "IAPTransactionId");
    }

    public void btnShopItem2Click()
    {
        Spil.PlayerData.BuyBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[pnlShopCurrentPage * 7 + 1].BundleId, PlayerDataUpdateReasons.ItemBought, "ExampleGame Shop Screen", "Pressed the buy bundle button", "IAPTransactionId");
    }

    public void btnShopItem3Click()
    {
        Spil.PlayerData.BuyBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[pnlShopCurrentPage * 7 + 2].BundleId, PlayerDataUpdateReasons.ItemBought, "ExampleGame Shop Screen", "Pressed the buy bundle button", "IAPTransactionId");
    }

    public void btnShopItem4Click()
    {
        Spil.PlayerData.BuyBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[pnlShopCurrentPage * 7 + 3].BundleId, PlayerDataUpdateReasons.ItemBought, "ExampleGame Shop Screen", "Pressed the buy bundle button", "IAPTransactionId");
    }

    public void btnShopItem5Click()
    {
        Spil.PlayerData.BuyBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[pnlShopCurrentPage * 7 + 4].BundleId, PlayerDataUpdateReasons.ItemBought, "ExampleGame Shop Screen", "Pressed the buy bundle button", "IAPTransactionId");
    }

    public void btnShopItem6Click()
    {
        Spil.PlayerData.BuyBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[pnlShopCurrentPage * 7 + 5].BundleId, PlayerDataUpdateReasons.ItemBought, "ExampleGame Shop Screen", "Pressed the buy bundle button", "IAPTransactionId");
    }

    public void btnShopItem7Click()
    {
        Spil.PlayerData.BuyBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[pnlShopCurrentPage * 7 + 6].BundleId, PlayerDataUpdateReasons.ItemBought, "ExampleGame Shop Screen", "Pressed the buy bundle button", "IAPTransactionId");
    }

    public void btnShopItemUp()
    {
        if (Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries.Count > 7)
        {
            pnlShopCurrentPage -= 1;
            if (pnlShopCurrentPage < 0)
            {
                pnlShopCurrentPage = Convert.ToInt32(Math.Ceiling(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries.Count / 7d)) - 1;
            }
        }
    }

    public void btnShopItemDown()
    {
        if (Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries.Count > 7)
        {
            pnlShopCurrentPage += 1;
            if (pnlShopCurrentPage > Math.Ceiling(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries.Count / 7d) - 1)
            {
                pnlShopCurrentPage = 0;
            }
        }
    }

    public GameObject bntTab1;
    public GameObject bntTab2;
    public GameObject bntTab3;
    public GameObject bntTab4;

    public Text txtBntTab1;
    public Text txtBntTab2;
    public Text txtBntTab3;
    public Text txtBntTab4;

    public GameObject bntTabNext;
    public GameObject bntTabPrevious;

    int pnlShopCurrentPage = 0;
    int pnlShopCurrentTabPage = 0;
    int pnlShopCurrentTab = 0;

    public void updateUIShop()
    {
        //bntTab1.SetActive(false);
        //bntTab2.SetActive(false);
        //bntTab3.SetActive(false);
        //bntTab4.SetActive(false);

        //bntTabNext.SetActive(false);
        //bntTabPrevious.SetActive(false);

        txtBntTab1.text = "";
        txtBntTab2.text = "";
        txtBntTab3.text = "";
        txtBntTab4.text = "";

        txtPnlShopItemId1.text = "";
        txtPnlShopItemId2.text = "";
        txtPnlShopItemId3.text = "";
        txtPnlShopItemId4.text = "";
        txtPnlShopItemId5.text = "";
        txtPnlShopItemId6.text = "";
        txtPnlShopItemId7.text = "";

        txtPnlShopItem1.text = "";
        txtPnlShopItem2.text = "";
        txtPnlShopItem3.text = "";
        txtPnlShopItem4.text = "";
        txtPnlShopItem5.text = "";
        txtPnlShopItem6.text = "";
        txtPnlShopItem7.text = "";

        txtPnlShopItemAmount1.text = "";
        txtPnlShopItemAmount2.text = "";
        txtPnlShopItemAmount3.text = "";
        txtPnlShopItemAmount4.text = "";
        txtPnlShopItemAmount5.text = "";
        txtPnlShopItemAmount6.text = "";
        txtPnlShopItemAmount7.text = "";

        txtPnlShopItemCurrency1.text = "";
        txtPnlShopItemCurrency2.text = "";
        txtPnlShopItemCurrency3.text = "";
        txtPnlShopItemCurrency4.text = "";
        txtPnlShopItemCurrency5.text = "";
        txtPnlShopItemCurrency6.text = "";
        txtPnlShopItemCurrency7.text = "";

        if (Spil.GameData.Shop.Tabs.Count > 0)
        {
            Debug.Log("pnlShopCurrentTab: " + pnlShopCurrentTab + " ");

            if (pnlShopCurrentTabPage > 0)
            {
                //bntTabPrevious.SetActive(true);
            }
            if (Math.Ceiling(Spil.GameData.Shop.Tabs.Count / 4d) - 1 > pnlShopCurrentTabPage)
            {
                //bntTabNext.SetActive(false);
            }

            if (Spil.GameData.Shop.Tabs.Count >= pnlShopCurrentTabPage * 4 + 1)
            {
                //bntTab1.SetActive(true);
                txtBntTab1.text = Spil.GameData.Shop.Tabs[pnlShopCurrentTabPage * 4].Name;
            }
            if (Spil.GameData.Shop.Tabs.Count >= pnlShopCurrentTabPage * 4 + 2)
            {
                //bntTab2.SetActive(true);
                txtBntTab2.text = Spil.GameData.Shop.Tabs[pnlShopCurrentTabPage * 4 + 1].Name;
            }
            if (Spil.GameData.Shop.Tabs.Count >= pnlShopCurrentTabPage * 4 + 3)
            {
                //bntTab3.SetActive(true);
                txtBntTab3.text = Spil.GameData.Shop.Tabs[pnlShopCurrentTabPage * 4 + 2].Name;
            }
            if (Spil.GameData.Shop.Tabs.Count >= pnlShopCurrentTabPage * 4 + 4)
            {
                //bntTab4.SetActive(true);
                txtBntTab4.text = Spil.GameData.Shop.Tabs[pnlShopCurrentTabPage * 4 + 3].Name;
            }

            for (int i = 0; i < Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries.Count; i++)
            {
                if (i >= pnlShopCurrentPage * 7 && i < (pnlShopCurrentPage + 1) * 7)
                {
                    if (i % 7 == 0)
                    {
                        txtPnlShopItemId1.text = "Id: " + Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].BundleId;
                        txtPnlShopItem1.text = Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].Label;
                        txtPnlShopItemAmount1.text = Spil.GameData.GetBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].BundleId).Prices[0].Value + "";
                        txtPnlShopItemCurrency1.text = Spil.GameData.GetCurrency(Spil.GameData.GetBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].BundleId).Prices[0].CurrencyId).Name;
                    }
                    if (i % 7 == 1)
                    {
                        txtPnlShopItemId2.text = "Id: " + Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].BundleId;
                        txtPnlShopItem2.text = Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].Label;
                        txtPnlShopItemAmount2.text = Spil.GameData.GetBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].BundleId).Prices[0].Value + "";
                        txtPnlShopItemCurrency2.text = Spil.GameData.GetCurrency(Spil.GameData.GetBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].BundleId).Prices[0].CurrencyId).Name;
                    }
                    if (i % 7 == 2)
                    {
                        txtPnlShopItemId3.text = "Id: " + Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].BundleId;
                        txtPnlShopItem3.text = Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].Label;
                        txtPnlShopItemAmount3.text = Spil.GameData.GetBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].BundleId).Prices[0].Value + "";
                        txtPnlShopItemCurrency3.text = Spil.GameData.GetCurrency(Spil.GameData.GetBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].BundleId).Prices[0].CurrencyId).Name;
                    }
                    if (i % 7 == 3)
                    {
                        txtPnlShopItemId4.text = "Id: " + Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].BundleId;
                        txtPnlShopItem4.text = Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].Label;
                        txtPnlShopItemAmount4.text = Spil.GameData.GetBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].BundleId).Prices[0].Value + "";
                        txtPnlShopItemCurrency4.text = Spil.GameData.GetCurrency(Spil.GameData.GetBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].BundleId).Prices[0].CurrencyId).Name;
                    }
                    if (i % 7 == 4)
                    {
                        txtPnlShopItemId5.text = "Id: " + Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].BundleId;
                        txtPnlShopItem5.text = Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].Label;
                        txtPnlShopItemAmount5.text = Spil.GameData.GetBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].BundleId).Prices[0].Value + "";
                        txtPnlShopItemCurrency5.text = Spil.GameData.GetCurrency(Spil.GameData.GetBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].BundleId).Prices[0].CurrencyId).Name;
                    }
                    if (i % 7 == 5)
                    {
                        txtPnlShopItemId6.text = "Id: " + Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].BundleId;
                        txtPnlShopItem6.text = Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].Label;
                        txtPnlShopItemAmount6.text = Spil.GameData.GetBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].BundleId).Prices[0].Value + "";
                        txtPnlShopItemCurrency6.text = Spil.GameData.GetCurrency(Spil.GameData.GetBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].BundleId).Prices[0].CurrencyId).Name;
                    }
                    if (i % 7 == 6)
                    {
                        txtPnlShopItemId7.text = "Id: " + Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].BundleId;
                        txtPnlShopItem7.text = Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].Label;
                        txtPnlShopItemAmount7.text = Spil.GameData.GetBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].BundleId).Prices[0].Value + "";
                        txtPnlShopItemCurrency7.text = Spil.GameData.GetCurrency(Spil.GameData.GetBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[i].BundleId).Prices[0].CurrencyId).Name;
                    }
                }
            }
        }
    }

    #endregion

    #region Tab 4: Splash screen and Daily Bonus

    public Text txtWebStatus1;
    public Text txtWebStatus2;

    public void btnRequestSplashScreenClick()
    {
        txtWebStatus1.text = "Requesting Splash screen";
        txtWebStatus2.text = "";
        Spil.Instance.RequestSplashScreen();
    }

    public void btnRequestDailyBonusScreenClick()
    {
        txtWebStatus1.text = "Requesting Daily Bonus";
        txtWebStatus2.text = "";
        Spil.Instance.RequestDailyBonus();
    }

    #endregion

}