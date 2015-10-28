﻿using UnityEngine;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Collections;
using System;
#if UNITY_IOS
#if UNITY_5
using NotificationServices = UnityEngine.iOS.NotificationServices;
using NotificationType = UnityEngine.iOS.NotificationType;
#else
using NotificationServices = UnityEngine.NotificationServices;
#endif
#endif

public class Spil : MonoBehaviour {
	
	//get your project id from your representative 
	public string androidProjectID;

	void Awake () {	
		SpilInit ();
		DontDestroyOnLoad (gameObject);
		gameObject.name = "SpilSDK";
	}
	
	#if UNITY_EDITOR || (!UNITY_ANDROID && !UNITY_IPHONE)
	public static void TrackEvent(string eventName){
		Debug.Log ("SPIL TRACK EVENT: " + eventName);
	}
	public static void TrackEvent(string eventName, Dictionary<string,string> eventParams){
		Debug.Log ("SPIL TRACK EVENT: " + eventName + " " + eventParams.ToString());
	}
	void SpilInit(){
		Debug.Log ("SpilInit");
	}
	#elif UNITY_ANDROID 
	void SpilInit(){
		RegisterDevice (androidProjectID);
	}
	
	//track an event with no params
	public static void TrackEvent(string eventName){
		TrackEvent (eventName, null);
	}
	
	//track an event with params
	public static void TrackEvent(string eventName, Dictionary<string,string> dict){
		using (AndroidJavaObject obj_HashMap = new AndroidJavaObject("java.util.HashMap")) {
			IntPtr method_Put = AndroidJNIHelper.GetMethodID (obj_HashMap.GetRawClass (), "put",
			                                                  "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
			object[] args = new object[2];
			if (dict != null) {
				foreach (KeyValuePair<string, string> kvp in dict) {
					using (AndroidJavaObject k = new AndroidJavaObject("java.lang.String", kvp.Key)) {
						using (AndroidJavaObject v = new AndroidJavaObject("java.lang.String", kvp.Value)) {
							args [0] = k;
							args [1] = v;
							AndroidJNI.CallObjectMethod (obj_HashMap.GetRawObject (),
							                             method_Put, AndroidJNIHelper.CreateJNIArgArray (args));
						}
					}
				}
			}
			using (AndroidJavaClass pClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer")) {
				if (pClass != null) {
					AndroidJavaObject instance = pClass.GetStatic<AndroidJavaObject> ("currentActivity");
					instance.Call ("trackEvent", new object[]{eventName, obj_HashMap});
				}
			}
		}
	}



	//if android, register device
	public void RegisterDevice(string projectID){
		using(AndroidJavaClass pClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer")){
			if(pClass != null){
				AndroidJavaObject instance = pClass.GetStatic<AndroidJavaObject>("currentActivity");
				instance.Call("registerDevice", projectID);
			}
		}
	}

	public static void ReportActivityStart(){
				using(AndroidJavaClass pClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer")){
						if(pClass != null){
								AndroidJavaObject instance = pClass.GetStatic<AndroidJavaObject>("currentActivity");
								instance.Call("reportActivityStart");
							}
					}
			}

		public static void ReportActivityStop(){
				using(AndroidJavaClass pClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer")){
						if(pClass != null){
								AndroidJavaObject instance = pClass.GetStatic<AndroidJavaObject>("currentActivity");
								instance.Call("reportActivityStop");
							}
					}
			}


	//Method that enables push notifications messages
	public void EnablePushNotifications(){
		using(AndroidJavaClass pClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer")){
			if(pClass != null){
				AndroidJavaObject instance = pClass.GetStatic<AndroidJavaObject>("currentActivity");
				instance.Call("enableNotifications");
			}
		}
	}
	//Method that disables push notifications messages
	public void DisablePushNotifications(){
		using(AndroidJavaClass pClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer")){
			if(pClass != null){
				AndroidJavaObject instance = pClass.GetStatic<AndroidJavaObject>("currentActivity");
				instance.Call("disableNotification");
			}
		}
	}
	
	void OnApplicationPause(bool pauseStatus) {
		if(!pauseStatus){
			ReportActivityStart();
			TrackEvent("special_game_start");
		}else{
			ReportActivityStop();
		}
	}
	
	
	#elif UNITY_IOS 
	
	//is the IOS notification service token sent
	bool tokenSent;
	
	[DllImport("__Internal")]
	public static extern void initEventTracker();

	[DllImport("__Internal")]
	public static extern void applicationDidEnterBackground();

	[DllImport("__Internal")]
	public static extern void applicationDidBecomeActive();
	
	[DllImport("__Internal")]
	public static extern void trackEventNative(string eventName);

	[DllImport("__Internal")]
	public static extern void setPushNotificationKey(string key);
	
	[DllImport("__Internal")]
	public static extern void trackEventWithParamsNative(string eventName, string jsonStringParams);
	
	[DllImport("__Internal")]
	public static extern void handlePushNotification(string notificationStringParams);
	
	void SpilInit(){
		initEventTracker();
		RegisterForIosPushNotifications();
		CheckForRemoteNotifications();
	}
	
	#if UNITY_5
	
	//register for ios push notifications
	void RegisterForIosPushNotifications(){
		Debug.Log ("UNITY: REGISTERING FOR PUSH NOTIFICATIONS");
		UnityEngine.iOS.NotificationServices.RegisterForNotifications(
			NotificationType.Alert | 
			NotificationType.Badge | 
			NotificationType.Sound,true);
	}
	
	#else
	
	//register for ios push notifications
	void RegisterForIosPushNotifications(){
		Debug.Log ("UNITY: REGISTERING FOR PUSH NOTIFICATIONS");
		NotificationServices.RegisterForRemoteNotificationTypes (RemoteNotificationType.Alert|
		                                                         RemoteNotificationType.Badge|
		                                                         RemoteNotificationType.Sound);
	}
	
	#endif
	
	void Update(){
		SendNotificationTokenToSpil();
	}
	
	void SendNotificationTokenToSpil(){
		if (!tokenSent) {
			byte[] token = NotificationServices.deviceToken;
			if (token != null) {
				// send token to a provider
				string tokenToBeSent = System.BitConverter.ToString (token).Replace ("-", "");
				Dictionary<string,string> param = new Dictionary<string, string> ();
				param.Add ("regId", tokenToBeSent);
				setPushNotificationKey (tokenToBeSent);
				tokenSent = true;
			}
		}
	}
	
	//track an event with no params
	public static void TrackEvent(string eventName){
		TrackEvent (eventName, null);
	}
	
	//track an event with params
	public static void TrackEvent(string eventName, Dictionary<string,string> dict){
		if (dict != null) {
			//creat a json object using the JSONobject library
			JSONObject jsonString = new JSONObject(JSONObject.Type.STRING);
			foreach(var item in dict){
				jsonString.AddField(item.Key,item.Value);
			}
			trackEventWithParamsNative (eventName, jsonString.ToString());
		} else {
			trackEventNative(eventName);
		}
	}

	
	void OnApplicationPause(bool pauseStatus) {
		if(!pauseStatus){
			applicationDidBecomeActive();
			TrackEvent("special_game_start");
			CheckForRemoteNotifications();
		}else{
			applicationDidEnterBackground();
		}
	}
	
	void CheckForRemoteNotifications(){
		if (NotificationServices.remoteNotificationCount > 0) {
			
			#if UNITY_5
			foreach(UnityEngine.iOS.RemoteNotification notification in 	UnityEngine.iOS.NotificationServices.remoteNotifications){
				#else
				foreach(UnityEngine.RemoteNotification notification in 	UnityEngine.NotificationServices.remoteNotifications){
					#endif
					
					foreach(var key in notification.userInfo.Keys){
						if(notification.userInfo[key].GetType() == typeof(Hashtable)){
							Hashtable userInfo = (Hashtable) notification.userInfo[key];
							JSONObject notificationPayload = new JSONObject();
							foreach(var pKey in userInfo.Keys){
								if(userInfo[pKey].GetType() == typeof(string)){
									string keyStr = pKey.ToString();
									string value = userInfo[pKey].ToString();
									notificationPayload.AddField(keyStr,value);
								}
								if(userInfo[pKey].GetType() == typeof(Hashtable)){
									JSONObject innerJson = new JSONObject();
									Hashtable innerTable = (Hashtable)userInfo[pKey];
									foreach(var iKey in innerTable.Keys){
										string iKeyStr = iKey.ToString();
										if(innerTable[iKey].GetType() == typeof(Hashtable)){
											Hashtable innerTableB = (Hashtable)innerTable[iKey];
											JSONObject innerJsonB = new JSONObject();
											foreach(var bKey in innerTableB.Keys){
												innerJsonB.AddField(bKey.ToString(),innerTableB[bKey].ToString());
											}
											innerJson.AddField(iKeyStr,innerJsonB);
										}
										if(innerTable[iKey].GetType() == typeof(string)){
											string iValue = innerTable[iKey].ToString();
											innerJson.AddField(iKeyStr,iValue);
										}
									}
									string keyStr = pKey.ToString();
									notificationPayload.AddField(keyStr,innerJson);
								}
							}
							handlePushNotification(notificationPayload.ToString());
						}
					}
				}
				NotificationServices.ClearRemoteNotifications ();
			} else {
				Debug.Log("NO REMOTE NOTIFICATIONS FOUND");
			}
		}
		
		#endif
		
		//recive responces from the SDK
		
		/* Use cases for processing advertising responses from Spil SDK
		 * adFailedToLoadBanner
		 * adClosedBanner
		 * adLoadedBanner
		 * adOpenedBanner
		 * adFailedToLoadInterstitial
		 * adNotAvailableInterstitial
		 * adClosedInterstitial
		 * adLoadedInterstitial
		 * adOpenedInterstitial
		 * adDismissInterstitial
		 * adClickedInterstitial
		 * adFailedToLoadRewardVideo
		 * adNotAvailableRewardVideo
		 * adDismissRewardVideo
		 * adClosedRewardVideo
		 * adClickedRewardVideo
		 * adCompleteRewardVideo
		 * adOpenedRewardVideo
		 */
		
		public void OnResponseReceived(string response){
			Debug.Log ("RESPONSE RECIVED: \n" + response);
			
			JSONObject responseData = new JSONObject (response);
			
			switch( responseData.GetField("type").str){
				
			case "reward":
				OnReward(responseData.GetField("data"));
				break;
			case "adFailedToLoadBanner":
				break;
			case "adClosedBanner":
				break;
			case "adLoadedBanner":
				break;
			case "adOpenedBanner":
				break;
			case "adFailedToLoadInterstitial":
				break;
			case "adNotAvailableInterstitial":
				break;
			case "adClosedInterstitial":
				break;
			case "adLoadedInterstitial":
				break;
			case "adOpenedInterstitial":
				break;
			case "adDismissInterstitial":
				break;
			case "adClickedInterstitial":
				break;
			case "adFailedToLoadRewardVideo":
				break;
			case "adNotAvailableRewardVideo":
				break;
			case "adDismissRewardVideo":
				break;
			case "adClosedRewardVideo":
				break;
			case "adClickedRewardVideo":
				break;
			case "adCompleteRewardVideo":
				break;
			case "adOpenedRewardVideo":
				break;
			}
			
		}
		
		public static void ShowSpilMoreApps(){
			TrackEvent ("more_apps");
		}
		
		void OnReward(JSONObject rewardData){
			JSONObject eventData = rewardData.GetField ("eventData");
			Debug.Log ("Event data: " + eventData.ToString());
			//TODO parse the json for the reward (coins for example) and reward the player
		}
		
		
	}
	
