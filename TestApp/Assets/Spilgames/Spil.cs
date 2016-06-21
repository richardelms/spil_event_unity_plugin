/*
 * Spil Games Unity SDK 2016
 * Version 2.0.1
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
        #region Example code for the developer

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

            // When an ad is available it can be shown
            void AdAvailableHandler(enumAdType adType)
            {
                txtBox1.text = adType.ToString() + " available";

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
                //Debug.Log("Ad was not available");
                txtBox1.text = adType.ToString() + " was not available";
            }

            void AdStartedHandler()
            {
                // Mute the game music etc.
                txtBox1.text = "Ad started";
            }

            void AdFinishedHandler(SpilAdFinishedResponse response)
            {
                // Re-enable the game music etc.

                // When an ad finishes we can immediately request a new one
                if (response.GetTypeAsEnum() == enumAdType.RewardVideo)
                {
                    //Spil.Instance.SendrequestRewardVideoEvent();
                }
                if (response.GetTypeAsEnum() == enumAdType.MoreApps)
                {
                    //Spil.Instance.RequestMoreApps();
                }

                txtBox1.text = "Ad finished";

                // Reward video's may also send a reward in the response if the video wasn't dismissed
                if (response.reward != null)
                {
                    int rewardAmount = response.reward.reward;
                    txtBox1.text = "Rewarded " + rewardAmount + (response.reward.currencyName != null ? " " + response.reward.currencyName : " credits");
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

			#if UNITY_EDITOR
				
				public static SpilUnityEditorImplementation Instance = new SpilUnityEditorImplementation ();

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

                Instance.SpilInit();
                DontDestroyOnLoad(gameObject);
                gameObject.name = "SpilSDK";

                Instance.UpdatePackagesAndPromotions();

                AttachListeners();

                updateUI();
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

        public Text txtBox1;
        public Text txtBox2;

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
            txtBox1.text = "Requesting reward video";
            Spil.Instance.SendrequestRewardVideoEvent();
        }

        public void RequestFyberRewardVideo()
        {
            txtBox1.text = "Requesting Fyber reward video";
            Spil.Instance.TestRequestAd("Fyber", "rewardVideo", false);
        }

        public void RequestChartBoostRewardVideo()
        {
            txtBox1.text = "Requesting ChartBoost reward video";
            Spil.Instance.TestRequestAd("ChartBoost", "rewardVideo", false);
        }

        public void RequestMoreApps()
        {
            txtBox1.text = "Requesting more apps";
            Spil.Instance.RequestMoreApps();
        }

        public void RequestDFPInterstitial()
        {
            txtBox1.text = "Requesting DFP interstitial";
            Spil.Instance.TestRequestAd("DFP", "interstitial", false);
        }

        public void RequestChartBoostInterstitial()
        {
            txtBox1.text = "Requesting ChartBoost interstitial";
            Spil.Instance.TestRequestAd("chartboost", "interstitial", false);
        }

        public void RequestCake()
        {
            txtBox1.text = "The cake is a lie";

            Spil.Instance.SendlevelCompleteEvent("my level");

            //DoTest();
        }

        public void DoTest()
        {
            //new Thread(
            //() =>
            //{
            toggleUIEnabled(false);
            txtBox1.text = "Test running";

            txtBox2.text = "Testing SendlevelStartEvent(\"Level1\")";
            Spil.Instance.clearLog();
            Debug.Log("LOG CLEARED");
            try
            {
                Spil.Instance.SendlevelStartEvent("Level1");
            }
            catch (Exception ex)
            {
                txtBox2.text = "Testing SendlevelStartEvent(\"Level1\") FAILED 1";
                toggleUIEnabled(true);
                return;
            }

            Thread.Sleep(500);

            string s = Spil.Instance.getLog();
            if (!s.Contains(": track_event levelStart") || !s.Contains(": name=levelStart"))
            {
                Debug.Log("Couldnt find string in: " + s + " -ENDLOG");
                txtBox2.text = "Testing SendlevelStartEvent(\"Level1\") FAILED 2";
                toggleUIEnabled(true);
                return;
            }
            // Event was properly dispatched by SpilSDK native, now check for response
            else if (!s.Contains("eventReceived: name=levelStart;"))
            {
                Debug.Log("Couldnt find server response string in: " + s + " -ENDLOG");
                txtBox2.text = "Testing SendlevelStartEvent(\"Level1\") FAILED 3";
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

            txtBox2.text = "Testing SendlevelFailedEvent(\"Level1\")";

            Spil.Instance.clearLog();
            Debug.Log("LOG CLEARED");
            try
            {
                Spil.Instance.SendlevelFailedEvent("Level1");
            }
            catch (Exception ex)
            {
                txtBox2.text = "Testing SendlevelFailedEvent(\"Level1\") FAILED 1";
                toggleUIEnabled(true);
                return;
            }

            Thread.Sleep(500);

            s = Spil.Instance.getLog();
            if (!s.Contains(": track_event levelFailed") || !s.Contains(": name=levelFailed"))
            {
                Debug.Log("Couldnt find string in: " + s + " -ENDLOG");
                txtBox2.text = "Testing SendlevelFailedEvent(\"Level1\") FAILED 2";
                toggleUIEnabled(true);
                return;
            }
            // Event was properly dispatched by SpilSDK native, now check for response
            else if (!s.Contains("eventReceived: name=levelFailed;"))
            {
                Debug.Log("Couldnt find server response string in: " + s + " -ENDLOG");
                txtBox2.text = "Testing SendlevelFailedEvent(\"Level1\") FAILED 3";
                toggleUIEnabled(true);
                return;
            }
            txtBox2.text = "Testing SendplayerDiesEvent(\"Level1\")";

            Spil.Instance.clearLog();
            Debug.Log("LOG CLEARED");
            try
            {
                Spil.Instance.SendplayerDiesEvent("Level1");
            }
            catch (Exception ex)
            {
                txtBox2.text = "Testing SendplayerDiesEvent(\"Level1\") FAILED 1";
                toggleUIEnabled(true);
                return;
            }

            Thread.Sleep(500);

            s = Spil.Instance.getLog();
            if (!s.Contains(": track_event playerDies") || !s.Contains(": name=playerDies"))
            {
                Debug.Log("Couldnt find string in: " + s + " -ENDLOG");
                txtBox2.text = "Testing SendplayerDiesEvent(\"Level1\") FAILED 2";
                toggleUIEnabled(true);
                return;
            }
            // Event was properly dispatched by SpilSDK native, now check for response
            else if (!s.Contains("eventReceived: name=playerDies;"))
            {
                Debug.Log("Couldnt find server response string in: " + s + " -ENDLOG");
                txtBox2.text = "Testing SendplayerDiesEvent(\"Level1\") FAILED 3";
                toggleUIEnabled(true);
                return;
            }

            /*
            txtBox2.text = "Testing SendrequestRewardVideoEvent()";

            Spil.Instance.clearLog();
            Debug.Log("LOG CLEARED");
            try
            {
                Spil.Instance.SendrequestRewardVideoEvent();
            }
            catch (Exception ex)
            {
                txtBox2.text = "Testing SendrequestRewardVideoEvent() FAILED 1";
                btn4.gameObject.SetActive(true);
                return;
            }

            Thread.Sleep(1000);

            s = Spil.Instance.getLog();
            if (!s.Contains(": track_event requestRewardVideo") || !s.Contains(": name=requestRewardVideo"))
            {
                Debug.Log("Couldnt find string in: " + s + " -ENDLOG");
                txtBox2.text = "Testing SendrequestRewardVideoEvent() FAILED 2";
                btn4.gameObject.SetActive(true);
                return;
            }
            // Event was properly dispatched by SpilSDK native, now check for response
            else if (!s.Contains("eventReceived: name=; action=show; type=advertisement;"))
            {
                Debug.Log("Couldnt find server response string in: " + s + " -ENDLOG");
                txtBox2.text = "Testing SendrequestRewardVideoEvent() FAILED 3";
                btn4.gameObject.SetActive(true);
                return;
            }
            */

            txtBox2.text = "Testing SendmilestoneAchievedEvent(\"Test executed\")";


            Spil.Instance.clearLog();
            Debug.Log("LOG CLEARED");
            try
            {
                Spil.Instance.SendmilestoneAchievedEvent("Test executed");
            }
            catch (Exception ex)
            {
                txtBox2.text = "Testing SendmilestoneAchievedEvent(\"Test executed\") FAILED 1";
                toggleUIEnabled(true);
                return;
            }

            Thread.Sleep(500);

            s = Spil.Instance.getLog();
            if (!s.Contains(": track_event milestoneAchieved") || !s.Contains(": name=milestoneAchieved"))
            {
                Debug.Log("Couldnt find string in: " + s + " -ENDLOG");
                txtBox2.text = "Testing SendmilestoneAchievedEvent(\"Test executed\") FAILED 2";
                toggleUIEnabled(true);
                return;
            }
            // Event was properly dispatched by SpilSDK native, now check for response
            else if (!s.Contains("eventReceived: name=milestoneAchieved;"))
            {
                Debug.Log("Couldnt find server response string in: " + s + " -ENDLOG");
                txtBox2.text = "Testing SendmilestoneAchievedEvent(\"Test executed\") FAILED 3";
                toggleUIEnabled(true);
                return;
            }

            txtBox2.text = "Testing getPackagesAll()";

            //try
            {
                PackagesHelper packages = Spil.Instance.GetPackagesAndPromotions();
                if (packages == null)
                {
                    txtBox2.text = "Testing getPackagesAll FAILED 2";
                    toggleUIEnabled(true);
                    return;
                }
                else
                {
                    if (packages.Packages == null)
                    {
                        txtBox2.text = "Testing getPackagesAll FAILED 3";
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

            txtBox2.text = "";
            txtBox1.text = "Test successful!";
            toggleUIEnabled(true);

            //Spil.Instance.SendwalletUpdateEvent(string walletValue, string itemValue, string source, string item, string category)
            //Spil.Instance.SendiapPurchasedEvent(string skuId, string transactionId, string purchaseDate)
            //Spil.Instance.SendiapRestoredEvent(string skuId, string originalTransactionId, string originalPurchaseDate)
            //Spil.Instance.SendiapFailedEvent(string error, string skuId)

            // }
            //).Start();
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
            PlayerDataHelper playerData;
            SpilGameDataHelper gameData;

            public void addFirstCurrencyValue()
            {
                Spil.Instance.AddCurrencyToWallet(playerData.Wallet.Currencies[0].Id, 100, PlayerDataUpdateReasons.LevelComplete);
            }

            public void subtractFirstCurrencyValue()
            {
                Spil.Instance.SubtractCurrencyFromWallet(playerData.Wallet.Currencies[0].Id, 100, PlayerDataUpdateReasons.Trade);
            }

            public void addSecondCurrencyValue()
            {
                Spil.Instance.AddCurrencyToWallet(playerData.Wallet.Currencies[1].Id, 100, PlayerDataUpdateReasons.LevelComplete);
            }
            
            public void subtractSecondCurrencyValue()
            {
                
                Spil.Instance.SubtractCurrencyFromWallet(playerData.Wallet.Currencies[1].Id, 100, PlayerDataUpdateReasons.Trade);
            }

            public GameObject pnlItems;
            public Text txtItemsMenuTitle;

            public void addItem()
            {
                txtItemsMenuTitle.text = "Spil SDK Game Items";
                showItemList("add");
                pnlItems.SetActive(true);
            }

            public void subtractItem()
            {
                txtItemsMenuTitle.text = "Spil SDK Game Items";
                showItemList("subtract");
                pnlItems.SetActive(true);
            }

            public void itemPanelCancelBtn()
            {
                pnlItems.SetActive(false);
            }

            public void buyBundle()
            {
                txtItemsMenuTitle.text = "Spil SDK Game Bundles";
                pnlItems.SetActive(true);
            }

            public GameObject itemsList;
            private void showItemList(String action)
            {
                int i = 0;
                int j = 0;

                foreach(Item item in gameData.Items)
                {
                    i++;
                    j++;
                    //create a new item, name it, and set the parent
                    GameObject newItem = new GameObject();
                    newItem.name = item.Name + " item at (" + i + "," + j + ")";
                    newItem.transform.SetParent(itemsList.transform, false); // Crash is here
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

            bool gameDataSet = false;

            public void updateUI()
            {
                Debug.Log("UpdateUI");

                playerData = Spil.Instance.GetPlayerData();

                Currency firstCurrency = playerData.Wallet.Currencies[0];
                txtFirstCurrencyName.text = firstCurrency.Name + ":";

                Currency secondCurrency = playerData.Wallet.Currencies[1];
                txtSecondCurrencyName.text = secondCurrency.Name + ":";

                PlayerCurrency playerFirstCurrency = null;
                PlayerCurrency playerSecondCurrency = null;

                for(int i = 0; i < playerData.Wallet.Currencies.Count; i++)
                {
                    if(firstCurrency.Id == playerData.Wallet.Currencies[i].Id)
                    {
                        playerFirstCurrency = playerData.Wallet.Currencies[i];
                    }
                    if(secondCurrency.Id == playerData.Wallet.Currencies[i].Id)
                    {
                        playerSecondCurrency = playerData.Wallet.Currencies[i];
                    }
                }

                if(playerFirstCurrency != null)
                {
                    txtFirstCurrencyValue.text = playerFirstCurrency.CurrentBalance.ToString();
                } else {
                    txtFirstCurrencyValue.text = "0 (E)";
                }

                if(playerSecondCurrency != null)
                {
                    txtSecondCurrencyValue.text = playerSecondCurrency.CurrentBalance.ToString();
                } else {
                    txtSecondCurrencyValue.text = "0 (E)";
                }

                gameData = Spil.Instance.GetSpilGameData();

                //inventoryString = MainActivity.SpilSDK.getInventory();
                //inventory = gson.fromJson(inventoryString, Inventory.class);
                //mAdapter.refreshList(inventory.getItems());
            }

        #endregion
    }
}