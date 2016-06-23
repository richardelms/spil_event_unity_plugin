﻿using System;
using System.Collections.Generic;
using UnityEngine;

namespace SpilGames.Unity.Implementations
{
    #if UNITY_ANDROID
    public class SpilAndroidUnityImplementation : SpilUnityImplementationBase
    {
        #region Inherited members

            #region Game config

                /// <summary>
                /// Returns the game config as a json string.
                /// This is not essential for developers so could be made private (getConfig T () uses it so it cannot be removed entirely) but might be handy for some developers so we left it in.
                /// </summary>
                /// <returns></returns>     
                public override string GetConfigAll()
                {
                    return CallNativeMethod("getConfigAll");
                }

                /// <summary>
                /// Method that returns a configuration value from the game config based on key 
                /// </summary>
                /// <param name="key"></param>
                /// <returns></returns>
                public override string GetConfigValue(string key)
                {
                    return CallNativeMethod("getConfigValue", key, true);
                }

            #endregion
        
            #region Packages and promotions

                /// <summary>
                /// Method that requests packages and promotions from the server.
                /// This is called automatically by the Spil SDK when the game starts.
                /// This is not essential so could be removed but might be handy for some developers so we left it in.
                /// </summary>
                public override void UpdatePackagesAndPromotions()
                {
                    CallNativeMethod("requestPackages");
                }

                // Method that returns the all packages
                protected override string GetAllPackages()
                {
                    return CallNativeMethod("getAllPackages");
                }

                // Method that returns a package based on key
                protected override string GetPackage(string key)
                {
                    return CallNativeMethod("getPackage", key, true);
                }

			    /// <summary>
			    /// This method is marked as internal and should not be exposed to developers.
			    /// The Spil Unity SDK is not packaged as a seperate assembly yet so this method is currently visible, this will be fixed in the future.
			    /// Internal method names start with a lower case so you can easily recognise and avoid them.
			    /// </summary>
                internal override string getPromotion(string key)
                {
                    return CallNativeMethod("getPromotion", key, true);
                }

            #endregion

            /// <summary>
            /// This method is marked as internal and should not be exposed to developers.
            /// The Spil Unity SDK is not packaged as a seperate assembly yet so this method is currently visible, this will be fixed in the future.
            /// Internal method names start with a lower case so you can easily recognise and avoid them.
            /// </summary>
			internal override void SpilInit(bool pushNotificationsEnabled)
            {
                RegisterDevice(Spil.Project_ID);
            }

            /// <summary>
            /// Sends an event to the native Spil SDK which will send a request to the back-end.
            /// Custom events may be tracked as follows:
            /// To track an simple custom event, simply call Spil.Instance.SendCustomEvent(String eventName); from anywhere in your code.
            /// To pass more information with the event create a &lt;String, String&gt; Dictionary and pass that as the second parameter like so:
            /// Dictionary&lt;String, String&gt; eventParams = new Dictionary&lt;String,String&gt;();
            /// eventParams.Add(“level”,levelName);
            /// Spil.Instance.SendCustomEvent(“PlayerDeath”, eventParams);
            /// See https://github.com/spilgames/spil_event_unity_plugin for more information on events.
            /// This method was previously called "TrackEvent".
            /// </summary>
            /// <param name="eventName"></param>
            /// <param name="dict"></param>
            public override void SendCustomEvent(string eventName, Dictionary<string, string> dict)
            {
                Debug.Log("SpilSDK-Unity SendCustomEvent " + eventName);

                using (AndroidJavaObject obj_HashMap = new AndroidJavaObject("java.util.HashMap"))
                {
                    IntPtr method_Put = AndroidJNIHelper.GetMethodID(obj_HashMap.GetRawClass(), "put","(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
                    object[] args = new object[2];
                    if (dict != null)
                    {
                        foreach (KeyValuePair<string, string> kvp in dict)
                        {
                            using (AndroidJavaObject k = new AndroidJavaObject("java.lang.String", kvp.Key))
                            {
                                using (AndroidJavaObject v = new AndroidJavaObject("java.lang.String", kvp.Value))
                                {
                                    args[0] = k;
                                    args[1] = v;
                                    AndroidJNI.CallObjectMethod(obj_HashMap.GetRawObject(), method_Put, AndroidJNIHelper.CreateJNIArgArray(args));
                                }
                            }
                        }
                    }
                    CallNativeMethod("trackEvent", new object[] { eventName, obj_HashMap }, true);
                }
            }

            /// <summary>
            /// This can be called to show a video, for instance after calling "SendrequestRewardVideoEvent()"
            /// and receiving an "AdAvailable" event the developer could call this method from the event handler.
            /// When calling this method "SendrequestRewardVideoEvent()" must first have been called to request and cache a video.
            /// If no video is available then nothing will happen.
            /// </summary>
	        public override void PlayVideo()
            {
                CallNativeMethod("playVideo");
	        }

            /// <summary>
            /// This can be called to show the "more apps" activity, for instance after calling "RequestMoreApps()"
            /// and receiving an "AdAvailable" event the developer could call this method from the event handler.
            /// When calling this method "RequestMoreApps()" must first have been called to request and cache a video.
            /// If no video is available then nothing will happen.
            /// </summary>
	        public override void PlayMoreApps()
            {
                CallNativeMethod("playMoreApps");
	        }

            /// <summary>
            /// Sends the "requestAd" event with the "moreApps" parameter to the native Spil SDK which will send a request to the back-end.
            /// When a response has been received from the back-end the SDK will fire either an "AdAvailable" or and "AdNotAvailable"
            /// event to which the developer can subscribe and for instance call PlayVideo(); or PlayMoreApps();
            /// </summary>
            public override void RequestMoreApps()
            {
                CallNativeMethod("requestAd", new object[]{ "ChartBoost", "moreApps", false }, true);
            }

            /// <summary>
            /// Retrieves the Spil User Id so that developers can show this in-game for users.
            /// If users contact Spil customer service they can supply this Id so that 
            /// customer support can help them properly. Please make this Id available for users
            /// in one of your game's screens.
            /// </summary>
	        public override string GetSpilUID()
            {
                return CallNativeMethod("getSpilUID");
            }
			
            /// <summary>
            /// When Fyber has shown a reward video and the user goes back to the game to receive his/her reward Fyber can
            /// automatically show a toast message with information about the reward, for instance "You've received 50 coins". 
            /// This is disabled by default to allow the developer to create a reward notification for the user.
            /// Developers can call SetShowToastOnVideoReward(true) to enable Fyber's automatic toast message.
            /// </summary>
            public override void SetShowToastOnVideoReward(bool value)
            {
                CallNativeMethod("showToastOnVideoReward", new object[]{ value }, true);
            }

        #endregion

        #region Non inherited members (Android only members)

            #region DFP / Fyber / ChartBoost

                /// <summary>
                /// Method that initiaties DFP Ads (to be used only for testing purposes).
                /// This is not essential for developers so could be hidden but it might be handy for some developers so we left it in.
                /// </summary>
                /// <param name="adUnitId"></param>
                public void TestStartDFP(string adUnitId)
                {
                    CallNativeMethod("startDFP", adUnitId, true);
                }

                /// <summary>
                /// Method that initiaties Fyber Ads (to be used only for testing purposes).
                /// This is not essential for developers so could be hidden but it might be handy for some developers so we left it in.
                /// </summary>
                /// <param name="appId"></param>
                /// <param name="token"></param>
                public void TestStartFyber(string appId, string token)
                {
                    CallNativeMethod("startFyber", new object[] { appId, token }, true);
                }

                /// <summary>
                /// Method that shows ChartBoost more apps (to be used only for testing purposes).
                /// This is not essential for developers so could be hidden but it might be handy for some developers so we left it in.
                /// </summary>
                /// <param name="appId"></param>
                /// <param name="appSignature"></param>
                public void TestStartChartBoost(string appId, string appSignature)
                {
                    CallNativeMethod("startChartboost", new object[] { appId, appSignature }, true); 
                }

                /// <summary>
                /// Method that requests ads (to be used only for testing purposes).
                /// This is not essential for developers so could be hidden but it might be handy for some developers so we left it in.
                /// Use SendrequestRewardVideoEvent() if you want to request an ad!
                /// </summary>
                /// <param name="provider"></param>
                /// <param name="adType"></param>
                /// <param name="parentalGate"></param>
	            public void TestRequestAd(string provider, string adType, bool parentalGate)
                {
				    CallNativeMethod("requestAd", new object[] { provider, adType, parentalGate }, true);
	            }

            #endregion

            #region Push notifications

                /// <summary>
                /// Enables push notification for Android.
                /// Be sure to fill in the correct Project_ID in Spil.cs
                /// </summary>
                public void EnablePushNotifications()
                {
                    CallNativeMethod("enableNotifications");
                }

                /// <summary>
                /// Disables push notification for Android.
                /// </summary>
                public void DisablePushNotifications()
                {
                    CallNativeMethod("disableNotification");
                }

            #endregion

            // If Android, register device
            private void RegisterDevice(string projectID)
            {
                CallNativeMethod("registerDevice", projectID, true);
            }

            /// <summary>
            /// Used only by the Test app to check that calls were successfully made.
            /// This method is marked as "internal" and should not be exposed to developers.
            /// The Spil Unity SDK is not packaged as a seperate assembly yet so this method is currently visible, this will be fixed in the future.
            /// Internal method names start with a lower case so you can easily recognise and avoid them.
            /// </summary>
            internal string clearLog()
            {
                return CallNativeMethod("clearLog");
            }

            /// <summary>
            /// Used only by the Test app to check that calls were successfully made.
            /// This method is marked as internal and should not be exposed to developers.
            /// The Spil Unity SDK is not packaged as a seperate assembly yet so this method is currently visible, this will be fixed in the future.
            /// Internal method names start with a lower case so you can easily recognise and avoid them.
            /// </summary>
            internal string getLog()
            {
                return CallNativeMethod("getLog");
            }

            private string CallNativeMethod(string methodName)
            {
                return CallNativeMethod<object>(methodName);
            }

            /// <summary>
            /// Calls a native method with the given method name. When using param1 T does not need to be supplied, the type of the object passed as param1 will be used automatically.
            /// </summary>
            /// <typeparam name="T"></typeparam>
            /// <param name="methodName"></param>
            /// <param name="param1"></param>
            /// <param name="useParam1"></param>
            /// <returns></returns>
            private string CallNativeMethod<T>(string methodName, T param1 = null, bool useParam1 = false) where T: class
            {
                Debug.Log("SpilSDK-Unity CallNativeMethod " + methodName + (param1 != null ? " param: " + param1.ToString() : ""));

                string value = null;
                using (AndroidJavaClass pClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer"))
                {
                    if (pClass != null)
                    {
                        AndroidJavaObject instance = pClass.GetStatic<AndroidJavaObject>("currentActivity");
                        if(useParam1)
                        {
                            // Required because apparently when object[] is passed as T instance.Call() cannot seem to find the right method signature (it assumes T is Object instead of object[] ??)
                            // TODO: Test if other types passed as T do work correctly.
                            object[] realParam = null;
                            if (param1 is object[])
                            {
                                realParam = (object[])((object)param1);
                            }
                            if(realParam != null)
                            {
                                try
                                {
                                    value = instance.Call<string>(methodName, realParam);
                                }
                                catch (AndroidJavaException ex)
                                {
                                    // Method is probably a void method, try calling it without return type
                                    // TODO: This could be confusing and return unexpected results? Could make seperate method for void method calls?
                                    instance.Call(methodName, realParam);
                                }
                            } else { 
                                try
                                { 
                                    value = instance.Call<string>(methodName, param1);
                                }
                                catch (AndroidJavaException ex)
                                {
                                    // Method is probably a void method, try calling it without return type
                                    // TODO: This could be confusing and return unexpected results? Could make seperate method for void method calls?
                                    instance.Call(methodName, param1);
                                }
                            }
                        } else {
                            try
                            { 
                                value = instance.Call<string>(methodName);                                
                            }
                            catch (AndroidJavaException ex)
                            {
                                // Method is probably a void method, try calling it without return type
                                // TODO: This could be confusing and return unexpected results? Could make seperate method for void method calls?
                                instance.Call(methodName);                                
                            }
                        }
                    }
                }
                return value;
            }

        #endregion
    }
    #endif
}