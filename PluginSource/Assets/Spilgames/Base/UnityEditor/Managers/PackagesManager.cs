﻿#if UNITY_EDITOR
using UnityEngine;
using System.Collections;
using SpilGames.Unity.Helpers;
using System.Collections.Generic;
using SpilGames.Unity.Base.SDK;
using SpilGames.Unity.Json;

namespace SpilGames.Unity.Base.UnityEditor.Managers {
    public class PackagesManager {
        public static List<PackageData> GamePackagesData;
        public static List<PromotionData> GamePromotionData;

        public static string getPackage(string packageId) {
            for (int i = 0; i < GamePackagesData.Count; i++) {
                if (GamePackagesData[i].packageId.Equals(packageId)) {
                    return JsonHelper.getJSONFromObject(GamePackagesData[i]);
                }
            }

            return null;
        }

        public static string getPromotions(string packageId) {
            List<PromotionData> promotions = new List<PromotionData>();

            for (int i = 0; i < GamePromotionData.Count; i++) {
                if (GamePromotionData[i].packageId.Equals(packageId)) {
                    promotions.Add(GamePromotionData[i]);
                }
            }

            if (promotions.Count > 0) {
                return JsonHelper.getJSONFromObject(promotions);
            }
            return null;
        }
    }
    
    public class PackagesResponse : Response {
        public static void ProcessPackagesResponse(ResponseEvent response) {
            if (response.data == null) return;
            if (response.data.HasField("packages")) {
                JSONObject json = new JSONObject();
                json.AddField("data", response.data.GetField("packages").Print(false));
                PackagesManager.GamePackagesData = JsonHelper.getObjectFromJson<List<PackageData>>(json.GetField("data").str);
            }

            if (response.data.HasField("promotions")) {
                JSONObject json = new JSONObject();
                json.AddField("data", response.data.GetField("promotions").Print(false));
                PackagesManager.GamePromotionData = JsonHelper.getObjectFromJson<List<PromotionData>>(json.GetField("data").str);
            }
        }
    }
}
#endif