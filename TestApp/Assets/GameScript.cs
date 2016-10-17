using UnityEngine;
using SpilGames.Unity;
using UnityEngine.UI;
using SpilGames.Unity.Utils;
using SpilGames.Unity.Helpers;
using System;
using System.Threading;

public class GameScript : MonoBehaviour
{
    #region Example code

    // Here's some example methods to show what can be done

    // Note: Be sure to include a defaultGameConfig.json file with your chartboost
    // id and signature in the /StreamingAssets directory. ChartBoost videos and 
    // more apps screens won't work without them. Instructions for creating a
    // defaultGameConfig.json are included in the SpilSDK documentation.

    // Call this method before showing ads, for instance in Awake()
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

        Spil.Instance.OnPlayerDataUpdated -= PlayerDataUpdatedHandler;
        Spil.Instance.OnPlayerDataUpdated += PlayerDataUpdatedHandler;

        Spil.Instance.OnPlayerDataAvailable -= PlayerDataAvailableHandler;
        Spil.Instance.OnPlayerDataAvailable += PlayerDataAvailableHandler;

        Spil.Instance.OnSpilGameDataAvailable -= SpilGameDataAvailableHandler;
        Spil.Instance.OnSpilGameDataAvailable += SpilGameDataAvailableHandler;

        Spil.Instance.OnPlayerDataError -= PlayerDataErrorHandler;
        Spil.Instance.OnPlayerDataError += PlayerDataErrorHandler;

        Spil.Instance.OnSpilGameDataError -= SpilGameDataErrorHandler;
        Spil.Instance.OnSpilGameDataError += SpilGameDataErrorHandler;

		// Splash screen events
		Spil.Instance.OnSplashScreenOpen -= SplashScreenOpenHandler;
		Spil.Instance.OnSplashScreenOpen += SplashScreenOpenHandler;
		Spil.Instance.OnSplashScreenClosed -= SplashScreenClosedHandler;
		Spil.Instance.OnSplashScreenClosed += SplashScreenClosedHandler;
		Spil.Instance.OnSplashScreenError -= SplashScreenErrorHandler;
		Spil.Instance.OnSplashScreenError += SplashScreenErrorHandler;
		Spil.Instance.OnSplashScreenNotAvailable -= SplashScreenNotAvailabelHandler;
		Spil.Instance.OnSplashScreenNotAvailable += SplashScreenNotAvailabelHandler;
		Spil.Instance.OnSplashScreenOpenShop -= SplashScreenOpenShopHandler;
		Spil.Instance.OnSplashScreenOpenShop += SplashScreenOpenShopHandler;

		// Daily bonus screen events
		Spil.Instance.OnDailyBonusOpen -= DailyBonusOpenHandler;
		Spil.Instance.OnDailyBonusOpen += DailyBonusOpenHandler;
		Spil.Instance.OnDailyBonusClosed -= DailyBonusClosedHandler;
		Spil.Instance.OnDailyBonusClosed += DailyBonusClosedHandler;
		Spil.Instance.OnDailyBonusError -= DailyBonusErrorHandler;
		Spil.Instance.OnDailyBonusError += DailyBonusErrorHandler;
		Spil.Instance.OnDailyBonusNotAvailable -= DailyBonusNotAvailabelHandler;
		Spil.Instance.OnDailyBonusNotAvailable += DailyBonusNotAvailabelHandler;
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

    private void SpilGameDataErrorHandler(SpilErrorMessage errorMessage)
    {
        txtErrorMessage.text = errorMessage.name + ": " + errorMessage.message;
        pnlErrorMessage.SetActive(true);

        updateUI();
        updateUIShop();
    }

    private void PlayerDataAvailableHandler()
    {
        updateUI();
    }

    private void SpilGameDataAvailableHandler()
    {
        updateUI();
    }

    // When an ad is not available the UI may have to be updated,
    // for instance to hide a button.
    void AdNotAvailableHandler(enumAdType adType)
    {
        //Debug.Log("Ad was not available");
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

    #endregion

    void Awake()
    {
        Debug.Log("SpilSDK-Unity Init 2");

        AttachListeners();

        updateUI();
    }

    public GameObject pnlErrorMessage;
    public Text txtErrorMessage;

    public void btnErrorMessageOkClick()
    {
        pnlErrorMessage.SetActive(false);
    }

    public Button btnRequestRewardVideo;
    public Button btnFyberRewardVideo;
    public Button btnChartBoostRewardVideo;
    public Button btnMoreApps;
    public Button btnDFPInterstitial;
    public Button btnChartBoostInterstitial;
    public Button btnCake;

    public Text txtStatus1;
    public Text txtStatus2;
	public Text txtWebStatus1;
	public Text txtWebStatus2;

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

		switch (currentScreenShowing) {
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

    public void RequestRewardVideo()
    {
        txtStatus1.text = "Requesting reward video";
		Spil.Instance.SendRequestRewardVideoEvent();
    }

    public void RequestFyberRewardVideo()
    {
        txtStatus1.text = "Requesting Fyber reward video";
#if UNITY_ANDROID
        Spil.Instance.TestRequestAd("Fyber", "rewardVideo", false);
#endif
#if UNITY_IPHONE
				Spil.Instance.TestRequestAd("Fyber", "rewardVideo", false);
#endif
    }

    public void RequestChartBoostRewardVideo()
    {
        txtStatus1.text = "Requesting ChartBoost reward video";
#if UNITY_ANDROID
        Spil.Instance.TestRequestAd("ChartBoost", "rewardVideo", false);
#endif
#if UNITY_IPHONE
				Spil.Instance.TestRequestAd("ChartBoost", "rewardVideo", false);
#endif
    }

    public void RequestMoreApps()
    {
        txtStatus1.text = "Requesting more apps";
        Spil.Instance.RequestMoreApps();
    }

    public void RequestDFPInterstitial()
    {
        txtStatus1.text = "Requesting DFP interstitial";
#if UNITY_ANDROID
        Spil.Instance.TestRequestAd("DFP", "interstitial", false);
#endif
#if UNITY_IPHONE
				Spil.Instance.TestRequestAd("DFP", "interstitial", false);
#endif
    }

    public void RequestChartBoostInterstitial()
    {
        txtStatus1.text = "Requesting ChartBoost interstitial";
#if UNITY_ANDROID
        Spil.Instance.TestRequestAd("chartboost", "interstitial", false);
#endif
#if UNITY_IPHONE
				Spil.Instance.TestRequestAd("ChartBoost", "interstitial", false);
#endif
    }

    public void RequestCake()
    {
        txtStatus1.text = "The cake is a lie";

        //Spil.Instance.SendCustomEvent("URL Encoded Key & Value", new Dictionary<string, string>() { { "URL Encoded Key & Value", "I l|k3 u$|ng l*ts #f w31rd ch@r@cters" } });
        Spil.Instance.SendlevelCompleteEvent("Level1");

        //DoTest();
    }

    public void DoTest()
    {
#if UNITY_ANDROID
        toggleUIEnabled(false);
        txtStatus1.text = "Test running";

        txtStatus2.text = "Testing SendlevelStartEvent(\"Level1\")";
        Spil.Instance.clearLog();
        Debug.Log("LOG CLEARED");
        try
        {
            Spil.Instance.SendlevelStartEvent("Level1");
        }
        catch (Exception ex)
        {
            txtStatus2.text = "Testing SendlevelStartEvent(\"Level1\") FAILED 1";
            toggleUIEnabled(true);
            return;
        }

        Thread.Sleep(500);

        string s = Spil.Instance.getLog();
        if (!s.Contains(": track_event levelStart") || !s.Contains(": name=levelStart"))
        {
            Debug.Log("Couldnt find string in: " + s + " -ENDLOG");
            txtStatus2.text = "Testing SendlevelStartEvent(\"Level1\") FAILED 2";
            toggleUIEnabled(true);
            return;
        }
        // Event was properly dispatched by SpilSDK native, now check for response
        else if (!s.Contains("eventReceived: name=levelStart;"))
        {
            Debug.Log("Couldnt find server response string in: " + s + " -ENDLOG");
            txtStatus2.text = "Testing SendlevelStartEvent(\"Level1\") FAILED 3";
            toggleUIEnabled(true);
            return;
        }

        //txtBox2.text =  "Testing SendlevelCompleteEvent(\"Level1\")";
        //Spil.Instance.clearLog();
        //Debug.Log("LOG CLEARED");
        //try
        //{
        //    Spil.Instance.SendlevelCompleteEvent("Level1");
        //}
        //catch (Exception ex)
        //{
        //    txtBox2.text =  "Testing SendlevelCompleteEvent(\"Level1\") FAILED 1";
        //    btnStart.gameObject.SetActive(true);
        //    return;
        //}

        //Thread.Sleep(1000);

        //s = Spil.Instance.getLog();
        //if (!s.Contains(": track_event levelComplete") || !s.Contains(": name=levelComplete"))
        //{
        //    Debug.Log("Couldnt find string in: " + s + " -ENDLOG");
        //    txtBox2.text =  "Testing SendlevelCompleteEvent(\"Level1\") FAILED 2";
        //    btnStart.gameObject.SetActive(true);
        //    return;
        //}
        //// Event was properly dispatched by SpilSDK native, now check for response
        //else if (!s.Contains("eventReceived: name=levelComplete;"))
        //{
        //    Debug.Log("Couldnt find server response string in: " + s + " -ENDLOG");
        //    txtBox2.text =  "Testing SendlevelCompleteEvent(\"Level1\") FAILED 3";
        //    btnStart.gameObject.SetActive(true);
        //    return;
        //}

        txtStatus2.text = "Testing SendlevelFailedEvent(\"Level1\")";

        Spil.Instance.clearLog();
        Debug.Log("LOG CLEARED");
        try
        {
            Spil.Instance.SendlevelFailedEvent("Level1");
        }
        catch (Exception ex)
        {
            txtStatus2.text = "Testing SendlevelFailedEvent(\"Level1\") FAILED 1";
            toggleUIEnabled(true);
            return;
        }

        Thread.Sleep(500);

        s = Spil.Instance.getLog();
        if (!s.Contains(": track_event levelFailed") || !s.Contains(": name=levelFailed"))
        {
            Debug.Log("Couldnt find string in: " + s + " -ENDLOG");
            txtStatus2.text = "Testing SendlevelFailedEvent(\"Level1\") FAILED 2";
            toggleUIEnabled(true);
            return;
        }
        // Event was properly dispatched by SpilSDK native, now check for response
        else if (!s.Contains("eventReceived: name=levelFailed;"))
        {
            Debug.Log("Couldnt find server response string in: " + s + " -ENDLOG");
            txtStatus2.text = "Testing SendlevelFailedEvent(\"Level1\") FAILED 3";
            toggleUIEnabled(true);
            return;
        }
        txtStatus2.text = "Testing SendplayerDiesEvent(\"Level1\")";

        Spil.Instance.clearLog();
        Debug.Log("LOG CLEARED");
        try
        {
            Spil.Instance.SendplayerDiesEvent("Level1");
        }
        catch (Exception ex)
        {
            txtStatus2.text = "Testing SendplayerDiesEvent(\"Level1\") FAILED 1";
            toggleUIEnabled(true);
            return;
        }

        Thread.Sleep(500);

        s = Spil.Instance.getLog();
        if (!s.Contains(": track_event playerDies") || !s.Contains(": name=playerDies"))
        {
            Debug.Log("Couldnt find string in: " + s + " -ENDLOG");
            txtStatus2.text = "Testing SendplayerDiesEvent(\"Level1\") FAILED 2";
            toggleUIEnabled(true);
            return;
        }
        // Event was properly dispatched by SpilSDK native, now check for response
        else if (!s.Contains("eventReceived: name=playerDies;"))
        {
            Debug.Log("Couldnt find server response string in: " + s + " -ENDLOG");
            txtStatus2.text = "Testing SendplayerDiesEvent(\"Level1\") FAILED 3";
            toggleUIEnabled(true);
            return;
        }

        //txtBox2.text = "Testing SendrequestRewardVideoEvent()";
        //Spil.Instance.clearLog();
        //Debug.Log("LOG CLEARED");
        //try
        //{
        //    Spil.Instance.SendrequestRewardVideoEvent();
        //}
        //catch (Exception ex)
        //{
        //    txtBox2.text = "Testing SendrequestRewardVideoEvent() FAILED 1";
        //    btn4.gameObject.SetActive(true);
        //    return;
        //}
        //Thread.Sleep(1000);
        //s = Spil.Instance.getLog();
        //if (!s.Contains(": track_event requestRewardVideo") || !s.Contains(": name=requestRewardVideo"))
        //{
        //    Debug.Log("Couldnt find string in: " + s + " -ENDLOG");
        //    txtBox2.text = "Testing SendrequestRewardVideoEvent() FAILED 2";
        //    btn4.gameObject.SetActive(true);
        //    return;
        //}
        //// Event was properly dispatched by SpilSDK native, now check for response
        //else if (!s.Contains("eventReceived: name=; action=show; type=advertisement;"))
        //{
        //    Debug.Log("Couldnt find server response string in: " + s + " -ENDLOG");
        //    txtBox2.text = "Testing SendrequestRewardVideoEvent() FAILED 3";
        //    btn4.gameObject.SetActive(true);
        //    return;
        //}

        txtStatus2.text = "Testing SendmilestoneAchievedEvent(\"Test executed\")";


        Spil.Instance.clearLog();
        Debug.Log("LOG CLEARED");
        try
        {
            Spil.Instance.SendmilestoneAchievedEvent("Test executed");
        }
        catch (Exception ex)
        {
            txtStatus2.text = "Testing SendmilestoneAchievedEvent(\"Test executed\") FAILED 1";
            toggleUIEnabled(true);
            return;
        }

        Thread.Sleep(500);

        s = Spil.Instance.getLog();
        if (!s.Contains(": track_event milestoneAchieved") || !s.Contains(": name=milestoneAchieved"))
        {
            Debug.Log("Couldnt find string in: " + s + " -ENDLOG");
            txtStatus2.text = "Testing SendmilestoneAchievedEvent(\"Test executed\") FAILED 2";
            toggleUIEnabled(true);
            return;
        }
        // Event was properly dispatched by SpilSDK native, now check for response
        else if (!s.Contains("eventReceived: name=milestoneAchieved;"))
        {
            Debug.Log("Couldnt find server response string in: " + s + " -ENDLOG");
            txtStatus2.text = "Testing SendmilestoneAchievedEvent(\"Test executed\") FAILED 3";
            toggleUIEnabled(true);
            return;
        }

        txtStatus2.text = "Testing getPackagesAll()";

        //try
        {
            PackagesHelper packages = Spil.Instance.GetPackagesAndPromotions();
            if (packages == null)
            {
                txtStatus2.text = "Testing getPackagesAll FAILED 2";
                toggleUIEnabled(true);
                return;
            }
            else
            {
                if (packages.Packages == null)
                {
                    txtStatus2.text = "Testing getPackagesAll FAILED 3";
                    toggleUIEnabled(true);
                    return;
                }
                else
                {

                    Debug.Log("Packages count: " + packages.Packages.Count);
                    Debug.Log("Packages[0].Items count: " + packages.Packages[0].Items.Count);
                    Debug.Log("Packages[1].Items count: " + packages.Packages[1].Items.Count);

                    Debug.Log("Packages[0].Id: " + packages.Packages[0].Id);
                    Debug.Log("Packages[1].Id: " + packages.Packages[1].Id);

                    Debug.Log("Packages[0].Id: " + packages.Packages[0].OriginalDiscountLabel);
                    Debug.Log("Packages[1].Id: " + packages.Packages[1].OriginalDiscountLabel);

                    Debug.Log("Packages[0].Id: " + packages.Packages[0].PromotionBeginDate);
                    Debug.Log("Packages[1].Id: " + packages.Packages[1].PromotionBeginDate);

                    Debug.Log("Packages[0].Id: " + packages.Packages[0].PromotionDiscountLabel);
                    Debug.Log("Packages[1].Id: " + packages.Packages[1].PromotionDiscountLabel);

                    Debug.Log("Packages[0].Id: " + packages.Packages[0].PromotionEndDate);
                    Debug.Log("Packages[1].Id: " + packages.Packages[1].PromotionEndDate);

                    Debug.Log("Packages[0].Items[0] id: " + packages.Packages[0].Items[0].Id);
                    Debug.Log("Packages[1].Items[0] id: " + packages.Packages[1].Items[0].Id);

                    Debug.Log("Packages[0].Items[0] PromotionValue: " + packages.Packages[0].Items[0].PromotionValue);
                    Debug.Log("Packages[1].Items[0] PromotionValue: " + packages.Packages[1].Items[0].PromotionValue);

                    Debug.Log("Packages[0].Items[0] OriginalValue: " + packages.Packages[0].Items[0].OriginalValue);
                    Debug.Log("Packages[1].Items[0] OriginalValue: " + packages.Packages[1].Items[0].OriginalValue);

                    //Debug.Log("Packages[0].Items[1] id: " + packages.Packages[0].Items[1].Id);
                    //Debug.Log("Packages[1].Items[1] id: " + packages.Packages[1].Items[1].Id);

                    //Debug.Log("Packages[0].Items[1] PromotionValue: " + packages.Packages[0].Items[1].PromotionValue);
                    //Debug.Log("Packages[1].Items[1] PromotionValue: " + packages.Packages[1].Items[1].PromotionValue);

                    //Debug.Log("Packages[0].Items[1] OriginalValue: " + packages.Packages[0].Items[1].OriginalValue);
                    //Debug.Log("Packages[1].Items[1] OriginalValue: " + packages.Packages[1].Items[1].OriginalValue);

                    //if (packages.Packages.Count != 2)
                    //{
                    //    Debug.Log("Packages count: " + packages.Packages.Count);
                    //    txtBox2.text =  "Testing getPackagesAll FAILED 4";
                    //    StartButtonEnabled =true);
                    //    return;
                    //}

                    //if (packages.Packages[0].Items.Count != 2)
                    //{
                    //    txtBox2.text =  "Testing getPackagesAll FAILED 5";
                    //    StartButtonEnabled =true);
                    //    return;
                    //}

                    //if (packages.Packages[1].Items.Count != 2)
                    //{
                    //    txtBox2.text =  "Testing getPackagesAll FAILED 6";
                    //    StartButtonEnabled =true);
                    //    return;
                    //}
                }
            }
        }
        //catch (Exception ex)
        {
            //Spil.ExecuteOnMainThread.Enqueue(() =>
            //    {
            //        txtBox2.text =  "Testing getPackagesAll FAILED 1";
            //        btnStart.gameObject.SetActive(true);
            //    }
            //);
            //return;
        }

        txtStatus2.text = "";
        txtStatus1.text = "Test successful!";
        toggleUIEnabled(true);

        //Spil.Instance.SendwalletUpdateEvent(string walletValue, string itemValue, string source, string item, string category)
        //Spil.Instance.SendiapPurchasedEvent(string skuId, string transactionId, string purchaseDate)
        //Spil.Instance.SendiapRestoredEvent(string skuId, string originalTransactionId, string originalPurchaseDate)
        //Spil.Instance.SendiapFailedEvent(string error, string skuId)

        // }
        //).Start();

#endif
    }

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
        }
        else
        {
            btnRequestRewardVideo.gameObject.SetActive(false);
            btnFyberRewardVideo.gameObject.SetActive(false);
            btnChartBoostRewardVideo.gameObject.SetActive(false);
            btnMoreApps.gameObject.SetActive(false);
            btnDFPInterstitial.gameObject.SetActive(false);
            btnChartBoostInterstitial.gameObject.SetActive(false);
            btnCake.gameObject.SetActive(false);
        }
    }

    #region PlayerData

    public Text txtFirstCurrencyName;
    public Text txtFirstCurrencyValue;
    public Text txtSecondCurrencyName;
    public Text txtSecondCurrencyValue;

    public void addFirstCurrencyValue()
    {
        Spil.PlayerData.Wallet.Add(Spil.PlayerData.Wallet.Currencies[0].Id, 100, PlayerDataUpdateReasons.LevelComplete);
    }

    public void subtractFirstCurrencyValue()
    {
        Spil.PlayerData.Wallet.Subtract(Spil.PlayerData.Wallet.Currencies[0].Id, 100, PlayerDataUpdateReasons.Trade);
    }

    public void addSecondCurrencyValue()
    {
        Spil.PlayerData.Wallet.Add(Spil.PlayerData.Wallet.Currencies[1].Id, 100, PlayerDataUpdateReasons.LevelComplete);
    }

    public void subtractSecondCurrencyValue()
    {
        Spil.PlayerData.Wallet.Subtract(Spil.PlayerData.Wallet.Currencies[1].Id, 100, PlayerDataUpdateReasons.Trade);
    }

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
                    Spil.PlayerData.Inventory.Add(Spil.GameData.Items[pnlSelectItemCurrentPage * 4].Id, 1, PlayerDataUpdateReasons.ItemBought);
                }
                else
                {
                    Spil.PlayerData.Inventory.Subtract(Spil.GameData.Items[pnlSelectItemCurrentPage * 4].Id, 1, PlayerDataUpdateReasons.Trade);
                }
            }
            else
            {
                Spil.PlayerData.ConsumeBundle(Spil.GameData.Bundles[pnlSelectItemCurrentPage * 4].Id, PlayerDataUpdateReasons.ItemBought);
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
                    Spil.PlayerData.Inventory.Add(Spil.GameData.Items[pnlSelectItemCurrentPage * 4 + 1].Id, 1, PlayerDataUpdateReasons.ItemBought);
                }
                else
                {
                    Spil.PlayerData.Inventory.Subtract(Spil.GameData.Items[pnlSelectItemCurrentPage * 4 + 1].Id, 1, PlayerDataUpdateReasons.Trade);
                }
            }
            else
            {
                Spil.PlayerData.ConsumeBundle(Spil.GameData.Bundles[pnlSelectItemCurrentPage * 4 + 1].Id, PlayerDataUpdateReasons.ItemBought);
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
                    Spil.PlayerData.Inventory.Add(Spil.GameData.Items[pnlSelectItemCurrentPage * 4 + 2].Id, 1, PlayerDataUpdateReasons.ItemBought);
                }
                else
                {
                    Spil.PlayerData.Inventory.Subtract(Spil.GameData.Items[pnlSelectItemCurrentPage * 4 + 2].Id, 1, PlayerDataUpdateReasons.Trade);
                }
            }
            else
            {
                Spil.PlayerData.ConsumeBundle(Spil.GameData.Bundles[pnlSelectItemCurrentPage * 4 + 2].Id, PlayerDataUpdateReasons.ItemBought);
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
                    Spil.PlayerData.Inventory.Add(Spil.GameData.Items[pnlSelectItemCurrentPage * 4 + 3].Id, 1, PlayerDataUpdateReasons.ItemBought);
                }
                else
                {
                    Spil.PlayerData.Inventory.Subtract(Spil.GameData.Items[pnlSelectItemCurrentPage * 4 + 3].Id, 1, PlayerDataUpdateReasons.Trade);
                }
            }
            else
            {
                Spil.PlayerData.ConsumeBundle(Spil.GameData.Bundles[pnlSelectItemCurrentPage * 4 + 3].Id, PlayerDataUpdateReasons.ItemBought);
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

    /*
    private void showBundlesList()
    {
        ArrayList<com.spilgames.spilsdk.gamedata.bundles.Bundle> bundles = MainActivity.spilGameData.getBundles();

        MaterialDialog dialog = new MaterialDialog.Builder(getContext())
        .title("Spil SDK Game Bundles")
        .customView(R.layout.dialog_bundle_layout, false)
        .negativeText("Cancel")
        .titleColor(Color.WHITE)
        .negativeColor(Color.WHITE)
        .backgroundColor(getActivity().getResources().getColor(R.color.colorPrimary))
        .onNegative(new MaterialDialog.SingleButtonCallback()
        {
            @Override
            public void onClick(@NonNull MaterialDialog dialog, @NonNull DialogAction which)
            {
                dialog.dismiss();
            }
        })
        .build();

        View view = dialog.getCustomView();

        if(view != null)
        {
            RecyclerView mListView = (RecyclerView)view.findViewById(R.id.gameBundleList);

            GameBundleListAdapter mAdapter = new GameBundleListAdapter(getContext(), R.layout.list_gamebundle_item, bundles, dialog);

            mListView.setLayoutManager(new LinearLayoutManager(getActivity().getApplicationContext()));
            mListView.setItemAnimator(new DefaultItemAnimator());

            mListView.setAdapter(mAdapter);
        }
        dialog.show();
    }
    */

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
        }
        else
        {
            txtFirstCurrencyValue.text = "";
        }

        if (playerSecondCurrency != null)
        {
            txtSecondCurrencyValue.text = playerSecondCurrency.CurrentBalance.ToString();
        }
        else
        {
            txtSecondCurrencyValue.text = "";
        }

        showInventory();
    }

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

    #region Shop

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
        Spil.PlayerData.ConsumeBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[pnlShopCurrentPage * 7].BundleId, PlayerDataUpdateReasons.ItemBought);
    }

    public void btnShopItem2Click()
    {
        Spil.PlayerData.ConsumeBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[pnlShopCurrentPage * 7 + 1].BundleId, PlayerDataUpdateReasons.ItemBought);
    }

    public void btnShopItem3Click()
    {
        Spil.PlayerData.ConsumeBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[pnlShopCurrentPage * 7 + 2].BundleId, PlayerDataUpdateReasons.ItemBought);
    }

    public void btnShopItem4Click()
    {
        Spil.PlayerData.ConsumeBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[pnlShopCurrentPage * 7 + 3].BundleId, PlayerDataUpdateReasons.ItemBought);
    }

    public void btnShopItem5Click()
    {
        Spil.PlayerData.ConsumeBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[pnlShopCurrentPage * 7 + 4].BundleId, PlayerDataUpdateReasons.ItemBought);
    }

    public void btnShopItem6Click()
    {
        Spil.PlayerData.ConsumeBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[pnlShopCurrentPage * 7 + 5].BundleId, PlayerDataUpdateReasons.ItemBought);
    }

    public void btnShopItem7Click()
    {
        Spil.PlayerData.ConsumeBundle(Spil.GameData.Shop.Tabs[pnlShopCurrentTab].Entries[pnlShopCurrentPage * 7 + 6].BundleId, PlayerDataUpdateReasons.ItemBought);
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

	#region Web

	public void btnRequestSplashScreenClick()
	{
		txtWebStatus1.text = "Requesting splashscreen";
		txtWebStatus2.text = "";
		Spil.Instance.RequestSplashScreen ();
	}

	public void btnRequestDailyBonusScreenClick()
	{
		txtWebStatus1.text = "Requesting dailybonus";
		txtWebStatus2.text = "";
		Spil.Instance.RequestDailyBonus();
	}

	// Splash screen events
	public void SplashScreenOpenHandler() {
		txtWebStatus2.text += "\nSplashscreen open";
	}

	public void SplashScreenClosedHandler() {
		txtWebStatus2.text += "\nSplashscreen closed";
	}

	public void SplashScreenErrorHandler(SpilErrorMessage message) {
		txtWebStatus2.text += "\nSplashscreen error: " + message;
	}

	public void SplashScreenNotAvailabelHandler() {
		txtWebStatus2.text += "\nSplashscreen not available";
	}

	public void SplashScreenOpenShopHandler() {
		txtWebStatus2.text += "\nSplashscreen open shop";
	}

	// Daily bonus screen events
	public void DailyBonusOpenHandler() {
		txtWebStatus2.text += "\nDailybonus open";
	}

	public void DailyBonusClosedHandler() {
		txtWebStatus2.text += "\nDailybonus closed";
	}

	public void DailyBonusErrorHandler(SpilErrorMessage message) {
		txtWebStatus2.text += "\nDailybonus error: " + message;
	}

	public void DailyBonusNotAvailabelHandler() {
		txtWebStatus2.text += "\nDailybonus not available";
	}

	public void DailyBonusRewardHandler(String rewardList) {
		txtWebStatus2.text = "Splashscreen reward: " + rewardList;
	}

	#endregion
}