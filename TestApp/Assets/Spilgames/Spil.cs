/*
 * Spil Games Unity SDK 2016
 * Version 2.0.2
 * 
 * If you have any questions, don't hesitate to e-mail us at info@spilgames.com
 * Be sure to check the github page for documentation and the latest updates
 * https://github.com/spilgames/spil_event_unity_plugin 
*/

using UnityEngine;
using SpilGames.Unity.Implementations;
using SpilGames.Unity.Utils;
using UnityEngine.UI;
using System;
using System.Threading;
using SpilGames.Unity.Helpers;
using System.Collections.Generic;

namespace SpilGames.Unity
{
    public class Spil : MonoBehaviour
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

            Spil.Instance.OnPlayerDataUpdated -= Instance_OnPlayerDataUpdated;
            Spil.Instance.OnPlayerDataUpdated += Instance_OnPlayerDataUpdated;

            Spil.Instance.OnPlayerDataAvailable -= Instance_OnPlayerDataAvailable;
            Spil.Instance.OnPlayerDataAvailable += Instance_OnPlayerDataAvailable;

            Spil.Instance.OnSpilGameDataAvailable -= Instance_OnSpilGameDataAvailable;
            Spil.Instance.OnSpilGameDataAvailable += Instance_OnSpilGameDataAvailable;
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

        private void Instance_OnPlayerDataUpdated()
        {
            updateUI();
        }

        private void Instance_OnPlayerDataAvailable()
        {
            updateUI();
        }

        private void Instance_OnSpilGameDataAvailable()
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

        #region SpilSDK code

        /// <summary>
        /// The project ID assigned to your project by Spil games.
        /// You can get your project id from your contact person.
        /// The project ID is used for push notifications.
        /// </summary>
        public static string Project_ID
        {
            get { return "127433475057"; }
        }

        public static SpilGameDataHelper SpilGameDataInstance;
        public static PlayerDataHelper SpilPlayerDataInstance;

#if UNITY_EDITOR

        public static SpilUnityEditorImplementation Instance = new SpilUnityEditorImplementation();

#elif UNITY_ANDROID

                public static SpilAndroidUnityImplementation Instance = new SpilAndroidUnityImplementation();

#elif UNITY_IPHONE

                /// <summary>
                /// Use this object to access all Spil related functionality.
                /// </summary>
                public static SpiliOSUnityImplementation Instance = new SpiliOSUnityImplementation();

				void Update() { Instance.SendNotificationTokenToSpil(); }

#endif

        void Awake()
        {
            Debug.Log("SpilSDK-Unity Init");

            Instance.SpilInit(false);
            DontDestroyOnLoad(gameObject);
            gameObject.name = "SpilSDK";

            Instance.UpdatePackagesAndPromotions();

            SpilGameDataInstance = new SpilGameDataHelper(Instance);
            SpilPlayerDataInstance = new PlayerDataHelper(Instance);

            AttachListeners();
        }

        /// <summary>
        /// This method is called by the native Spil SDK, it should not be used by developers.
        /// Developers can subscribe to the Spil.Instance.AdStarted event.
        /// </summary>
        public void AdStart()
        {
            SpilUnityImplementationBase.fireAdStartedEvent();
        }

        /// <summary>
        /// This method is called by the native Spil SDK, it should not be used by developers.
        /// Developers can subscribe to the Spil.Instance.AdFinished event.
        /// </summary>
        public void AdFinished(string response)
        {
            SpilUnityImplementationBase.fireAdFinishedEvent(response);
        }

        /// <summary>
        /// This method is called by the native Spil SDK, it should not be used by developers.
        /// Developers can subscribe to the Spil.Instance.AdAvailable event.
        /// </summary>
        public void AdAvailable(string type)
        {
            SpilUnityImplementationBase.fireAdAvailableEvent(type);
        }

        /// <summary>
        /// This method is called by the native Spil SDK, it should not be used by developers.
        /// Developers can subscribe to the Spil.Instance.AdNotAvailable event.
        /// </summary>
        public void AdNotAvailable(string type)
        {
            SpilUnityImplementationBase.fireAdNotAvailableEvent(type);
        }

        /// <summary>
        /// This method is called by the native Spil SDK, it should not be used by developers.
        /// </summary>
        public void OnResponseReceived(string response)
        {
            SpilUnityImplementationBase.OnResponseReceived(response);
        }

        /// <summary>
        /// This method is called by the native Spil SDK, it should not be used by developers.
        /// </summary>
        public void SpilGameDataAvailable()
        {
            SpilUnityImplementationBase.fireSpilGameDataAvailable();
        }

        /// <summary>
        /// This method is called by the native Spil SDK, it should not be used by developers.
        /// </summary>
        public void SpilGameDataError(string reason)
        {
            SpilUnityImplementationBase.fireSpilGameDataError(reason);
        }

        /// <summary>
        /// This method is called by the native Spil SDK, it should not be used by developers.
        /// </summary>
        public void PlayerDataAvailable()
        {
            SpilUnityImplementationBase.firePlayerDataAvailable();
        }

        /// <summary>
        /// This method is called by the native Spil SDK, it should not be used by developers.
        /// </summary>
        public void PlayerDataUpdated()
        {
            SpilUnityImplementationBase.firePlayerDataUpdated();
        }

        /// <summary>
        /// This method is called by the native Spil SDK, it should not be used by developers.
        /// </summary>
        public void PlayerDataError(string reason)
        {
            SpilUnityImplementationBase.firePlayerDataError(reason);
        }

        #endregion

        public Button btnRequestRewardVideo;
        public Button btnFyberRewardVideo;
        public Button btnChartBoostRewardVideo;
        public Button btnMoreApps;
        public Button btnDFPInterstitial;
        public Button btnChartBoostInterstitial;
        public Button btnCake;

        public Text txtStatus1;
        public Text txtStatus2;

        int currentScreenShowing = 0;

        public GameObject panel1;
        public GameObject panel2;

        public void btnPrevClick()
        {
            currentScreenShowing -= 1;
            if (currentScreenShowing < 0)
            {
                currentScreenShowing = 1;
            }
            setCurrentPanel();
        }

        public void btnNextClick()
        {
            currentScreenShowing += 1;
            if (currentScreenShowing > 1)
            {
                currentScreenShowing = 0;
            }
            setCurrentPanel();
        }

        private void setCurrentPanel()
        {
            if (currentScreenShowing == 0)
            {
                panel1.SetActive(true);
                panel2.SetActive(false);
            }
            else if (currentScreenShowing == 1)
            {
                panel1.SetActive(false);
                panel2.SetActive(true);
            }
        }

        public void RequestRewardVideo()
        {
            txtStatus1.text = "Requesting reward video";
            Spil.Instance.SendrequestRewardVideoEvent();
        }

        public void RequestFyberRewardVideo()
        {
            txtStatus1.text = "Requesting Fyber reward video";
            #if UNITY_ANDROID
                Spil.Instance.TestRequestAd("Fyber", "rewardVideo", false);
            #endif
        }

        public void RequestChartBoostRewardVideo()
        {
            txtStatus1.text = "Requesting ChartBoost reward video";
            #if UNITY_ANDROID
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
        }

        public void RequestChartBoostInterstitial()
        {
            txtStatus1.text = "Requesting ChartBoost interstitial";
            #if UNITY_ANDROID
                Spil.Instance.TestRequestAd("chartboost", "interstitial", false);
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

        #region PlayerData

        public Text txtFirstCurrencyName;
        public Text txtFirstCurrencyValue;
        public Text txtSecondCurrencyName;
        public Text txtSecondCurrencyValue;

        public void addFirstCurrencyValue()
        {
            Spil.SpilPlayerDataInstance.Wallet.Add(Spil.SpilPlayerDataInstance.Wallet.Currencies[0].Id, 100, PlayerDataUpdateReasons.LevelComplete);
        }

        public void subtractFirstCurrencyValue()
        {
            Spil.SpilPlayerDataInstance.Wallet.Subtract(Spil.SpilPlayerDataInstance.Wallet.Currencies[0].Id, 100, PlayerDataUpdateReasons.Trade);
        }

        public void addSecondCurrencyValue()
        {
            Spil.SpilPlayerDataInstance.Wallet.Add(Spil.SpilPlayerDataInstance.Wallet.Currencies[1].Id, 100, PlayerDataUpdateReasons.LevelComplete);
        }

        public void subtractSecondCurrencyValue()
        {
            Spil.SpilPlayerDataInstance.Wallet.Subtract(Spil.SpilPlayerDataInstance.Wallet.Currencies[1].Id, 100, PlayerDataUpdateReasons.Trade);
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
            if (pnlSelectItemCurrentPage >= Spil.SpilGameDataInstance.Items.Count)
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

            for (int i = 0; i < (!ShowBundles ? Spil.SpilGameDataInstance.Items.Count : Spil.SpilGameDataInstance.Bundles.Count); i++)
            {
                if (i >= pnlSelectItemCurrentPage * 4 && i < (pnlSelectItemCurrentPage + 1) * 4)
                {
                    if (i % 4 == 0)
                    {
                        txtPnlSelectItemsId1.text = "Id: " + (!ShowBundles ? Spil.SpilGameDataInstance.Items[i].Id.ToString() : Spil.SpilGameDataInstance.Bundles[i].Id.ToString());
                        txtPnlSelectItemsAmount1.text = "X: 0";
                        txtPnlSelectItems1.text = (!ShowBundles ? Spil.SpilGameDataInstance.Items[i].Name : Spil.SpilGameDataInstance.Bundles[i].Name);
                        if(ShowBundles)
                        {
                            txtPnlSelectItemsCurrencyAmount1.text = Spil.SpilGameDataInstance.Bundles[i].Prices[0].Value.ToString();
                            txtPnlSelectItemsCurrency1.text = Spil.SpilGameDataInstance.GetCurrency(Spil.SpilGameDataInstance.Bundles[i].Prices[0].CurrencyId).Name;
                        }
                    }
                    if (i % 4 == 1)
                    {
                        txtPnlSelectItemsId2.text = "Id: " + (!ShowBundles ? Spil.SpilGameDataInstance.Items[i].Id.ToString() : Spil.SpilGameDataInstance.Bundles[i].Id.ToString());
                        txtPnlSelectItemsAmount2.text = "X: 0";
                        txtPnlSelectItems2.text = (!ShowBundles ? Spil.SpilGameDataInstance.Items[i].Name : Spil.SpilGameDataInstance.Bundles[i].Name);
                        if (ShowBundles)
                        {
                            txtPnlSelectItemsCurrencyAmount2.text = Spil.SpilGameDataInstance.Bundles[i].Prices[0].Value.ToString();
                            txtPnlSelectItemsCurrency2.text = Spil.SpilGameDataInstance.GetCurrency(Spil.SpilGameDataInstance.Bundles[i].Prices[0].CurrencyId).Name;
                        }
                    }
                    if (i % 4 == 2)
                    {
                        txtPnlSelectItemsId3.text = "Id: " + (!ShowBundles ? Spil.SpilGameDataInstance.Items[i].Id.ToString() : Spil.SpilGameDataInstance.Bundles[i].Id.ToString());
                        txtPnlSelectItemsAmount3.text = "X: 0";
                        txtPnlSelectItems3.text = (!ShowBundles ? Spil.SpilGameDataInstance.Items[i].Name : Spil.SpilGameDataInstance.Bundles[i].Name);
                        if (ShowBundles)
                        {
                            txtPnlSelectItemsCurrencyAmount3.text = Spil.SpilGameDataInstance.Bundles[i].Prices[0].Value.ToString();
                            txtPnlSelectItemsCurrency3.text = Spil.SpilGameDataInstance.GetCurrency(Spil.SpilGameDataInstance.Bundles[i].Prices[0].CurrencyId).Name;
                        }
                    }
                    if (i % 4 == 3)
                    {
                        txtPnlSelectItemsId4.text = "Id: " + (!ShowBundles ? Spil.SpilGameDataInstance.Items[i].Id.ToString() : Spil.SpilGameDataInstance.Bundles[i].Id.ToString());
                        txtPnlSelectItemsAmount4.text = "X: 0";
                        txtPnlSelectItems4.text = (!ShowBundles ? Spil.SpilGameDataInstance.Items[i].Name : Spil.SpilGameDataInstance.Bundles[i].Name);
                        if (ShowBundles)
                        {
                            txtPnlSelectItemsCurrencyAmount4.text = Spil.SpilGameDataInstance.Bundles[i].Prices[0].Value.ToString();
                            txtPnlSelectItemsCurrency4.text = Spil.SpilGameDataInstance.GetCurrency(Spil.SpilGameDataInstance.Bundles[i].Prices[0].CurrencyId).Name;
                        }
                    }
                }
            }
        }

        public void txtPnlSelectItems1Click()
        {
            if (Spil.SpilGameDataInstance.Items.Count >= pnlSelectItemCurrentPage * 4)
            {
                if (!ShowBundles)
                {
                    if (Adding)
                    {
                        Spil.SpilPlayerDataInstance.Inventory.Add(Spil.SpilGameDataInstance.Items[pnlSelectItemCurrentPage * 4].Id, 1, "momma said");
                    } else {
                        Spil.SpilPlayerDataInstance.Inventory.Subtract(Spil.SpilGameDataInstance.Items[pnlSelectItemCurrentPage * 4].Id, 1, "momma said");
                    }
                } else {
                    Spil.SpilPlayerDataInstance.ConsumeBundle(Spil.SpilGameDataInstance.Bundles[pnlSelectItemCurrentPage * 4].Id, "cuz");
                }
                pnlItems.SetActive(false);
                updateUI();
            }
        }

        public void txtPnlSelectItems2Click()
        {
            if (Spil.SpilGameDataInstance.Items.Count >= pnlSelectItemCurrentPage * 4 + 1)
            {
                if (!ShowBundles)
                {
                    if (Adding)
                    {
                        Spil.SpilPlayerDataInstance.Inventory.Add(Spil.SpilGameDataInstance.Items[pnlSelectItemCurrentPage * 4 + 1].Id, 1, "momma said");
                    } else {
                        Spil.SpilPlayerDataInstance.Inventory.Subtract(Spil.SpilGameDataInstance.Items[pnlSelectItemCurrentPage * 4 + 1].Id, 1, "momma said");
                    }
                } else {
                    Spil.SpilPlayerDataInstance.ConsumeBundle(Spil.SpilGameDataInstance.Bundles[pnlSelectItemCurrentPage * 4 + 1].Id, "cuz");
                }
                pnlItems.SetActive(false);
                updateUI();
            }
        }

        public void txtPnlSelectItems3Click()
        {
            if (Spil.SpilGameDataInstance.Items.Count >= pnlSelectItemCurrentPage * 4 + 2)                
            {
                if (!ShowBundles)
                {
                    if (Adding)
                    {
                        Spil.SpilPlayerDataInstance.Inventory.Add(Spil.SpilGameDataInstance.Items[pnlSelectItemCurrentPage * 4 + 2].Id, 1, "momma said");
                    } else {
                        Spil.SpilPlayerDataInstance.Inventory.Subtract(Spil.SpilGameDataInstance.Items[pnlSelectItemCurrentPage * 4 + 2].Id, 1, "momma said");
                    }
                } else {
                    Spil.SpilPlayerDataInstance.ConsumeBundle(Spil.SpilGameDataInstance.Bundles[pnlSelectItemCurrentPage * 4 + 2].Id, "cuz");
                }
                pnlItems.SetActive(false);
                updateUI();
            }
        }

        public void txtPnlSelectItems4Click()
        {
            if (Spil.SpilGameDataInstance.Items.Count >= pnlSelectItemCurrentPage * 4 + 3)                
            {
                if (!ShowBundles)
                {
                    if (Adding)
                    {
                        Spil.SpilPlayerDataInstance.Inventory.Add(Spil.SpilGameDataInstance.Items[pnlSelectItemCurrentPage * 4 + 3].Id, 1, "momma said");
                    } else {
                        Spil.SpilPlayerDataInstance.Inventory.Subtract(Spil.SpilGameDataInstance.Items[pnlSelectItemCurrentPage * 4 + 3].Id, 1, "momma said");
                    }
                } else {
                    Spil.SpilPlayerDataInstance.ConsumeBundle(Spil.SpilGameDataInstance.Bundles[pnlSelectItemCurrentPage * 4 + 3].Id, "cuz");
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
            if (pnlItemsCurrentPage >= Spil.SpilPlayerDataInstance.Inventory.Items.Count)
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

            if (Spil.SpilPlayerDataInstance.Wallet.Currencies.Count > 0)
            {
                firstCurrency = Spil.SpilPlayerDataInstance.Wallet.Currencies[0];
                txtFirstCurrencyName.text = firstCurrency.Name + ":";
            }

            if (Spil.SpilPlayerDataInstance.Wallet.Currencies.Count > 1)
            {
                secondCurrency = Spil.SpilPlayerDataInstance.Wallet.Currencies[1];
                txtSecondCurrencyName.text = secondCurrency.Name + ":";
            }

            PlayerCurrency playerFirstCurrency = null;
            PlayerCurrency playerSecondCurrency = null;

            for (int i = 0; i < Spil.SpilPlayerDataInstance.Wallet.Currencies.Count; i++)
            {
                if (firstCurrency != null && firstCurrency.Id == Spil.SpilPlayerDataInstance.Wallet.Currencies[i].Id)
                {
                    playerFirstCurrency = Spil.SpilPlayerDataInstance.Wallet.Currencies[i];
                }
                if (secondCurrency != null && secondCurrency.Id == Spil.SpilPlayerDataInstance.Wallet.Currencies[i].Id)
                {
                    playerSecondCurrency = Spil.SpilPlayerDataInstance.Wallet.Currencies[i];
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

            for (int i = 0; i < Spil.SpilPlayerDataInstance.Inventory.Items.Count; i++)
            {
                if (i >= pnlItemsCurrentPage * 4 && i < (pnlItemsCurrentPage + 1) * 4)
                {
                    if (i % 4 == 0)
                    {
                        txtPnlItemsId1.text = "Id: " + Spil.SpilPlayerDataInstance.Inventory.Items[i].Id.ToString();
                        txtPnlItemsAmount1.text = "X: " + Spil.SpilPlayerDataInstance.Inventory.Items[i].Amount.ToString();
                        txtPnlItems1.text = Spil.SpilPlayerDataInstance.Inventory.Items[i].Name;
                    }
                    if (i % 4 == 1)
                    {
                        txtPnlItemsId2.text = "Id: " + Spil.SpilPlayerDataInstance.Inventory.Items[i].Id.ToString();
                        txtPnlItemsAmount2.text = "X: " + Spil.SpilPlayerDataInstance.Inventory.Items[i].Amount.ToString();
                        txtPnlItems2.text = Spil.SpilPlayerDataInstance.Inventory.Items[i].Name;
                    }
                    if (i % 4 == 2)
                    {
                        txtPnlItemsId3.text = "Id: " + Spil.SpilPlayerDataInstance.Inventory.Items[i].Id.ToString();
                        txtPnlItemsAmount3.text = "X: " + Spil.SpilPlayerDataInstance.Inventory.Items[i].Amount.ToString();
                        txtPnlItems3.text = Spil.SpilPlayerDataInstance.Inventory.Items[i].Name;
                    }
                    if (i % 4 == 3)
                    {
                        txtPnlItemsId4.text = "Id: " + Spil.SpilPlayerDataInstance.Inventory.Items[i].Id.ToString();
                        txtPnlItemsAmount4.text = "X: " + Spil.SpilPlayerDataInstance.Inventory.Items[i].Amount.ToString();
                        txtPnlItems4.text = Spil.SpilPlayerDataInstance.Inventory.Items[i].Name;
                    }
                }
            }
        }

        #endregion
    }

}