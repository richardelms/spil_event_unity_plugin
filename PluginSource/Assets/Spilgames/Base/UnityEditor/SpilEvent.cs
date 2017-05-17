﻿#if UNITY_EDITOR
using System.Collections.Generic;
using UnityEngine;
using UnityEditor;
using System.IO;
using Newtonsoft.Json;
using SpilGames.Unity;
using SpilGames.Unity.Base.Implementations;
using SpilGames.Unity.Helpers;
using System.Collections;
using System;
using SpilGames.Unity.Json;
using SpilGames.Unity.Base.UnityEditor.Responses;

namespace SpilGames.Unity.Base.UnityEditor
{
	public class SpilEvent : MonoBehaviour
	{
		public string eventName;
		public JSONObject data = new JSONObject ();
		public JSONObject customData = new JSONObject ();
		private string uid = Spil.SpilUserIdEditor;

		private string bundleIdentifier;

		private string platform;

		public void Send ()
		{
			this.StartCoroutine (SendCoroutine ());
		}

		public IEnumerator SendCoroutine ()
		{

			platform = EditorUserBuildSettings.activeBuildTarget.ToString ().Trim ().ToLower ();

			#if UNITY_5_6_OR_NEWER
			bundleIdentifier = PlayerSettings.applicationIdentifier;
			#elif UNITY_5_3_OR_NEWER
			bundleIdentifier = PlayerSettings.bundleIdentifier;
			#endif

			AddDefaultParameters ();

			WWWForm requestForm = new WWWForm ();
			requestForm.AddField ("name", this.eventName);
			requestForm.AddField ("data", this.data.ToString ());
			if (!this.customData.IsNull) {
				requestForm.AddField ("customData", this.customData.Print (false));
			} else {
				requestForm.AddField ("customData", "{}");
			}


			var epoch = new DateTime (1970, 1, 1, 0, 0, 0, DateTimeKind.Utc);
			var time = (long)(DateTime.Now.ToUniversalTime () - epoch).TotalMilliseconds;

			requestForm.AddField ("ts", time.ToString ());
			requestForm.AddField ("queued", 0);
			requestForm.AddField ("debugMode", "true");

			WWW request = new WWW ("https://apptracker.spilgames.com/v1/native-events/event/" + platform + "/" + Spil.BundleIdEditor + "/" + this.eventName, requestForm);
			yield return request;

			SpilLogging.Log ("Sending event: " + "Name: " + this.eventName + " \nData: " + this.data.ToString () + " \nCustom Data: " + this.customData.Print (false) + " \nTimestamp: " + time.ToString ());
																		
			if (request.error != null) {
				if (Spil.BundleIdEditor == null || Spil.BundleIdEditor.Equals ("")) {
					SpilLogging.Error ("Spil Initialize might not have been called! Please make sure you call Spil.Initialize() at app start!");
				} else {
					SpilLogging.Error ("Error getting data: " + request.error); 
					SpilLogging.Error ("Error getting data: " + request.text);
				}

			} else { 
				JSONObject serverResponse = new JSONObject (request.text);
				SpilLogging.Log ("Data returned: \n" + serverResponse.ToString ());
				ResponseEvent.Build (serverResponse);
			}
			GameObject.Destroy (this);
		}

		private void AddDefaultParameters ()
		{
			this.data.AddField ("uid", this.uid);
			this.data.AddField ("locale", "en");
			this.data.AddField ("appVersion", PlayerSettings.bundleVersion);
			this.data.AddField ("apiVersion", SpilUnityImplementationBase.PluginVersion);
			this.data.AddField ("osVersion", "1.0");
			this.data.AddField ("os", platform);
			this.data.AddField ("deviceModel", "Editor");
			this.data.AddField ("timezoneOffset", "0");
			this.data.AddField ("tto", "200");
			if (platform.Equals ("android")) {
				this.data.AddField ("packageName", bundleIdentifier);
			} else {
				this.data.AddField ("bundleId", bundleIdentifier);
			}
			this.data.AddField ("sessionId", "deadbeef");
			this.data.AddField ("pluginName", Response.pluginName);
			this.data.AddField ("pluginVersion", Response.pluginVersion);

			if (Response.provider != null && Response.externalId != null) {
				JSONObject externalUserIdJson = new JSONObject ();
				externalUserIdJson.AddField ("provider", Response.provider);
				externalUserIdJson.AddField ("userId", Response.externalId);

				this.data.AddField ("externalUserId", externalUserIdJson);
			}
		}
	}

	public class SpilLogging
	{
		public static void Log (string message)
		{
			Spil spil = GameObject.FindObjectOfType<Spil> ();
			if (spil != null && spil.EditorLogging) {
				Debug.Log (message);
			}
		}

		public static void Error (string message)
		{
			Spil spil = GameObject.FindObjectOfType<Spil> ();
			if (spil != null && spil.EditorLogging) {
				Debug.LogError (message);
			}
		}
	}
}
#endif