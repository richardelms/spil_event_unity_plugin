<h1>Spilgames Event System: Unity Plugin</h1>

<h3>1: Import the Unity package into your project</h3>

Important notes for Android: 
<ul>
  <li>Only import the google play services folder (Plugins/Android/google_play_services_lib) if you do not have it in your project already. Some other plugins, such as chartboost, will have imported it too. </li>
  <li>Make sure that the "android-support-v4.jar" file is present in your "Plugins/Android/" folder.</li>
  <li>If you are including the SpilSDK with Ads make sure that "mm-ad-sdk.aar" is present in your "Plugins/Android/".</li>
</ul>

<h3>2: Init the SDK</h3>

Create an empty game object in the first scene of your game (Splash or loading/initialisation screen) and attach the script named Spil.cs to it. The script can be found in the imported Spilgames folder. On Android, also enter your project ID to the gameobject. Ask your Spil contact to provide you with your project ID.

<h3>3: Track events</h3>

To track an event, simply call Spil.TrackEvent(String eventName); from anywhere in your code.

To pass more information with the event, simply create a <String, String> Dictionary and pass that as the second parameter like so:

Dictionary<String, String> eventParams = new Dictionary<String,String>();

eventParams.Add(“Level”,levelName);
eventParams.Add(“Coins”,playerCoins);

Spil.TrackEvent(“PlayerDeath”, eventParams);

A list of events to track will be provided by Spil.

<h3>4: Game Config Service</h3>

Note: this feature is Android only for the time being.

The spil sdk provides 2 methods that will allow you to pull a game config file (JSON) from our server.

Please contact your Spil rep to discuss which features in your game should be changable via a config editor.

2 simple methods will grant you access to the config file.

It is up to you to decide which one you want to use.

Spil.GetConfigAll() will return a JSON string of the entire config file.

Spil.GetConfigValue(String key) will return an JSON String of an object from one layer within the config file.

See examples below for more details.

If there is no network connection, then the SDK will use a default config file.

Please make sure to have a default version of the config file named 'defaultGameConfig' in Assets>StreamingAssets.

Here is an example of a simple config file for the game Pixel Wizard:

{
	"enemyhealth":{
		"Bat":10,
		"Beardwoman":400,
		"Clown":35
	},
	"enemycoindrop":{
		"Bat":1,
		"Beardwoman":7,
		"Clown":2
	},
	"WizardDamage":{
		"Wizard1":25,
		"Wizard2":35
	}	
}

So, with this config file, calling GetConfigAll() will return the whole object stringified.

Calling GetConfigValue("enemycoindrop") will return the enemycoindrop object stringified.

Please get in touch if you need help desiging your config file.


<h2>IOS specific settings</h2>


After generating a xcode project we need to make a few small changes in xcode:

Since iOS 9 blocks all http requests and only allows https by default we need to add one small setting to the info.plist of the project:

![alt tag](http://www.strongerthanfiction.com/img/integration.png)

Make sure you enabled the spil games app group in the xcode project capabilities tab. *This might require a certificate update. 

![alt tag](http://www.strongerthanfiction.com/img/integration2.png)

<h2>Android specific settings</h2>

In case you are using <b>Prime31</b> Unity plugin that extends the UnityPlayerNativeActivity use the "com.spilgames.spilsdk.<b>SpilUnityActivityWithPrime</b>" in the AndroidManifest.xml file instead of the "com.spilgames.spilsdk.<b>SpilUnityActivity</b>"

In case you are using <b>AndroidNative</b> Unity plugin that extends the UnityPlayerNativeActivity use the "com.spilgames.spilsdk.<b>SpilUnityActivityWithAN</b>" in the AndroidManifest.xml file instead of the "com.spilgames.spilsdk.<b>SpilUnityActivity</b>"

For initiating and requesting Ads implement the following code (<b>Only for Debugging!</b>):

Initiation:
	
	//DFP
	Spil.StartDFP ("your Ad Unit Id");
        
	//Fyber
	Spil.StartFyber ("your AppId", "your token");

Showing Ads:
        
	//DFP
	Spil.ShowDFP ("interstitialView");
	
	//Fyber
	Spil.ShowFyber ("rewardVideoView");

<h2>Common Event Types and Expected Params</h2>






IAP

| Events types                | required parameters                                                              | Note |
| --------------------------  |:--------------------------------------------------------------------------------:| -----:|
| iapPurchased                | skuId, transactionId, purchaseDate                    |                                                               |
| iapRestored                 | skuId, originalTransactionId,originalPurchaseDate            |                                                               |
| iapFailed                   | error, skuId               
* skuId (string) - The product identifier of the item that was purchased.
* transactionId (string) - The transaction identifier of the item that was purchased (also called orderId).
* purchaseDate (string) - The date and time that the item was purchased.
* originalTransactionId (string) - For a transaction that restores a previous transaction, the transaction identifier of the original transaction. Otherwise, identical to the transaction identifier.
* originalPurchaseDate (string) - For a transaction that restores a previous transaction, the date of the original transaction.
* error (string) - Error description or error code



USER BEHAVIOUR

| Events types                | required parameters                                                              | Note |
| --------------------------  |:--------------------------------------------------------------------------------:| -----:|
| walletUpdate                | walletValue, itemValue, source, item, category                    |                               |
| milestoneAchieved           | name                                                                             |      |    
| levelStart                  | level                                                                             |    |      
| levelComplete                  | level                                                                             |    |  
| levelFailed                  | level                                                                             |    |    
| playerDies                  | level                                                                             |    |    

* walletValue (int) - The new wallet value after subtracting the item value. E.g coins.
* itemValue (int) - The value of the item consumed. E.g. coins. (note: This property can also be negative, for example if a user spends coins, the itemValue can be -100)
* source (int) - 0 == premium
* item (string) - item id or sku
* category (int) - 0 = Consumable, 1 = Booster, 2 = Permanent
* name (string) - name of the milestone
* level (string) - name of the level

Advertising

| Events types                | required parameters                                                              | Note  |
| --------------------------  |:--------------------------------------------------------------------------------:| -----:|
| didDisplayInterstitial      | screenType                                                                       |       |
| didDismissInterstitial      | screenType               |                                                               |
| didCloseInterstitial        | screenType               |                                                               |
| didClickInterstitial        | screenType               |                                                               |
| didDisplayRewardedVideo     | screenType               |                                                               |
| didDismissRewardedVideo     | screenType               |                                                               |
| didCloseRewardedVideo       | screenType               |                                                               |


* screenType (String) - i.e tutorialStart, levelComplete, gamePlayStart
