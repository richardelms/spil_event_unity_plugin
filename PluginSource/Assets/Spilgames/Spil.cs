using UnityEngine;
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
	public string project_ID = "127433475057";

	//advertising events
	public delegate void OpenAdAction();
	public event OpenAdAction OnAdOpened;

	public delegate void CloseAdAction();
	public event CloseAdAction OnAdClosed;

	public delegate void RewardAction(RewardData rewardResponse);
	public event RewardAction OnReward;

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
	public static string GetConfigAll(){
		return "";
	}
	public static string GetConfigValue(string m){
		return "";
	}
	void SpilInit(){
		Debug.Log ("SpilInit");
	}
	//FOR DEBUG ONLY
	public static void ShowFyber(string m){		

	}		
	public static void ShowDFP(string m){		

	}
	#elif UNITY_ANDROID 
	void SpilInit(){
		RegisterDevice (project_ID);
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

	//Method that returns the all configurations
	public static string GetConfigAll(){
		string config = null;
		using (AndroidJavaClass pClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer")) {
			if(pClass != null){
				AndroidJavaObject instance = pClass.GetStatic<AndroidJavaObject>("currentActivity");
				config = instance.Call<string>("getConfigAll");
			}
		}
		return config;
	}

	//Method that returns a configuration value based on key
	public static string GetConfigValue(string key){
		string value = null;
		using (AndroidJavaClass pClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer")) {
			if(pClass != null){
				AndroidJavaObject instance = pClass.GetStatic<AndroidJavaObject>("currentActivity");
				value = instance.Call<string>("getConfigValue", key);
			}
		}
		return value;
	}

	//Method that initiaties DFP Ads (to be used only for testing purposes)
	public static void StartDFP(String adUnitId){
		using(AndroidJavaClass pClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer")){
			if(pClass != null){
				AndroidJavaObject instance = pClass.GetStatic<AndroidJavaObject>("currentActivity");
				instance.Call("startDFP", adUnitId);
			}
		}
	}
	
	//Method that initiaties Fyber Ads (to be used only for testing purposes)
	public static void StartFyber(String appId, String token){
		using(AndroidJavaClass pClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer")){
			if(pClass != null){
				AndroidJavaObject instance = pClass.GetStatic<AndroidJavaObject>("currentActivity");
				instance.Call("startFyber", new object[]{appId, token});
			}
		}
	}
	
	//Method that shows DFP Ads (to be used only for testing purposes)
	public static void ShowDFP(String type){
		using(AndroidJavaClass pClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer")){
			if(pClass != null){
				AndroidJavaObject instance = pClass.GetStatic<AndroidJavaObject>("currentActivity");
				instance.Call("showDFP", type);
			}
		}
	}
	
	//Method that shows Fyber Ads (to be used only for testing purposes)
	public static void ShowFyber(String type){
		using(AndroidJavaClass pClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer")){
			if(pClass != null){
				AndroidJavaObject instance = pClass.GetStatic<AndroidJavaObject>("currentActivity");
				instance.Call("showFyber", type);
			}
		}
	}

    /// <summary>
    /// Retrieves the SPIL User Id so that developers can show this in-game for users.
    /// When users contact SPIL customer service they can supply this Id so that 
    /// customer support can help them properly. Please make this ID available for users
    /// in one of your game's screens.
    /// </summary>
	public static void getSpilUID(){
		using(AndroidJavaClass pClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer")){
			if(pClass != null){
				AndroidJavaObject instance = pClass.GetStatic<AndroidJavaObject>("currentActivity");
				instance.Call("getSpilUID()", type);
			}
		}
	}

	#elif UNITY_IOS 
	
	//is the IOS notification service token sent
	bool tokenSent;
	
	[DllImport("__Internal")]
	public static extern void initEventTrackerWithOptions(string options);

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

	[DllImport("__Internal")]
	public static extern string getConfigNative();

	[DllImport("__Internal")]
	public static extern string getConfigValueNative(string keyName);
	
	void SpilInit(){
		JSONObject options = new JSONObject();
		options.AddField ("isUnity",true);
		initEventTrackerWithOptions(options.ToString());
		applicationDidBecomeActive();
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

	public static string GetConfigAll(){
		return getConfigNative();
	}
	
	public static string GetConfigValue(string key){
		return getConfigValueNative(key);
	}
	
	void OnApplicationPause(bool pauseStatus) {
		if(!pauseStatus){
			applicationDidBecomeActive();
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
		
    #region Standard SPIL events 

        // TODO: Add summaries for all these methods so developers don't need additional documentation.

        /// <summary>
        /// 
        /// </summary>
        public static void SendLevelStartEvent()
        {
            TrackEvent("advertisementInit");
        }

        /// <summary>
        /// 
        /// </summary>
        public static void SendHeartBeatEvent()
        {
            TrackEvent("heartBeat");
        }

        /// <summary>
        /// 
        /// </summary>
        public static void SendRequestConfigEvent()
        {
            TrackEvent("requestConfig");
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="levelName"></param>
        public static void SendLevelStartEvent(string levelName)
        {
            TrackEvent("levelStart", new Dictionary<string, string>() { { "level", levelName } });
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="levelName"></param>
        public static void SendLevelCompleteEvent(string levelName)
        {
            TrackEvent("levelComplete", new Dictionary<string, string>() { { "level", levelName } });
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="levelName"></param>
        public static void SendPlayerDiesEvent(string levelName)
        {
            TrackEvent("levelComplete", new Dictionary<string, string>() { { "level", levelName } });
        }

        /// <summary>
        /// 
        /// </summary>
        public static void SendSessionStartEvent()
        {
            TrackEvent("sessionStart");
        }

        /// <summary>
        /// 
        /// </summary>
        public static void SendSessionStopEvent()
        {
            TrackEvent("sessionStop");
        }

        /// <summary>
        /// 
        /// </summary>
        public static void SendRequestRewardVideoEvent()
        {
            TrackEvent("requestRewardVideo");
        }

        // Deprecated this old method in favor of SendRequestRewardVideoEvent() for uniformity
        [Obsolete("ShowRewardedVideo() is deprecated, please use SendRequestRewardVideoEvent() instead.")]
        public static void ShowRewardedVideo()
        {
            TrackEvent("requestRewardVideo");
        }

    #endregion

    /// <summary>
    /// Method that returns the SLOT Config as a (user-defined) object. See the example in JSONHelper.cs for
    /// more information on how to turn JSON strings (such as the SLOT game config) into classes.
    /// </summary>
    /// <typeparam name="T">The user-defined class that mirrors the shape of the data in the JSON</typeparam>
    /// <returns></returns>
    public static T GetConfigAsObject<T>() where T : class, new()
    {
        // TODO: Handle exceptions gracefully
        string config = GetConfigAll();
        return JsonHelper.getObjectFromJson<T>(config);
    }
	
	public void OnResponseReceived(string response){
		Debug.Log ("RESPONSE RECEIVED: \n" + response);

        SpilResponse spilResponse = JsonHelper.getObjectFromJson<SpilResponse>(response);

        Debug.Log("RESPONSE DESERIALIZED");

        switch (spilResponse.type)
        {
            case "reward":
                RewardResponse rewardResponseData = JsonHelper.getObjectFromJson<RewardResponse>(response);
                OnReward(rewardResponseData.data.eventData);
                break;
            case "didCloseInterstitial":
                OnAdClosed();
                break;
            case "didLoadInterstitial":
                break;
            case "didOpenInterstitial":
                OnAdOpened();
                break;
            case "didNotAvailableInterstitial":
                break;
            case "didFailToLoadInterstitial":
                break;
            case "didDisplayRewardedVideo":
                OnAdOpened();
                break;
            case "didNotAvailableRewardVideo":
                break;
            case "didFailToLoadRewardVideo":
                break;
            case "didDismissRewardedVideo":
                OnAdClosed();
                break;
            case "didCloseRewardedVideo":
                OnAdClosed();
                break;
            case "advertisement":
                if (spilResponse.action == "adDidShow")
                {
                    Debug.Log("ON AD OPENED");
                    OnAdOpened();
                }
                else if (spilResponse.action == "adDidClose")
                {
                    Debug.Log("ON AD CLOSED");
                    OnAdClosed();
                }
                break;

        }
    }

	void AdShown(){
		if (OnAdOpened != null) {
			OnAdOpened ();
		}
	}

	void AdClosed(){
		if (OnAdClosed != null) {
			OnAdClosed ();
		}
	}
	
	public static void ShowSpilMoreApps(){
		TrackEvent ("more_apps");
	}
}
	
