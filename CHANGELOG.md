Change Log
==========
Full change logs for the native SDKs:
* <a href="https://github.com/spilgames/spil-ios-sdk/releases">iOS</a>
* <a href="https://github.com/spilgames/spil-android-sdk/blob/master/CHANGELOG.md">Android</a>


Version 2.7.5 *(25-01-2018)*
----------------------------
Version 2.7.5 includes only critical bug fixes.

**Bug Fixes**
 * Android: Fixed issue with privacy policy message not being picked up if game updates
 * Android: Fixed issue with privacy policy flow when switching from no popup to with popup
 * Android: Fixed issue with bundle buy track event not picking up correct order of events
 * iOS: Fixed an issue where some events are not always being triggered


Version 2.7.4 *(17-01-2018)*
----------------------------
**IMPORTANT! For Android the "SpilSDKApplicationWithFabric" has been removed. The Fabric functionality has been moved into the standard "SpilSDKApplication". Please make the necessary changes.**

Version 2.7.4 brings the Privacy Policy (GDPR) functionality, Android Push Notification images, updates to the Unity Editor and several bug fixes.

**New Features**
 * _Privacy Policy (GDPR)_: This feature is turned on by default since it is mandatory by Google that a Privacy Policy message is shown to the user when the game starts the first time. The feature is strongly connected to the initialisation phase, not allowing the user to continue if the policy was not accepted. On the development side the only thing that has changed is the addition of an extra check box in the SpilSDK object. The SDK will internally handle the Privacy Policy popup and the initialisation. No additional calls are required and an additional callback (OnPrivacyPolicyStatus) has been added for initialising any components outside the Spil SDK.
 * _Android Push Notification images_: It is now possible to attach images to a push notification. The image will be displayed when the user expands the push notification. Configuration for the image url is done in SLOT.

**Bug Fixes**
 * Android: Fixed issue with user data available callback not being called on update.
 * Android: Fixed crash when processing a response that had corrupted data.
 * Android: Fixed class cast exception crash when processing Game Data.
 * Editor: Fixed initialisation issue where the UserDataAvailable was called twice.
 * Editor: Fixed Reset Wallet/Inventory issue.
 * iOS: Removed social login failure event to align with Android
 * Android/iOS: Removed network error being thrown if the user was offline.

**Other**
 * Android: Added JSONArray parsing when sending an event with custom parameters
 * Unity Editor: Replaced the debug screens (LiveEvent, DailyBonus, Ads, etc.) with prefabs for better visuals
 * Android/iOS: Updated 3rd party libraries


Version 2.7.3 *(02-01-2018)*
----------------------------
Version 2.7.3 includes a fix for an issue on the iOS event queue which can cause a crash. It also improves playerdata/gamestate syncing on iOS.


Version 2.7.1 *(30-11-2017)*
----------------------------
**IMPORTANT! For Android make sure to update your AndroidManifest.xml file to remove the WRITE_EXTERNAL_STORAGE permission!**

Version 2.7.1 brings the Social Login & Cross-Device Syncing, removal of the WRITE_EXTERNAL_STORAGE dangerous permission, update of 3rd party libraries and several other improvements.

**New Features**
 * _Social Login & Cross-Device Sync_: These features can be combined to accomplish user data syncing across multiple devices and across multiple platforms using Facebook login. The Social Login feature can also be used without the data-syncing feature; however, this can result in a loss of data when the user starts to play on multiple devices. The User data-syncing feature cannot be used without also implementing the Social Login feature. The syncing is done on the Wallet, Inventory and Gamestate features.

**Bug Fixes**
 * iOS: Fixed an empty uid parameter for the first sessionStart event for MDS.
 * iOS: Fixed the live events start date parameter.
 * iOS: SLOT was not always updated correctly of the initial wallet/inventory state of the client.

**Other**
 * Android: Removed WRITE_EXTERNAL_STORAGE permission dependency and usage from the SDK. The user id will not be saved anymore in the Spilgames folder and it will be resetted on app install. For user who are updating the game the user id will stay the same.
 * Android: Due to the removal of the WRITE_EXTERNAL_STORAGE permission, the enabling and disabling 'debugMode' will be done explicitly through the Sample App. Please contact a Spil representative if you need to install the application.
 * Android/iOS: Added new 'deviceId' parameter which is sent with each event. This will have the same value across games from Spilgames played on the same device.
 * Android/iOS: Removed automatic triggering of request events on startup (onCreate). You will need to explicitly call the init() method now in order to tell the SDK to retrieve SLOT data.
 * Android/iOS: Changed the 'requestPlayerData' and 'requestMyGameState' to one call name 'requestUserData'. This change is due to the cross-device syncing feature.
 * Android/iOS: Merged callbacks for PlayerData and GameState into combined UserData callbacks.
 * Android/iOS: Removed Zendesk SDK and all it's components. Support for this feature has been discontinued.
 * Android/iOS: Added extra parameter to the 'requestSplashScreen' request to define the type of Splash Screen.
 * Android/iOS: All 3rd parties updated.
 * Android/iOS: Added Facebook Audience Network to Fyber.
 * Android/iOS: Removed Facebook Audience Network from DFP (the adapter is still included so if the game has the spilsdk-fyber module, Facebook interstitials will still work).
 * Android/iOS: Added AdMob Network to Fyber.
 * Android: Updated Google Play Services to 11.6.0.
 * iOS: Minor Firebase deeplink improvements.


Version 2.6.1 *(16-10-2017)*
----------------------------
Version 2.6.1 brings Spil More Apps, ability to configure an image for the permission dialogs for Android, new event tracking implementation and bug fixes.

**New Features**
 * _Spil More Apps_: This feature replaces the Chartboost more apps and allows the setting up of a more apps screen using the SLOT system. The flow of requesting and showing the Spil More Apps screen is the same as with the previous implementation.

**Bug Fixes**
 * Android: Fixed issue with inventory initialisation not picking up correctly the initial values in offline mode
 * Android: Fixed WAKE_LOCK issue by replacing the offline queueing library (old Trigger - new Android Job)
 * Android: Fixed issue with deep linking being processed twice when using Firebase
 * Android: Fixed issue with ConcurrentModification crash when sending update events to the Inventory
 * iOS: Minor deeplink improvements to handle deeplink more reliable
 * iOS: Fixed an offline gamestate syncing issue
 * iOS: Fixed an rare crash which could happen when in offline mode packages and promotion where requested

**Other**
 * iOS: iCloud is now no longer used to store the Spil User ID, keychain access is now used instead
 * iOS: It’s now possible to reset the Spil User ID through the settings menu
 * iOS: Switching between debug, production and staging environment now also cleans up all previous stored configs/states
 * iOS: Reorganised the Spil SDK settings app menu to make the functionality more clear
 * iOS: The event tracker has been optimized, it’s now using less memory and processes events faster
 * iOS: The SDK initialization code has been optimized, the SDK does now finish loading sooner
 * Android: Added possibility to configure images for permission rationale and permission deny
 * Android: Added permission response callback
 * Android/iOS: Added optional location and reward type parameters for reward videos
 * Android/iOS: Updated Fyber Ad Networks
 * Android/iOS: Updated DFP Ad Networks
 * Android: Updated Google Play Services to 11.0.4
 

Version 2.5.0 *(09-08-2017)*
----------------------------
Version 2.5.0 includes Gacha box feature, Android improved permission flow, Adjust Deep Linking, additional methods for Splash Screens and several bug fixes.

**New Features**
 * _Gacha Box_: This feature allows for the configuration of Gacha box items through the SLOT system. It gives the opportunity to configure items that can be gained through a roll system. The Gacha acts like an item so it can be added to the Inventory and bought through the Bundle system. An additional method for opening the gacha has been added.

**Bug Fixes**
 * Android: Fixed issue with initial values not being stored correctly when the game was offline
 * Android: Fixed crash when trying to initialise deep linking
 * Android: Fixed crash when a web view was not finding a certain resource
 * Android: Fixed crash when checking for external permissions
 * iOS: Aligned issue with OnGameStateError not being called if there is no internet connection
 * Editor: Fixed issue with sending event with custom data not having the correct type
 * Unity: Updated SDK to Unity 2017.1 and fixed issue with sending events in Editor

**Other**
 * Android/iOS: Added additional methods for Splash Screen which includes buying bundles and adding items and currency to the user
 * Android: Improved Permission flow by always requesting a Permission Rationale before the permission request and showing a Deny Rationale in case the user denied the permission
 * Android: Added option to localize and configure the Permission Rationale and Deny Rationale via Game Config (SLOT)
 * Android/iOS: Added "updatePlayerData" event trigger when receiving updates from SLOT for Player Data
 * Android/iOS: Added Adjust Deep Linking which uses the same flow as Firebase Deep Linking
 * Android/iOS: Added method "requestMyGameSate" to request the game states manually. Use this only in case of game state error


Version 2.4.0 *(10-07-2017)*
----------------------------
Version 2.4.0 includes the new feature Live Event, overall improvements to the native SDKs and it's features and bug fixes.

**New Features**
 * _Live Event_: A feature which allows the game to display custom events defined in SLOT, which require the user to consume one of his Inventory item in order to get rewards at the end of the event.

**Bug Fixes**
 * Android: Fixed potential issue with OOM caused by large Game State events
 * Android: Improved Web View performance for all types: Splash Screens, Daily Bonus and Live Event
 * iOS: Fixed an issue with the Fyber loader displaying incorrectly
 * iOS: Fixed issue with OnUpdateGameState not being called on the first initialization

**Other**
 * Android/iOS: Added new WebView loader added
 * Android/iOS: Added new callbacks for receiving information from a WebView and detecting if a WebView requests an IAP
 

Version 2.3.1 *(09-06-2017)*
----------------------------
**IMPORTANT! We've added an optional parameter for the "token"(purchaseToken) for "TrackIAPPurchasedEvent". It is strongly advised to use it for Android as we have had issues with retrieving this internally. For iOS it is not required.**

**Bug Fixes**
 * Android: Fixed issue with Google Advertisement Id not being retrieved/stored correctly
 * Android: Implemented option for developer to pass IAP token for the "iapPurchased" event
 * Android: Fixed issue with Firebase Deeplinking import into Unity
 * Android/iOS: Deeplinking now tracks internally the URL
 * Android: Fixed issue with OOM if the Event custom data would be too large
 * Android: Fixed issue with Initial Value being tracked more than once
 * Android: Fixed issue with Reset Updated Data crashing the game for Unity
 * iOS: Fixes for Fyber reward videos

**Other**
 * Updated Third Party Libraries

Version 2.3.0 *(16-05-2017)*
----------------------------
**IMPORTANT! Make sure that you remove the Spil Plugin files that were located in the Editor folder! These files are now directly present under the Spilgames folder!**

**New Features**
 * _Game Data Localisation_: New parameters were added to the Game Items, which include a "displayName" and "displayDescription" which gives you the possibility to localize the items, currencies and bundles inside your game from SLOT. By retrieving the information for one of the three, you will get this additional information. The information for these values is based on the user's phone localization settings.
 * _Firebase Deep Linking_: Deep Linking has been added to the Spil SDK. It uses the Google Firebase implementation at it's core, while also integrating SLOT rewards for the games.
 * _Server Time_: A method for requesting server time from SLOT has been added to th SDK. This is intended primarily as a means for preventing cheating in the game. 
 * _IAP Validation_: The Spil SDK now supports server IAP validation. The validation is done when an "iapPurchased" event is tracked and all the correct parameters have been sent to the server.
 * _Local Storage Encryption_: Encryption has been added to all the values that are stored locally on the phone by the SDK. This is done internally and no further actions are need by the developer.
 * _iOS Spil SDK updated to v2.2.0_
 * _Android Spil SDK updated to v2.3.0_

**Bug Fixes**
 * Android: Fixed issue with Unity Push Notification crashing the game in certain conditions
 * Android: Fixed IAP validation data processing issue
 * Android: Fixed issue with UpdatedData not being sent correctly to Unity
 * Android: Fixed Adjust issue that would prevent Adjust from initialising for Android version between 5 and 6
 * Android: Fixed crash caused by cast exception when the Game/SDK was resumed in certain cases
 * iOS: Fixed private gamestate sending issue
 * iOS: Fixed a wallet updating issue
 * iOS: Fixed currency type issue
 * Fixed several issues with Editor Mode

**Other**
 * Updated Third Party Libraries
 * Restructured plugin structure


Version 2.2.10 *(21-03-2017)*
----------------------------
This version brings image processing, additional parameters for updating user information, 3rd party SDK updates and bug fixes.
* iOS Spil SDK updated to v2.1.9.
* Android Spil SDK updated to v2.2.9.
* Added image processing and loading logic for items, bundles and external images (see: http://www.spilgames.com/developers/integration/unity/implementing-spil-sdk/spil-sdk-wallet-shop-inventory/ for more information).
* Added "reasonDetails" optional parameter to the methods that update the player's wallet and inventory.
* Added "transactionId" optional parameter to the methods that update the player's wallet and inventory.
* Added iOS Firebase Deep linking support.
* Added button in Unity for reporting issues with the SDK.
* Updated 3rd party libraries for iOS and Android.
* Bug fix for iOS config file being to big.
* Bug fix for iOS regarding GameState feature sending unnecessary events.
* Bug fix for Android with Adjust not initialising properly for pre Android 5 Devices.
* Bug fix for Android with Fyber not sending Ad Finished in certain conditions.
* Editor Mode bug fixes.


Version 2.2.9 *(25-01-2017)*
----------------------------
***Known Issue***
In Editor Mode, the ConfigResponse.cs has an issue. In order to get the correct Config for the game in Editor mode change the following code at line 33 in ConfigResponse.cs:
if(config.HasField("key")) to if(config.HasField(key))


This version brings a lot of wallet and inventory improvements, next to Apple TV and Editor mode improvements
* iOS Spil SDK updated to v2.1.8.
* Android Spil SDK updated to v2.2.8.
* Replaced JSONModel library because of serialization issues.
* Added initial value support for items & currencies.
* Implemented reset methods for the inventory, wallet and entire player data.
* Apple TV support improved.
* General improvements and bug fixes.
* Default Spil events added.
* Editor Mode support fixes.


Version 2.2.8 *(15-12-2016)*
----------------------------
This version brings updates to the way you are sending events via the SDK, 3rd part library updates for iOS and bug fixes for several key aspects of the SDK.
* iOS Spil SDK updated to v2.1.6.
* Android Spil SDK updated to v2.2.7.
* All 3rd party libraries updated.
* Many event tracking improvements.
* General improvements and bug fixes.
* tvOS support added.
* Fixed Chartboost ads not showing for Android.
* Push notifications fixes.
* Fixed recreating the default JSON files. Now they will always be recreated when you push the button in the Editor Window.
* Fixed Editor Mode issue regarding persistent data over multiple instance. Remember to use the same UID that you set on the SpilSDK object.
* Removed deprecated methods (such as all "SendXEvent" methods, which have been renamed to "TrackXEvent" and "ConsumeBundle" which has been renamed to "BuyBundle").


Version 2.2.7 *(30-11-2016)*
----------------------------
This version only has a few hotfixes for Android and updates for the Ad Libraries.
 * Fixed crash for IAP events.
 * Updated Ad Libraries for Android (Fyber, DFP and Chartboost).
 * Other minor bug fixes for Android.
 * Android Spil SDK updated to v2.2.6.


Version 2.2.6 *(18-10-2016)*
----------------------------
This version includes a full implementation of the Editor Mode for the Spil SDK, a permission request system for Android, several improvements in the configuration window as well as clearer issue checking.
 * Chartboost parental gate implemented in iOS.
 * Slight adjustments to the event sending for push notifications.
 * Added automatic event sending for when an ad is displayed, clicked, dismissed and closed.
 * Added permission request system for Android. The SDK now automatically request dangerous permissions at start-up (similar to how unity was doing it), but now a rationale is include for each permission. You also have the ability to disable this system and request the permissions manually when you need them during runtime.
 * A new look for the Spil SDK configuration windows have been added. You now have several tabs for each section, two new windows for documentation and release, as well as better build check-up for Android (hopefully less issues will be reported now :) ).


Version 2.2.5 *(26-10-2016)*
----------------------------
This version only has a few hotfixes for both Android and iOS.
 * Added Custom Bundle Identifier support for iOS.
 * Fixed sending format for the TrackWalletInventoryEvent.
 * iOS Spil SDK updated to v2.1.2.
 * Android Spil SDK updated to v2.2.4.


Version 2.2.4 *(20-10-2016)*
----------------------------
 * Fixed an iOS export issue.
 * + 1-5 fire damage.


Version 2.2.3 *(14-10-2016)*
----------------------------
This version brings multiple features of the Spil SDK to the Editor Mode, the Daily Bonus screen functionality as well as several bug fixes for both Android and iOS.
 * iOS Spil SDK updated to v2.1.0.
 * Android Spil SDK updated to v2.2.3.
 * Added the following Spil SDK functionalities to the Unity Editor Mode: Game State, Packages, Config, Advertisement and Event Tracking. More will follow!.
 * Several bug fixes for Android regarding the Wallet functionality.
 * Added Vungle ad network inside Fyber.
 * Updated Google Play Services to 9.6.1 (included also Google Play Games library in case you need it).
 * Bug fixes, code cleanup and improvements (for more details regarding native, check the Android and iOS repositories).


Version 2.2.2
----------------------------
Tweaks & bug fixes.
 * iOS SpilSDK updated to v2.0.8.
 * Android SpilSDK updated to v2.2.2.
 * User gamestate added.
 * Automated events implemented. (Splash screens etc).
 * iOS Build script now also supports entitlements adding. (iCloud, push messages & app groups).
 * Zendesk custom theme implemented. (iOS only)
 * Wallet track event helper methods added.


Version 2.2.1
----------------------------
Tweaks & bug fixes. minor updates and bug fixes.
 * Tweaks & bug fixes.
 * Android SpilSDK updated to v2.2.1.


Version 2.2.0
----------------------------
Version 2.2.0 is here and brings new features for analytics (Adjust, Google Analytics) and customer support (Zendesk) along with some minor updates and bugfixes.
 * iOS SpilSDK updated to v2.0.6.
 * Android SpilSDK updated to v2.2.0.
 * Methods added for custom user ids.
 * Added Zendesk library and functions for customer support.
 * Ad provider libraries have been updated.
 * Google Analytics is now integrated within the SDK.
 * Adjust is now integrated within the SDK.
 * Fixes for duplicate events on iOS.
 * Restructured the Android SDK to be modular.
 * Moved the example code out of Spil.cs and into a seperate file "ExampleCode.cs".
 * 2% improved chance of finding magic items.


Version 2.1.0
----------------------------
Version 2.1.0 is here and brings new "Shop", "Wallet" and "Inventory" features that allow developers to create an in-game shop, items and economy that can be monitored, managed and balanced from the Spil back-end. 
 * Updated to Android SpilSDK V2.1.0 and iOS SDK V2.0.3.
 * Added Wallet, Inventory and Shop features for creating and managing in-game economy.
 * Fixed and improved reward passed via push notifications.
 * Updated test app to include Wallet, Inventory and Shop features (See the TestApp directory).
 * TestRequest methods for testing advertisements are now also available for iOS.
 * Improved logging for iOS.
 * AndroidManifest.xml for google play measurements now intentionally crashes build until it is updated by user (how to notes are included).
 * Various minor bugfixes and improvements for ease of use.
 * 150% damage vs dragons


Version 2.0.2
----------------------------
Version 2.0.2 is here and brings some fixes and updates primarily for iOS. 
This version also includes a new post-processor script to make building to iOS easier.


Version 2.0.1
----------------------------
Version 2.0.1 is here and brings a lot of fixes and updates. Version 2.0.1 is primarily aimed at Android, in the coming weeks we expect to release V2.0.2 which will also include improvements for iOS.
(Android only) Since V2.0.1 Unity developers have to include a defaultGameConfig.json file in their StreamingAssets directory. This json file should contain a ChartBoost id and signature as well as a key for Google IAP (only required if the game uses in-app purchases).
A defaultGameConfig.json file could look like this:

{
"chartBoostAppId":"ValueHere",
"chartBoostAppSignature":"ValueHere",
"googleIAPKey":"ValueHere"
}
