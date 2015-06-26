using UnityEngine;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Collections;
using System;

public class Spil : MonoBehaviour {

	//if IOS import native methods
#if UNITY_IOS
	[DllImport("__Internal")]
	public static extern void initEventTracker();
	
	[DllImport("__Internal")]
	public static extern void trackEventNative(string eventName);
	
	[DllImport("__Internal")]
	public static extern void trackEventWithParamsNative(string eventName, string jsonStringParams);
#endif

	//if Android setup info
#if UNITY_ANDROID
	public string project_ID = "513888394705";
	public string androidPackageID = "com.spilgames.exampleapp";
#endif

	void Awake () {	
		SpilInit ();
		DontDestroyOnLoad (gameObject);
	}

	//initialise the spilgames sdk
	void SpilInit(){
	#if UNITY_IOS
		initEventTracker();
	#endif
	#if UNITY_ANDROID
		RegisterDevice(project_ID);
	#endif
	}

	//track an event with no params
	public static void trackEvent(string eventName){
		trackEvent (eventName, null);
	}

	//track an event with params
	public static void trackEvent(string eventName, Dictionary<string,string> dict){
	#if UNITY_IOS
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
	#endif
	#if UNITY_ANDROID
		using(AndroidJavaObject obj_HashMap = new AndroidJavaObject("java.util.HashMap")){
			IntPtr method_Put = AndroidJNIHelper.GetMethodID(obj_HashMap.GetRawClass(), "put",
			                                                 "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;");
			object[] args = new object[2];
			if(dict != null){
				foreach(KeyValuePair<string, string> kvp in dict){
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
					instance.Call("trackEvent", new object[]{eventName, obj_HashMap});
				}
			}
		}
	#endif
		Debug.Log ("Spil iOS trackEvent: " + eventName);
	}


//Android specific methods
#if UNITY_ANDROID
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
					instance.Call("updateGameData", new object[]{obj_HashMap});
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
#endif


	//recive responces from the SDK
	public void OnResponseReceived(string response){
		Debug.Log ("RESPONSE RECIVED: \n" + response);
	}
	
}

