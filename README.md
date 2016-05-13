<h1>Spil Games Unity Plugin (V2.0.0)</h1>

The Spil Game Unity Plugin is designed to give developers access to Spil Games SLOT functions and communicate with the Spil backend. The plugin also provides developers with an easy way to connect to ad networks and implement features like video's, interstitials and tracking of users' behaviours.

<h3>Installation</h3>

<h4>1: Download and Import the Unity package into your project</h4>
The latest version of the Unity plugin can be downloaded from the releases tab of the Github repo at https://github.com/spilgames/spil_event_unity_plugin/releases. Unpack the download, inside you will find the native library folders and a Unity package. You can ignore the folder for now and just import the Unity package. Attach the script named "Spil.cs" to a GameObject in your SplashScreen or equivalent. For Android you should also enter your project ID as the value of the "Project_ID" field in Spil.cs. Ask your Spil contact to provide you with your project ID. 

<h4>2: Import appropriate platform specific components</h4>
<strong>Android</strong>
<p>
Inside the downloaded Android folder you will find several java libraries, you might not need all of them in your project. Follow this guide to work out which ones you need:
If you are using the version of the Spil SDK <strong>with integrated AD networks</strong>, drag the following files into Assets/Plugins/Android:
From the 'SDK With ADs' folder: AndroidManifest.xml and spilSDK.jar.
From the ExtraLibs folder: mm-ad-sdk.aar, unityads-sdk.aar.
</p>
<strong>Google Play Services</strong>
<p>
Because Unity does not support Multi-Dex publishing for Android apps Unity Android developers are forced to limit the total number of methods in their app and its dependencies to a maximum of 64000. To accommodate for this we have provided a version of Google Play Services that includes only the bare essentials required to run the SpilSDK. Copy the contents of the GooglePlayServices folder to Plugins/Android. If you require additional components of Google Play Services use this google dependency manager: https://github.com/googlesamples/unity-jar-resolver. However, If you are using the version of the Spil SDK <strong>without AD networks</strong>, copy the following files to Assets/Plugins/Android: From the 'SDK Without ADs' folder: AndroidManifest.xml and spilSDK.jar. From the ExtraLibs folder: Copy the contents of the GooglePlayServices folder to Plugins/Android.
</p>

<p>
<strong>Note:</strong> If you are using another 3rd party plugin that might clash with the spil plugin (prime31 for example), you will find versions of the Manifest and spilSDK.jar that allow for that within the correct folders.
</p>

<strong>iOS</strong>
<p>
Extra components for iOS need to be added in Xcode after building from unity. See the later section regarding building for details.
</p>

<strong>Calling Spil Methods</strong>
<p>
To call a Spil method, you must first add "using SpilGames.Unity;" to the top of your class. Then, you can call any method by typing Spil.Instance.nameOfMethod();
</p>

<h3>Tracking Events</h3>

Several events are expected in every game, the plugin has helper methods for each of these, they are:
<ul>
<li>
SendwalletUpdateEvent(string walletValue, string itemValue, string source, string item, string category)
</li>
<li>
SendlevelStartEvent(string levelName)
</li>
<li>
SendlevelCompleteEvent(string levelName)
</li>
<li>
SendlevelFailedEvent(string levelName)
</li>
<li>
SendplayerDiesEvent(string levelName)
</li>
<li>
SendiapPurchasedEvent(string skuId, string transactionId, string purchaseDate)
</li>
<li>
SendiapRestoredEvent(string skuId, string originalTransactionId, string originalPurchaseDate)
</li>
<li>
SendiapFailedEvent(string error, string skuId)
</li>
<li>
SendmilestoneAchievedEvent(string name)
</li>
</ul>

Just call the corresponding method at the right point in your game, and the SDK will send the event to the Spil backend. Be sure to pay close attention to the expected params, these will need to be correct for the game to pass QA. Descriptions for all methods and parameters are included in the code and should be visible in your IDE.

<p>
<strong>Custom events</strong> may be tracked as follows:
To track an simple custom event, simply call Spil.TrackEvent(String eventName); from anywhere in your code. To pass more information with the event, simply create a &lt;String, String&gt; Dictionary and pass that as the second parameter like so:
</p>
<p>
Dictionary&lt;String, String&gt; eventParams = new Dictionary&lt;String,String&gt;();</br>
eventParams.Add("level",levelName);</br>
Spil.Instance.TrackEvent("PlayerDeath", eventParams);
</p>

<h3>Game Config Service</h3>
<p>
The spil sdk provides methods to request a game config file (JSON) from the Spil backend. Contact your Spil Games contact person to discuss which features in your game should be configurable via a game config file. 
</p>
There are two methods for requesting a config file via the Unity Plugin:
<ul>
<li>
Spil.GetConfigAll() will return a JSON string of the entire config file.
</li>
<li>
Spil.GetConfigValue(String key) will return an JSON String of an object from one layer within the config file.
</li>
</ul>

If there is no network connection then the SDK will use a default config file. Be sure to include a default config file named 'defaultGameConfig.json' in Assets/StreamingAssets. For iOS the defaultGameConfig.json file should be placed in the root of your Xcode project.

<p>
Here is an example of a simple config file for the game Pixel Wizard:
</p>
<p>
{</br>
	"enemyhealth":{</br>
		"Bat":10,</br>
		"Beardwoman":400,</br>
		"Clown":35</br>
	},</br>
	"enemycoindrop":{</br>
		"Bat":1,</br>
		"Beardwoman":7,</br>
		"Clown":2</br>
	},</br>
	"WizardDamage":{</br>
		"Wizard1":25,</br>
		"Wizard2":35</br>
	}</br>
}
</p>
<p>
Calling GetConfigAll() will return this whole JSON object as a String.</br>
Calling GetConfigValue("enemycoindrop") will return the enemycoindrop node as a String.</br>
The Unity SDK also includes methods for converting JSON strings to objects via the SpilGames.Unity.Helpers.JSONHelper getObjectFromJson&lt;T&gt;(string jsonString) method. A detailed example is included in JSONHelper.cs</br>
Don't hesitate to contact us if you need help designing your config file.
</p>

<strong>Important Note: Null return</strong>
<p>
The config service should always return a value. But if for some reason it does not, be sure to check and handle a possible null return.
</p>

<h3>AD networks</h3>
<p>
Most AD network functionality will be handled automatically by the SDK. However you will need to handle the triggering of reward videos and subsequent payout to the player on completion of the video. Here is an example script that checks if a Reward video is available, hides or shows the watch video button and rewards the player if a reward video was succesfully played.
</p>

<p>
public GameObject rewardVideoButton;</br></br>

void OnEnable(){</br>
	rewardVideoButton.SetActive (false);</br>
	Spil.Instance.SendrequestRewardVideoEvent ();</br>
	Spil.Instance.OnAdAvailable += OnAdAvailable;</br>
	Spil.Instance.OnAdNotAvailable += OnAdNotAvailable;</br>
}</br>
</br>
void OnAdAvailable(SpilGames.Unity.Utils.enumAdType adType){</br>
	if (adType == SpilGames.Unity.Utils.enumAdType.RewardVideo) {</br>
		rewardVideoButton.SetActive (true);</br>
	}</br>
}</br>
</br>
void OnAdNotAvailable(SpilGames.Unity.Utils.enumAdType adType){</br>
	if (adType == SpilGames.Unity.Utils.enumAdType.RewardVideo) {</br>
		rewardVideoButton.SetActive (false);</br>
	}</br>
}</br>
</br>
Then, the user can click the button, and trigger the following:</br>
</br>
public void ShowRewardedVideo(){</br>
	Spil.Instance.OnAdStarted += AdOpened;</br>
	Spil.Instance.OnAdFinished += AdFinished;</br>
	Spil.Instance.PlayVideo ();</br>
}</br>
</br>
void AdOpened(){</br>
	//mute the game and pause if neccessary</br>
	muteAudio = true;</br>
}</br>
</br>
void AdFinished(SpilGames.Unity.Utils.SpilAdFinishedResponse response){</br>
	if (response.reward != null) {</br>
		playerCoins += response.reward.reward;</br>
	}</br>
}</br>
</p>

<h3>Building and publishing</h3>

<p>
<strong>Android</strong></br>
No special steps should be necessary for building for Android.
<p>

<p>
<strong>iOS</strong></br>
1: Drag the spil framework into the root of the Xcode project
2: Add a new 'Run Script' phase - ON TOP - of the Build Phases tab using the following Shell command and build the project: /usr/bin/python Spil.framework/setup.py $(PROJECT_NAME)
<strong>OR</strong>
1: Drag the spil framework into the root of the Xcode project
2: In terminal, cd to the root of the Xcode project
3: Run the following command: "python Spil.framework/setup.py <Project-Name>" project name being the name of the Xcode project most commonly python Spil.framework/setup.py Unity-iPhone
<p>

<h3>Changelog</h3>
<p>
The whole unity plugin has been revamped and upgraded for V2.0.0. Changelog and additional documentation, examples and tutorials will be added a.s.a.p.
</p>