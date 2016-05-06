﻿using System.Collections.Generic;
using System;
using UnityEngine;
using SpilGames.Unity.Helpers;
using SpilGames.Unity.Utils;

namespace SpilGames.Unity.Implementations
{ 
    public abstract class SpilUnityImplementationBase
    {
        #region Misc.

            /// <summary>
            /// This method is marked as internal and should not be exposed to developers.
            /// The Spil Unity SDK is not packaged as a seperate assembly yet so unfortunately this method is currently visible.
            /// Internal method names start with a lower case so you can easily recognise and avoid them.
            /// </summary>
            internal abstract void SpilInit();  

        #endregion

        #region Game config

            /// <summary>
            /// Method that returns the SLOT Config as a (user-defined) object. See the example in JSONHelper.cs for
            /// more information on how to turn JSON strings (such as the SLOT game config) into classes.
            /// This method currently does not catch and handle any exceptions and will not present the developer with
            /// handy tips for fixing his/her JSON or class. Developers will have to make due with the standard
            /// exceptions for now for debugging their JSON and classes. This may be improved in the future.
            /// </summary>
            /// <typeparam name="T">The user-defined class that mirrors the shape of the data in the JSON</typeparam>
            /// <returns></returns>
            public T GetConfig<T>() where T : new()
            {
                // TODO: Handle exceptions gracefully
                return JsonHelper.getObjectFromJson<T>(GetConfigAll());
            }

            public abstract string GetConfigAll();

            public abstract string GetConfigValue(string key);

        #endregion

        #region Packages and promotions

            // This is not essential so could be removed but might be handy for some developers so we left it in.
            public abstract void UpdatePackagesAndPromotions();

            /// <summary>
            /// Fetch packages and promotions locally. Packages and promotions are requested from the server when the app starts and are cached.
            /// </summary>
            /// <returns>A packageshelper object filled with packages and promotions, will be empty if there are none. Returns null if no packages or promotions are present, which should only happen if the server has never been successfully queried for packages and promotions.</returns>
            public PackagesHelper GetPackagesAndPromotions()
            {
                PackagesHelper helper = null;
                string packagesString = GetAllPackages();
                if(packagesString != null)
                {
                    List<PackageData> packagesList = JsonHelper.getObjectFromJson<List<PackageData>>(packagesString);
                    helper = new PackagesHelper(packagesList);
                }
                return helper;
            }

            protected abstract string GetAllPackages();

            //Method that returns a package based on key
            protected abstract string GetPackage(string key);

			/// <summary>
			/// This method is marked as internal and should not be exposed to developers.
			/// The Spil Unity SDK is not packaged as a seperate assembly yet so this method is currently visible, this will be fixed in the future.
			/// Internal method names start with a lower case so you can easily recognise and avoid them.
			/// </summary>
            internal abstract string getPromotion(string key);

        #endregion

        #region Events         

            #region Standard Spil events

                /// <summary>
                /// Sends the "milestoneAchieved" event to the native Spil SDK which will send a request to the back-end.
                /// See https://github.com/spilgames/spil_event_unity_plugin for more information on events.
                /// </summary>
                /// <param name="name"></param>
                public void SendmilestoneAchievedEvent(string name)
                {
                    SendCustomEvent("milestoneAchieved", new Dictionary<string, string>() { { "name", name } });
                }

                /// <summary>
                /// Sends the "levelStart" event to the native Spil SDK which will send a request to the back-end.
                /// See https://github.com/spilgames/spil_event_unity_plugin for more information on events.
                /// </summary>
                /// <param name="levelName"></param>
                public void SendlevelStartEvent(string levelName)
                {
                    SendCustomEvent("levelStart", new Dictionary<string, string>() { { "level", levelName } });
                }

                /// <summary>
                /// Sends the "levelComplete" event to the native Spil SDK which will send a request to the back-end.
                /// See https://github.com/spilgames/spil_event_unity_plugin for more information on events.
                /// </summary>
                /// <param name="levelName"></param>
                public void SendlevelCompleteEvent(string levelName)
                {
                    SendCustomEvent("levelComplete", new Dictionary<string, string>() { { "level", levelName } });
                }

                /// <summary>
                /// Sends the "levelFailed" event to the native Spil SDK which will send a request to the back-end.
                /// See https://github.com/spilgames/spil_event_unity_plugin for more information on events.
                /// </summary>
                /// <param name="levelName"></param>
                public void SendlevelFailedEvent(string levelName)
                {
                    SendCustomEvent("levelFailed", new Dictionary<string, string>() { { "level", levelName } });
                }

                /// <summary>
                /// Sends the "playerDies" event to the native Spil SDK which will send a request to the back-end.
                /// See https://github.com/spilgames/spil_event_unity_plugin for more information on events.
                /// </summary>
                /// <param name="levelName"></param>
                public void SendplayerDiesEvent(string levelName)
                {
                    SendCustomEvent("playerDies", new Dictionary<string, string>() { { "level", levelName } });
                }

                /// <summary>
                /// Sends the "requestRewardVideo" event to the native Spil SDK which will send a request to the back-end.
                /// When a response has been received from the back-end the SDK will fire either an "AdAvailable" or and "AdNotAvailable"
                /// event to which the developer can subscribe and for instance call PlayVideo(); or PlayMoreApps();
                /// See https://github.com/spilgames/spil_event_unity_plugin for more information on events.
                /// </summary>
                public void SendrequestRewardVideoEvent(string rewardType = null)
                {
                    SendCustomEvent("requestRewardVideo", rewardType == null ? null : new Dictionary<string, string>() { { "rewardType", rewardType } });
                }

                // Deprecated this old method in favor of SendRequestRewardVideoEvent() for uniformity
                /// <summary>
                /// Sends the "requestRewardVideo" event to the native Spil SDK which will send a request to the back-end.
                /// When a response has been received from the back-end the SDK will fire either an "AdAvailable" or and "AdNotAvailable"
                /// event to which the developer can subscribe and for instance call PlayVideo(); or PlayMoreApps();
                /// </summary>
                [Obsolete("ShowRewardedVideo() is deprecated, please use SendRequestRewardVideoEvent() instead. This method will be removed in the next version.")]                
                public void ShowRewardedVideo()
                {
                    SendCustomEvent("requestRewardVideo");
                }

                /// <summary>
                /// Sends the "walletUpdate" event to the native Spil SDK which will send a request to the back-end.
                /// See https://github.com/spilgames/spil_event_unity_plugin for more information on events.
                /// </summary>
                /// <param name="name"></param>
                /// <param name="walletValue">The new wallet value after subtracting the item value. E.g coins</param>
                /// <param name="itemValue">The value of the item consumed. E.g. coins. (note: This property can also be negative, for example if a user spends coins, the itemValue can be -100)</param>
                /// <param name="source">(int) - 0 == premium</param>
                /// <param name="item">item id or sku</param>
                /// <param name="category">(int) - 0 = Consumable, 1 = Booster, 2 = Permanent</param>
                public void SendwalletUpdateEvent(string walletValue, string itemValue, string source, string item, string category)
                {
                    SendCustomEvent("walletUpdate", new Dictionary<string, string>() { { "walletValue", walletValue }, { "itemValue", itemValue }, { "source", source }, { "item", item }, { "category", category } });
                }

                /// <summary>
                /// Sends the "iapPurchased" event to the native Spil SDK which will send a request to the back-end.
                /// See https://github.com/spilgames/spil_event_unity_plugin for more information on events.
                /// </summary>
                /// <param name="skuId">The product identifier of the item that was purchased</param>
                /// <param name="transactionId ">The transaction identifier of the item that was purchased (also called orderId)</param>
                /// <param name="purchaseDate">Please use a proper DateTime format!</param>
                /// <param name="localPrice">The price the user paid for the product</param>
                /// <param name="localCurrency">The currency for the price the user paid (euro, dollar etc)</param>
                public void SendiapPurchasedEvent(string skuId, string transactionId, string purchaseDate, string localPrice, string localCurrency)
                {
                    SendCustomEvent("iapPurchased", new Dictionary<string, string>() { { "skuId", skuId }, { "transactionId", transactionId }, { "purchaseDate", purchaseDate }, { "localPrice", localPrice }, { "localCurrency", localCurrency } });
                }

                /// <summary>
                /// Sends the "iapRestored" event to the native Spil SDK which will send a request to the back-end.
                /// See https://github.com/spilgames/spil_event_unity_plugin for more information on events.
                /// </summary>
                /// <param name="skuId">The product identifier of the item that was purchased</param>
                /// <param name="originalTransactionId ">For a transaction that restores a previous transaction, the transaction identifier of the original transaction. Otherwise, identical to the transaction identifier</param>
                /// <param name="originalPurchaseDate">For a transaction that restores a previous transaction, the date of the original transaction. Please use a proper DateTime format!</param>
                public void SendiapRestoredEvent(string skuId, string originalTransactionId, string originalPurchaseDate)
                {
                    SendCustomEvent("iapRestored", new Dictionary<string, string>() { { "originalTransactionId", originalTransactionId }, { "originalPurchaseDate", originalPurchaseDate } });
                }

                /// <summary>
                /// Sends the "iapFailed" event to the native Spil SDK which will send a request to the back-end.
                /// See https://github.com/spilgames/spil_event_unity_plugin for more information on events.
                /// </summary>
                /// <param name="error">Error description or error code</param>
                /// <param name="skuId">The product identifier of the item that was purchased</param>
                public void SendiapFailedEvent(string error, string skuId)
                {
                    SendCustomEvent("iapFailed", new Dictionary<string, string>() { { "error", error }, { "skuId", skuId } });
                }

            #endregion

            [Obsolete("This method is obsolete and has been replaced by SendCustomEvent(string eventName). Please update any references, this method will be removed in the next version.")]
            public void TrackEvent(string key) { SendCustomEvent(key); }

            /// <summary>
            /// Sends an event to the native Spil SDK which will send a request to the back-end.
            /// See https://github.com/spilgames/spil_event_unity_plugin for more information on events.
            /// This method was previously called "TrackEvent"
            /// </summary>
            public void SendCustomEvent(string eventName) { SendCustomEvent(eventName, null); }

            [Obsolete("This method is obsolete and has been replaced by SendCustomEvent(string eventName, Dictionary<string, string> eventParams). Please update any references, this method will be removed in the next version.")]
            public void TrackEvent(string eventName, Dictionary<string, string> eventParams) { SendCustomEvent(eventName, eventParams); }

            /// <summary>
            /// Sends an event to the native Spil SDK which will send a request to the back-end.
            /// Track an event with params 
            /// </summary>
            /// <param name="eventName"></param>
            /// <param name="eventParams"></param>
            public abstract void SendCustomEvent(string eventName, Dictionary<string, string> eventParams);

            #region Advertisement events

                /// <summary>
                /// This is fired by the native Spil SDK after it receives a response from the back-end.
                /// This method is exposed only for use by the native Spil SDK and should not be used by the developer!
                /// </summary>
                /// <param name="response"></param>
                public static void OnResponseReceived(string response)
                {
                    Debug.Log("SpilSDK-Unity OnResponseReceived " + response);

                    // Rewards are now received via the AdFinished event (in Android). Leave this in for now for iOS and legacy users (?)

                    SpilResponse spilResponse = JsonHelper.getObjectFromJson<SpilResponse>(response);

                    if (spilResponse.type.Equals("reward"))
                    {
                        RewardResponse rewardResponseData = JsonHelper.getObjectFromJson<RewardResponse>(response);
                        fireOnRewardEvent(rewardResponseData.data.eventData);
                    }
                }

                public delegate void RewardEvent(RewardData rewardResponse);
                /// <summary>
                /// This is fired by the Unity Spil SDK after it receives a "Reward" response from the back-end.
                /// The developer can subscribe to this event to assign the reward and update the UI.
                /// This event should no longer be used, reward data is now passed as a parameter of the AdFinished event so please use that instead.
                /// </summary>
                public event RewardEvent OnReward;
                /// <summary>
                /// This is fired by the Unity Spil SDK after it receives a "Reward" response from the back-end.
                /// </summary>
                private static void fireOnRewardEvent(RewardData rewardResponse) {  if (Spil.Instance.OnReward != null) { Spil.Instance.OnReward(rewardResponse); } }

                public delegate void AdAvailableEvent(enumAdType adType);
                /// <summary>
                /// This is fired by the native Spil SDK after it receives an "AdAvailable" response from the back-end.
                /// The developer can subscribe to this event and for instance call "Spil.Instance.PlayVideo();" or "Spil.Instance.PlayMoreApps()"
                /// </summary>
                public event AdAvailableEvent OnAdAvailable;
                /// <summary>
                /// This is called by the native Spil SDK and will fire an OnAdAvailable event to which the developer 
                /// can subscribe and for instance call "Spil.Instance.PlayVideo();" or "Spil.Instance.PlayMoreApps()"
                /// This method is exposed only for use by the native Spil SDK and should not be used by the developer!
                /// </summary>
                /// <param name="type"></param>
                public static void fireAdAvailableEvent(string type)
                {
			        Debug.Log ("SpilSDK-Unity Ad " + type + " ready!");

                    enumAdType adType = enumAdType.Unknown;
                    if(type.Equals("rewardVideo"))
                    {
                         adType = enumAdType.RewardVideo;
                    }
                    else if(type.Equals("interstitial"))
                    {
                        adType = enumAdType.Interstitial;
                    }
                    else if(type.Equals("moreApps"))
                    {
                        adType = enumAdType.MoreApps;
                    }
                    if(adType == enumAdType.Unknown)
                    {
                        Debug.Log ("SpilSDK-Unity AdAvailable event fired but type is unknown. Type: " + type);
                    }
                    if (Spil.Instance.OnAdAvailable != null) { Spil.Instance.OnAdAvailable(adType); }
	            }

                public delegate void AdNotAvailableEvent(enumAdType adType);
                /// <summary>
                /// This is fired by the native Spil SDK after it receives an "AdNotAvailable" response from the back-end.
                /// The developer can subscribe to this event and for instance NOT call "Spil.Instance.PlayVideo();" or "Spil.Instance.PlayMoreApps()"
                /// but do something else instead.
                /// </summary>
                public event AdNotAvailableEvent OnAdNotAvailable;
                /// <summary>
                /// This is called by the native Spil SDK and will fire an OnAdNotAvailable event to which the developer 
                /// can subscribe and for instance NOT call "Spil.Instance.PlayVideo();" or "Spil.Instance.PlayMoreApps()" but do something else instead.
                /// This method is exposed only for use by the native Spil SDK and should not be used by the developer!
                /// </summary>
                /// <param name="type"></param>
                public static void fireAdNotAvailableEvent(string type)
                {		
		            Debug.Log ("SpilSDK-Unity Ad " + type + " is not available");

                    enumAdType adType = enumAdType.Unknown;
                    if(type.Equals("rewardVideo"))
                    {
                         adType = enumAdType.RewardVideo;
                    }
                    else if(type.Equals("interstitial"))
                    {
                        adType = enumAdType.Interstitial;
                    }
                    else if(type.Equals("moreApps"))
                    {
                        adType = enumAdType.MoreApps;
                    }
                    if(adType == enumAdType.Unknown)
                    {
                        Debug.Log ("SpilSDK-Unity AdNotAvailable event fired but type is unknown. Type: " + type);
                    }
                    if (Spil.Instance.OnAdNotAvailable != null) { Spil.Instance.OnAdNotAvailable(adType); }
	            }            

                public delegate void AdStartedEvent();
                /// <summary>
                /// This is fired by the native Spil SDK after a video is started.
                /// The developer can subscribe to this event and for instance disable the in-game sound.
                /// </summary>
                public event AdStartedEvent OnAdStarted;
                /// <summary>
                /// This is called by the native Spil SDK and will fire an OnAdStarted event to which the developer 
                /// can subscribe and for instance disable the in-game sound.
                /// This method is exposed only for use by the native Spil SDK and should not be used by the developer!
                /// </summary>
                public static void fireAdStartedEvent()
                {
                    Debug.Log ("SpilSDK-Unity Ad started");
                    if (Spil.Instance.OnAdStarted != null) { Spil.Instance.OnAdStarted(); }
	            }

                public delegate void AdFinishedEvent(SpilAdFinishedResponse response);
                /// <summary>
                /// This is fired by the native Spil SDK after a video has finished playing.
                /// The developer can subscribe to this event and for instance re-enable the in-game sound.
                /// </summary>
                public event AdFinishedEvent OnAdFinished;
                /// <summary>
                /// This is called by the native Spil SDK and will fire an OnAdFinished event to which the developer 
                /// can subscribe and for instance re-enable the in-game sound.
                /// This method is exposed only for use by the native Spil SDK and should not be used by the developer!
                /// </summary>
                public static void fireAdFinishedEvent(string response)
                {
                    Debug.Log ("SpilSDK-Unity Ad finished! Response = " + response);
                    SpilAdFinishedResponse responseObject = JsonHelper.getObjectFromJson<SpilAdFinishedResponse>(response);
                    if (Spil.Instance.OnAdFinished != null) { Spil.Instance.OnAdFinished(responseObject); }
	            }

            #endregion
        
        #endregion

        // TODO: Find a more logical place to put this...

        /// <summary>
        /// Method that requests the "more apps" activity
        /// </summary>
        public abstract void RequestMoreApps();

        public abstract void PlayVideo();

        public abstract void PlayMoreApps();
    }
}