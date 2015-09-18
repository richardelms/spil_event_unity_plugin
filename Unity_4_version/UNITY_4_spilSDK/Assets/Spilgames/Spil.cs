using UnityEngine;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Collections;
using System;
#if UNITY_IOS
using NotificationServices = UnityEngine.NotificationServices;
#endif

public class Spil : MonoBehaviour {
	
	void Awake () {	
		#if UNITY_ANDROID || UNITY_IOS 
		SpilInit ();
		#endif
		DontDestroyOnLoad (gameObject);

	}

	#if UNITY_EDITOR || (!UNITY_ANDROID && !UNITY_IPHONE)
	public static void TrackEvent(string eventName){
		Debug.Log ("SPIL TRACK EVENT: " + eventName);
	}
	public static void TrackEvent(string eventName, Dictionary<string,string> eventParams){
		Debug.Log ("SPIL TRACK EVENT: " + eventName + " " + eventParams.ToString());
	}
	void SpilInit(){
		
	}
	#elif UNITY_ANDROID 
	
//	public string androidPackageID = "com.spilgames.exampleapp";
	
	void SpilInit(){
		string project_ID = "127433475057";
		RegisterDevice (project_ID);
		TrackEvent ("special_game_start");
		Debug.Log ("SPIL SDK INIT FROM UNITY");
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
	//Method that stends game data to the Spil SDK
	public void updateGamedData(Dictionary<string, string> values){
		using(AndroidJavaObject obj_HashMap = new AndroidJavaObject("java.util.HashMap")){
			IntPtr method_Put = AndroidJNIHelper.GetMethodID(obj_HashMap.GetRawClass(), "put",
			                                                 "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
			
			object[] args = new object[2];
			if(values != null){
				foreach(KeyValuePair<string, string> kvp in values){
					using(AndroidJavaObject k = new AndroidJavaObject("java.lang.String", kvp.Key)){
						using(AndroidJavaObject v = new AndroidJavaObject("java.lang.String", kvp.Value)){
							args[0] = k;
							args[1] = v;
							AndroidJNI.CallObjectMethod(obj_HashMap.GetRawObject(),
							                            method_Put, AndroidJNIHelper.CreateJNIArgArray(args));
						}
					}
				}
			}
			using(AndroidJavaClass pClass = new AndroidJavaClass("com.unity3d.player.UnityPlayer")){
				if(pClass != null){
					AndroidJavaObject instance = pClass.GetStatic<AndroidJavaObject>("currentActivity");
					instance.Call("updateGameData", obj_HashMap);
				}
				
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
			TrackEvent("special_game_start");
		}
	}

	
#elif UNITY_IOS 
	
	//is the IOS notification service token sent
	bool tokenSent;
	
	[DllImport("__Internal")]
	public static extern void initEventTracker();
	
	[DllImport("__Internal")]
	public static extern void trackEventNative(string eventName);
	
	[DllImport("__Internal")]
	public static extern void trackEventWithParamsNative(string eventName, string jsonStringParams);
	
	[DllImport("__Internal")]
	public static extern void handlePushNotification(string notificationStringParams);
	
	void SpilInit(){
		initEventTracker();
		TrackEvent("startup");
		RegisterForIosPushNotifications();
		CheckForRemoteNotifications();
	}
	
	//register for ios push notifications
	void RegisterForIosPushNotifications(){
		Debug.Log ("UNITY: REGISTERING FOR PUSH NOTIFICATIONS");
		NotificationServices.RegisterForRemoteNotificationTypes (RemoteNotificationType.Alert|
		                                                         RemoteNotificationType.Badge|
		                                                         RemoteNotificationType.Sound);
	}
	
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
				TrackEvent ("registerPushNotifications", param);
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
	
	void OnApplicationQuit() {
		TrackEvent ("shutdown");
	}
	
	void OnApplicationPause(bool pauseStatus) {
		if(!pauseStatus){
			TrackEvent("special_game_start");
			CheckForRemoteNotifications();
		}
	}
	
	void CheckForRemoteNotifications(){
		if (NotificationServices.remoteNotificationCount > 0) {
			foreach(UnityEngine.RemoteNotification notification in 	UnityEngine.NotificationServices.remoteNotifications){
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
	public void OnResponseReceived(string response){
		Debug.Log ("RESPONSE RECIVED: \n" + response);

		JSONObject responseData = new JSONObject (response);
		
		switch( responseData.GetField("type").str){

		case "reward":
			OnReward(responseData.GetField("data"));
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

