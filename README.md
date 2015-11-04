<h1>Spilgames Event System: Unity Plugin</h1>

<h3>1: Import the Unity package into your project</h3>

Important note for Android: Only import the google play services folder (Plugins/Android/google_play_services_lib) if you do not have it in your project already. Some other plugins, such as chartboost, will have imported it too.

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


<h2>IOS specific settings</h2>


After generating a xcode project we need to make a few small changes in xcode:

Since iOS 9 blocks all http requests and only allows https by default we need to add one small setting to the info.plist of the project:

![alt tag](http://www.strongerthanfiction.com/img/integration.png)

Make sure you enabled the spil games app group in the xcode project capabilities tab. *This might require a certificate update. 

![alt tag](http://www.strongerthanfiction.com/img/integration2.png)


<h2>Event types</h2>

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


* screenType (e.g. tutorialStart, levelComplete, gamePlayStart)

IAP

| Events types                | required parameters                                                              | Note |
| --------------------------  |:--------------------------------------------------------------------------------:| -----:|
| iapPurchased                | skuId, transactionId, purchaseDate, originalTransactionId,originalPurchaseDate                    |                                                               |
| iapRestored                 | skuId, transactionId, purchaseDate, originalTransactionId,originalPurchaseDate            |                                                               |
| iapFailed                   | error, skuId, transactionId, purchaseDate, originalTransactionId,originalPurchaseDate               
* skuID - The product identifier of the item that was purchased.
* transactionId - The transaction identifier of the item that was purchased (also called orderId).
* purchaseDate - The date and time that the item was purchased.
* originalTransactionId - For a transaction that restores a previous transaction, the transaction identifier of the original transaction. Otherwise, identical to the transaction identifier.
* originalPurchaseDate - For a transaction that restores a previous transaction, the date of the original transaction.
* error - Error description or error code

USER BEHAVIOUR

| Events types                | required parameters                                                              | Note |
| --------------------------  |:--------------------------------------------------------------------------------:| -----:|
| walletUpdate                | walletValue, itemValue, source, item                    |                               |
| milestoneAchieved           | skuId, transactionId, purchaseDate, originalTransactionId,originalPurchaseDate    |      |    
| levelStart                  | name                                                                             |    |      




