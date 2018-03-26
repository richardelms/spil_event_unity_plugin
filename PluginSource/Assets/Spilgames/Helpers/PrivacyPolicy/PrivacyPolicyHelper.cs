﻿using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using SpilGames.Unity;
using SpilGames.Unity.Base.Implementations;
using SpilGames.Unity.Json;
using UnityEngine;
using UnityEngine.Experimental.UIElements;
using UnityEngine.Rendering;
using UnityEngine.UI;
using Button = UnityEngine.UI.Button;
using Toggle = UnityEngine.UI.Toggle;

public class PrivacyPolicyHelper : MonoBehaviour {
    public static PrivacyPolicyHelper Instance;

    public static GameObject PrivacyPolicyObject;

    public GameObject MainScreen;
    public Text MainDescription;
    public Button MainAcceptButton;
    public Toggle MainAcceptToggle;
    public Button MainSettingsButton;

    public GameObject SettingsScreen;
    public Text SettingsTitle;
    public Toggle SettingsContentToggle;
    public Toggle SettingsAdsToggle;
    public Text SettingsRememberText;
    public Text SettingsUnderstandText;
    public Text SettingsSocialMediaText;
    public Text SettingsDescription;
    public Button SettingsSaveButton;
    public Button SettingsLearnMoreButton;
    public Button SettingsPrivacyPolicyButton;

    public GameObject InfoScreen;
    public Text InfoDescription;
    public Button InfoOkButton;

    public GameObject AdsScreen;
    public Text AdsTitle;
    public Toggle AdsPeronalised;
    public Text AdsDescription;
    public Button AdsSaveButton;

    string mainDescription = "";
    string mainAccept = "";
    string mainSettings = "";
        
    string settingsTitle = "";
    string settingsPersonalisedContent = "";
    string settingsPersonalisedAds = "";
    string settingsRememberSettings = "";
    string settingsUnderstandHow = "";
    string settingsSocialMedia = "";
    string settingsDescription = "";
    string settingsLearnMore = "";
    string settingsLearnMoreUrl = "";
    string settingsPrivacyPolicy = "";
    string settingsPrivacyPolicyUrl = "";
    string settingsSave = "";

    string infoDescription = "";
    string infoOk = "";

    string adsTitle = "";
    string adsPersonalisedAds = "";
    string adsDescription = "";
    string adsSave = "";  
    
    private bool firstCheck;
    private int openId;

    private bool withPersonalisedContent;
    private bool withPersonalisedAds;
    
    void Awake() {
        if (Instance == null) {
            Instance = FindObjectOfType<PrivacyPolicyHelper>();
            if (Instance == null) {
                throw new NullReferenceException("Could not find a gameobject in the scene named \"PrivacyPolicy\".");
            }
        }
        
        SetupScreens();
    }

    public void SetupScreens() {
        int priv = Spil.Instance.GetPrivValue();
        switch (priv) {
            case -1:
                withPersonalisedAds = true;
                withPersonalisedContent = true;
                break;
            case 0:
                withPersonalisedAds = false;
                withPersonalisedContent = false;
                break;
            case 1:
                withPersonalisedAds = false;
                withPersonalisedContent = true;
                break;
            case 2:
                withPersonalisedAds = true;
                withPersonalisedContent = false;
                break;
            case 3:
                withPersonalisedAds = true;
                withPersonalisedContent = true;
                break;
        }
    }

    public void ShowMainScreen(int openId) {
        this.openId = openId;
        
        PrivacyPolicyConfiguration privacyPolicyConfiguration = GetPrivacyPolicyConfiguration();
        if (privacyPolicyConfiguration == null) {
            Debug.Log("Privacy Policy Configuration could not be retrieved. Please make sure you have configured properly the text for the privacy policy in the defaultGameConfig.json file.");
            return;
        }    

        string deviceLocale = GetLocaleFromSystemLanguage();
        
        bool privacyPolicyTextSet = false;

        foreach (PrivacyPolicy privacyPolicy in privacyPolicyConfiguration.privacyPolicies) {
            if (privacyPolicy.locale.Equals(deviceLocale)) {
                mainDescription = privacyPolicy.main.description;
                mainAccept = privacyPolicy.main.accept;
                mainSettings = privacyPolicy.main.settings;
                
                privacyPolicyTextSet = true;
                break;
            }
        }

        if (!privacyPolicyTextSet) {
            PrivacyPolicy englishPrivacyPolicy = getDefaultEnglishPrivacyPolicy(privacyPolicyConfiguration);

            if (englishPrivacyPolicy != null) {
                mainDescription = englishPrivacyPolicy.main.description;
                mainAccept = englishPrivacyPolicy.main.accept;
                mainSettings = englishPrivacyPolicy.main.settings;
            } else {
                mainDescription = "";
                mainAccept = "";
                mainSettings = "";
            }
        }

        MainDescription.text = mainDescription;
        MainAcceptButton.GetComponentInChildren<Text>().text = mainAccept;
        MainSettingsButton.GetComponentInChildren<Text>().text = mainSettings;

        MainAcceptToggle.isOn = false;
        
        MainScreen.SetActive(true);
        SettingsScreen.SetActive(false);
        InfoScreen.SetActive(false);
        AdsScreen.SetActive(false);
    }
    
    public void ShowSettingsScreen(int openId) {
        this.openId = openId;
        
        ShowSettingsScreen();
    }

    public void ShowSettingsScreen() {
        PrivacyPolicyConfiguration privacyPolicyConfiguration = GetPrivacyPolicyConfiguration();
        if (privacyPolicyConfiguration == null) {
            Debug.Log("Privacy Policy Configuration could not be retrieved. Please make sure you have configured properly the text for the privacy policy in the defaultGameConfig.json file.");
            return;
        }    

        string deviceLocale = GetLocaleFromSystemLanguage();
        
        bool privacyPolicyTextSet = false;

        foreach (PrivacyPolicy privacyPolicy in privacyPolicyConfiguration.privacyPolicies) {
            if (privacyPolicy.locale.Equals(deviceLocale)) {
                settingsTitle = privacyPolicy.settings.title;
                settingsPersonalisedContent = privacyPolicy.settings.personalisedContent;
                settingsPersonalisedAds = privacyPolicy.settings.personalisedAds;
                settingsRememberSettings = privacyPolicy.settings.rememberSettings;
                settingsUnderstandHow = privacyPolicy.settings.understandHow;
                settingsSocialMedia = privacyPolicy.settings.socialMedia;
                settingsDescription = privacyPolicy.settings.description;
                settingsLearnMore = privacyPolicy.settings.learnMore;
                settingsLearnMoreUrl = privacyPolicy.settings.learnMoreUrl;
                settingsPrivacyPolicy = privacyPolicy.settings.privacyPolicy;
                settingsPrivacyPolicyUrl = privacyPolicy.settings.privacyPolicyUrl;
                settingsSave = privacyPolicy.settings.save;
                
                privacyPolicyTextSet = true;
                break;
            }
        }

        if (!privacyPolicyTextSet) {
            PrivacyPolicy englishPrivacyPolicy = getDefaultEnglishPrivacyPolicy(privacyPolicyConfiguration);

            if (englishPrivacyPolicy != null) {
                settingsTitle = englishPrivacyPolicy.settings.title;
                settingsPersonalisedContent = englishPrivacyPolicy.settings.personalisedContent;
                settingsPersonalisedAds = englishPrivacyPolicy.settings.personalisedAds;
                settingsRememberSettings = englishPrivacyPolicy.settings.rememberSettings;
                settingsUnderstandHow = englishPrivacyPolicy.settings.understandHow;
                settingsSocialMedia = englishPrivacyPolicy.settings.socialMedia;
                settingsDescription = englishPrivacyPolicy.settings.description;
                settingsLearnMore = englishPrivacyPolicy.settings.learnMore;
                settingsLearnMoreUrl = englishPrivacyPolicy.settings.learnMoreUrl;
                settingsPrivacyPolicy = englishPrivacyPolicy.settings.privacyPolicy;
                settingsPrivacyPolicyUrl = englishPrivacyPolicy.settings.privacyPolicyUrl;
                settingsSave = englishPrivacyPolicy.settings.save;
            } else {
                settingsTitle = "";
                settingsPersonalisedContent = "";
                settingsPersonalisedAds = "";
                settingsRememberSettings = "";
                settingsUnderstandHow = "";
                settingsSocialMedia = "";
                settingsDescription = "";
                settingsLearnMore = "";
                settingsLearnMoreUrl = "";
                settingsPrivacyPolicy = "";
                settingsPrivacyPolicyUrl = "";
                settingsSave = "";
            }
        }
        
        SettingsTitle.text = settingsTitle;
        SettingsContentToggle.GetComponentInChildren<Text>().text = settingsPersonalisedContent;
        SettingsAdsToggle.GetComponentInChildren<Text>().text = settingsPersonalisedAds;      
        SettingsRememberText.text = settingsRememberSettings;
        SettingsUnderstandText.text = settingsUnderstandHow;
        SettingsSocialMediaText.text = settingsSocialMedia;
        SettingsDescription.text = settingsDescription;
        SettingsLearnMoreButton.GetComponentInChildren<Text>().text = settingsLearnMore;
        SettingsPrivacyPolicyButton.GetComponentInChildren<Text>().text = settingsPrivacyPolicy;
        SettingsSaveButton.GetComponentInChildren<Text>().text = settingsSave;

        SettingsContentToggle.isOn = withPersonalisedContent;
        SettingsAdsToggle.isOn = withPersonalisedAds;
        
        MainScreen.SetActive(false);
        SettingsScreen.SetActive(true);
        InfoScreen.SetActive(false);
        AdsScreen.SetActive(false);
    }

    public void PrivacyPolicyAccepted() {
        if (firstCheck) {        
            SavePrivValue();
            
            #if UNITY_EDITOR
            PlayerPrefs.SetInt(Spil.Instance.GetSpilUserId() + "-unityPrivacyPolicyStatus", 1);
            #else
            PlayerPrefs.SetInt("unityPrivacyPolicyStatus", 1);
            #endif
            
            Destroy(PrivacyPolicyObject);
            Instance = null;
            
            SpilUnityImplementationBase.firePrivacyPolicyStatus(true);
            
            Spil.Instance.TrackPrivacyPolicyChanged(withPersonalisedAds, withPersonalisedContent, "StartScreen", true);
        } else {
            firstCheck = true;
        }
    }

    public void OpenLearnMoreLink() {
        Application.OpenURL(settingsLearnMoreUrl);
    }

    public void OpenPrivacyPolicyLink() {
        Application.OpenURL(settingsPrivacyPolicyUrl);
    }

    public void SaveSettings() {
        int oldPriv;
        int newPriv;
        switch (openId) {
            case 0:
                //Needed this way due to Toggle not having an OnClick and if toggle off it will fire an on value changed event which would close the whole popup
                firstCheck = false;
                MainAcceptToggle.isOn = false;
                firstCheck = false;
                
                MainScreen.SetActive(true);
                SettingsScreen.SetActive(false);
                InfoScreen.SetActive(false);
                AdsScreen.SetActive(false);
               
                break;
            case 1:
                oldPriv = Spil.Instance.GetPrivValue();
                newPriv = SavePrivValue();

                if (oldPriv != newPriv) {
                    ShowInfoScreen();
                } else {
                    Destroy(PrivacyPolicyObject);
                    Instance = null;
                }         
                
                Spil.Instance.TrackPrivacyPolicyChanged(withPersonalisedAds, withPersonalisedContent, "GeneralSettingsScreen", false);
                
                break;
            case 2:
                oldPriv = Spil.Instance.GetPrivValue();
                newPriv = SavePrivValue();

                if (oldPriv != newPriv) {
                    ShowInfoScreen();
                } else {
                    Destroy(PrivacyPolicyObject);
                    Instance = null;
                }

                Spil.Instance.TrackPrivacyPolicyChanged(withPersonalisedAds, withPersonalisedContent, "AdsSettingsScreen", false);
                
                break;
        }
    }

    public void ShowInfoScreen() {
        PrivacyPolicyConfiguration privacyPolicyConfiguration = GetPrivacyPolicyConfiguration();
        if (privacyPolicyConfiguration == null) {
            Debug.Log("Privacy Policy Configuration could not be retrieved. Please make sure you have configured properly the text for the privacy policy in the defaultGameConfig.json file.");
            return;
        }    

        string deviceLocale = GetLocaleFromSystemLanguage();
        
        bool privacyPolicyTextSet = false;

        foreach (PrivacyPolicy privacyPolicy in privacyPolicyConfiguration.privacyPolicies) {
            if (privacyPolicy.locale.Equals(deviceLocale)) {
                infoDescription = privacyPolicy.info.description;
                infoOk = privacyPolicy.info.ok;
                
                privacyPolicyTextSet = true;
                break;
            }
        }

        if (!privacyPolicyTextSet) {
            PrivacyPolicy englishPrivacyPolicy = getDefaultEnglishPrivacyPolicy(privacyPolicyConfiguration);

            if (englishPrivacyPolicy != null) {
                infoDescription = englishPrivacyPolicy.info.description;
                infoOk = englishPrivacyPolicy.info.ok;
            } else {
                infoDescription = "";
                infoOk = "";
            }
        }

        InfoDescription.text = infoDescription;
        InfoOkButton.GetComponentInChildren<Text>().text = infoOk;

        MainScreen.SetActive(false);
        SettingsScreen.SetActive(false);
        InfoScreen.SetActive(true);
        AdsScreen.SetActive(false);
    }

    public void InfoAccepted() {
        if (openId == 2) {
            SpilUnityImplementationBase.fireAdNotAvailableEvent("rewardVideo");
        }
        
        Destroy(PrivacyPolicyObject);
    }

    public void ShowAdsScreen(int openId) {
        this.openId = openId;
        
        PrivacyPolicyConfiguration privacyPolicyConfiguration = GetPrivacyPolicyConfiguration();
        if (privacyPolicyConfiguration == null) {
            Debug.Log("Privacy Policy Configuration could not be retrieved. Please make sure you have configured properly the text for the privacy policy in the defaultGameConfig.json file.");
            return;
        }    

        string deviceLocale = GetLocaleFromSystemLanguage();
        
        bool privacyPolicyTextSet = false;

        foreach (PrivacyPolicy privacyPolicy in privacyPolicyConfiguration.privacyPolicies) {
            if (privacyPolicy.locale.Equals(deviceLocale)) {
                adsTitle = privacyPolicy.ads.title;
                adsPersonalisedAds = privacyPolicy.ads.personalisedAds;
                adsDescription = privacyPolicy.ads.description;
                adsSave = privacyPolicy.ads.save;
                
                privacyPolicyTextSet = true;
                break;
            }
        }

        if (!privacyPolicyTextSet) {
            PrivacyPolicy englishPrivacyPolicy = getDefaultEnglishPrivacyPolicy(privacyPolicyConfiguration);

            if (englishPrivacyPolicy != null) {
                adsTitle = englishPrivacyPolicy.ads.title;
                adsPersonalisedAds = englishPrivacyPolicy.ads.personalisedAds;
                adsDescription = englishPrivacyPolicy.ads.description;
                adsSave = englishPrivacyPolicy.ads.save;
            } else {
                adsTitle = "";
                adsPersonalisedAds = "";
                adsDescription = "";
                adsSave = "";
            }
        }
        AdsTitle.text = adsTitle;
        AdsPeronalised.isOn = withPersonalisedAds;
        AdsPeronalised.GetComponentInChildren<Text>().text = adsPersonalisedAds;
        AdsDescription.text = adsDescription;
        AdsSaveButton.GetComponentInChildren<Text>().text = adsSave;
        
        MainScreen.SetActive(false);
        SettingsScreen.SetActive(false);
        InfoScreen.SetActive(false);
        AdsScreen.SetActive(true);
    }

    private int SavePrivValue() {
        int priv = 0;
        if(!withPersonalisedContent && !withPersonalisedAds) {
            priv = 0;
        } else if(withPersonalisedContent && !withPersonalisedAds) {
            priv = 1;
        } else if(!withPersonalisedContent && withPersonalisedAds) {
            priv = 2;
        } else if(withPersonalisedContent && withPersonalisedAds) {
            priv = 3;
        }
            
        Spil.Instance.SavePrivValue(priv);

        return priv;
    }

    public void OnSettingsPersonalisedContentToggle() {
        withPersonalisedContent = SettingsContentToggle.isOn;
    }

    public void OnSettingsPersonalisedAdsToggle() {
        withPersonalisedAds = SettingsAdsToggle.isOn;
    }

    public void OnAdsPersonalisedAdsToggle() {
        withPersonalisedAds = AdsPeronalised.isOn;
    }
    
    public PrivacyPolicyConfiguration GetPrivacyPolicyConfiguration() {
        string gameConfig = null;
        
        #if UNITY_EDITOR
        try {
            gameConfig = File.ReadAllText(Application.streamingAssetsPath + "/defaultGameConfig.json");
        }
        catch (FileNotFoundException e) {
            Debug.Log("defaultGameConfig.json not found!");
            return null;
        }
        #else
        gameConfig = Spil.Instance.GetConfigAll();
        #endif


        JSONObject gameConfigJSON = new JSONObject(gameConfig);
        PrivacyPolicyConfiguration privacyPolicyConfiguration = null;

        if (Application.platform == RuntimePlatform.Android) {
            privacyPolicyConfiguration = JsonHelper.getObjectFromJson<PrivacyPolicyConfiguration>(gameConfigJSON.GetField("androidSdkConfig").GetField("spil").Print());
        } else if (Application.platform == RuntimePlatform.IPhonePlayer) {
            privacyPolicyConfiguration = JsonHelper.getObjectFromJson<PrivacyPolicyConfiguration>(gameConfigJSON.GetField("iosSdkConfig").GetField("spil").Print());
        } else {
            privacyPolicyConfiguration = JsonHelper.getObjectFromJson<PrivacyPolicyConfiguration>(gameConfigJSON.GetField("androidSdkConfig").GetField("spil").Print());
        }

        return privacyPolicyConfiguration;
    }

    public PrivacyPolicy getDefaultEnglishPrivacyPolicy(PrivacyPolicyConfiguration privacyPolicyConfiguration) {
        foreach (PrivacyPolicy privacyPolicy in privacyPolicyConfiguration.privacyPolicies) {
            if (privacyPolicy.locale.Equals("en")) {
                return privacyPolicy;
            }
        }

        return null;
    }
    
    public static string GetLocaleFromSystemLanguage() {
        SystemLanguage lang = Application.systemLanguage;
        string res = "EN";
        switch (lang) {
            case SystemLanguage.Chinese:
                res = "ZH";
                break;
            case SystemLanguage.Dutch:
                res = "NL";
                break;
            case SystemLanguage.English:
                res = "EN";
                break;
            case SystemLanguage.French:
                res = "FR";
                break;
            case SystemLanguage.German:
                res = "DE";
                break;
            case SystemLanguage.Indonesian:
                res = "IN";
                break;
            case SystemLanguage.Italian:
                res = "IT";
                break;
            case SystemLanguage.Japanese:
                res = "JA";
                break;
            case SystemLanguage.Korean:
                res = "KO";
                break;
            case SystemLanguage.Lithuanian:
                res = "LT";
                break;
            case SystemLanguage.Polish:
                res = "PL";
                break;
            case SystemLanguage.Portuguese:
                res = "PT";
                break;
            case SystemLanguage.Russian:
                res = "RU";
                break;
            case SystemLanguage.Spanish:
                res = "ES";
                break;
            case SystemLanguage.Swedish:
                res = "SV";
                break;
            case SystemLanguage.Turkish:
                res = "TR";
                break;
            case SystemLanguage.Unknown:
                res = "EN";
                break;
        }

        return res.ToLower();
    }

    public class PrivacyPolicyConfiguration {
        public List<PrivacyPolicy> privacyPolicies;
    }

    public class PrivacyPolicy {
        public string locale;
        public PrivacyPolicyMain main;
        public PrivacyPolicySettings settings;
        public PrivacyPolicyInfo info;
        public PrivacyPolicyAds ads;
    }

    public class PrivacyPolicyMain {
        public string description;
        public string accept;
        public string settings;
    }

    public class PrivacyPolicySettings {
        public string title;
        public string personalisedContent;
        public string personalisedAds;
        public string rememberSettings;
        public string understandHow;
        public string socialMedia;
        public string description;
        public string learnMore;
        public string learnMoreUrl;
        public string privacyPolicy;
        public string privacyPolicyUrl;
        public string save;
    }

    public class PrivacyPolicyInfo {
        public string description;
        public string ok;
    }

    public class PrivacyPolicyAds {
        public string title;
        public string personalisedAds;
        public string description;
        public String save;
    }
}