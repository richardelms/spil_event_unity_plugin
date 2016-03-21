<h1>Spilgames Event System: Unity Plugin</h1>

<h3>1: Download and Import the Unity package into your project</h3>
You can find the latest version of the Unity plugin here: https://www.dropbox.com/s/4suvb7qx4zpoqhs/Spilgames_SDK_Unity_v1_9_1.zip?dl=0

Unzip the download, inside you will find 2 folders and a Unity package. Please ignore the iOS and Android folders for now and just import the Unity package.

The package contains 2 C# scripts. Spil.cs contains all the methods and native bridges for the SDK, the other script is a helper class for handling JSON responses from the Spil servers.

Attach the Spil.cs script to a GameObject in your SplashScreen or equivalent.

For Android, also enter your project ID to the GameObject. Ask your Spil contact to provide you with your project ID.
<h3>2: Import appropriate platform specific components</h3>
<strong>Android</strong>

Inside the downloaded Android folder you will find several java libraries, you might not need all of them in your project. Follow this guide to work out which ones you need:

If you are using the version of the Spil SDK <strong>with integrated AD networks</strong>, drag the following files into Assets&gt;Plugins&gt;Android:

From the 'SDK With ADs' folder: AndroidManifest.xml and spilSDK.jar.

From the ExtraLibs folder: mm-ad-sdk.aar, unityads-sdk.aar, android-support-v4.jar and, if not already in your project, copy the entire google-play-services_lib folder.

However, If you are using the version of the Spil SDK <strong>without AD networks</strong>, drag the following files into Assets&gt;Plugins&gt;Android:

From the 'SDK Without ADs' folder: AndroidManifest.xml and spilSDK.jar.

From the ExtraLibs folder: android-support-v4.jar and, if not already in your project, copy the entire google-play-services_lib folder.

<strong>Note:</strong> If you are using another 3rd party plugin that might clash with the spil plugin (prime31 for example), you will find versions of the Manifest and spilSDK.jar that allow for that within the correct folders.

<strong>iOS</strong>

Extra components for iOS need to be added in Xcode after building from unity. See the later section regarding building for details.
<h3>3: Tracking Events</h3>
To track an event, simply call Spil.TrackEvent(String eventName); from anywhere in your code.

To pass more information with the event, simply create a &lt;String, String&gt; Dictionary and pass that as the second parameter like so:

Dictionary&lt;String, String&gt; eventParams = new Dictionary&lt;String,String&gt;();

eventParams.Add(“level”,levelName);

Spil.TrackEvent(“PlayerDeath”, eventParams);

A list of events to track and the parameters expected will be provided by Spil.

Please pay close attention to the expected params, these will need to be correct for the game to pass QA.

In most cases, the following events will be needed plus a few custom ones relating to your game.




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

<h3>4: Game Config Service</h3>

The spil sdk provides 2 methods that will allow you to pull a game config file (JSON) from our server.

Please contact your Spil rep to discuss which features in your game should be changable via a config editor.

2 simple methods will grant you access to the config file.

It is up to you to decide which one you want to use.

Spil.GetConfigAll() will return a JSON string of the entire config file.

Spil.GetConfigValue(String key) will return an JSON String of an object from one layer within the config file.

See examples below for more details.

If there is no network connection, then the SDK will use a default config file.

Please make sure to have a default version of the config file named 'defaultGameConfig.json' in Assets&gt;StreamingAssets.

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

Please get in touch if you need help designing your config file.
<h3>5: AD networks</h3>
Most AD network functionality will be handled automatically by the SDK. However you will need to handle the triggering of rewarded videos and subsiquent payout to the player on completion of the video.

To request a rewarded video, simply call this method:

Spil.ShowRewardedVideo();

Then, if the video is completed, the SDK will send back a message to the Spil.cs script triggering the OnReward method.
Add code within this method to reward the player, an example is given in the Spil.cs.

<strong>Open and Close events</strong>

The Spil class contains 2 delegates that you can extend to make sure your app behaves in the correct way when ads are shown and closed.

OnAdOpened

And

OnAdClosed;

For example, in your music manager, you might want to extend these delegates to mute the music when an Ad is shown, and then un-mute it again once closed.

void OnEnable(){
  Spil.OnAdOpened += AdOpened;
  Spil.OnAdClosed += AdClosed;
}

void OnDisable(){
    Spil.OnAdOpened -= AdOpened;
    Spil.OnAdClosed -= AdClosed;
}

void AdOpened(){
	muteAudio = true;
}

void AdClosed(){
	muteAudio = false;
}

The events will fire for both Video ads and static fullscreen ads.

<h3>6: Building for Distribution</h3>
<strong>Android:</strong>

No special steps should be necessary for building for Android.

<strong>iOS:</strong>
<p class="p1"><span class="s1">1: From the iOS folder, drag the Spil.framework and unityads.bundle into your Xcode project. Select Copy items if needed.</span></p>
<p class="p1"><img class="aligncenter size-full wp-image-9566" src="http://www.spilgames.com/wp-content/uploads/2016/02/step1.png" alt="step1" width="1162" height="559" /></p>
<p class="p1"><span class="s1">2: In general settings under linked frameworks and libraries, add the following frameworks</span></p>
<p class="p1">libxml2.tbd</p>
<p class="p1"><span class="s1">libsqlite3.tbd</span></p>
<p class="p1"><span class="s1">WebKit.framework</span></p>
<p class="p1"><span class="s1">3: Drag the Spil.framework in the list of frameworks </span></p>
<p class="p1"><span class="s1">4: Open the spilframework and drag the ADNetwork frameworks into the same list</span></p>
<p class="p1"><img class="aligncenter size-full wp-image-9571" src="http://www.spilgames.com/wp-content/uploads/2016/02/step6.png" alt="step6" width="1451" height="973" /></p>
<p class="p1"><span class="s1">5: Add the '-ObjC' and '-undefined dynamic_lookup' linker flags to build settings</span></p>
<p class="p1"><span class="s1">6: Make sure that in the build options, Enable Bitcode is set to No</span></p>
<p class="p1"><span class="s1">7: Manually add the app group  group.com.spilgames to your entitlements file.</span></p>
<p class="p1"><img class="aligncenter size-full wp-image-9577" src="http://www.spilgames.com/wp-content/uploads/2016/02/sprong_entitlements_and_Unity-iPhone_xcodeproj.png" alt="sprong_entitlements_and_Unity-iPhone_xcodeproj" width="1596" height="298" /></p>
<p class="p1"><span class="s1">8: In the info section, make sure Allow Arbitrary Loads is set to YES</span></p>
<p class="p1"><img class="aligncenter size-full wp-image-9575" src="http://www.spilgames.com/wp-content/uploads/2016/02/step10.png" alt="step10" width="980" height="830" /></p>









