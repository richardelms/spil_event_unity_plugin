Change Log
==========

Version 2.2.9 *(25-01-2017)*
----------------------------
This version brings a lot of wallet and inventory improvements. Next to Apple TV and Editor mode improvements
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
This version brings updates to the way you are sending events via the SDK, 3rd part library updates for iOS and bug fixes for several key aspects of the SDK
* iOS Spil SDK updated to v2.1.6.
* Android Spil SDK updated to v2.2.7
* All 3rd party libraries updated.
* Many event tracking improvements.
* General improvements and bug fixes.
* tvOS support added.
* Fixed Chartboost ads not showing for Android
* Push notifications fixes
* Fixed recreating the default JSON files. Now they will always be recreated when you push the button in the Editor Window
* Fixed Editor Mode issue regarding persistent data over multiple instance. Remember to use the same UID that you set on the SpilSDK object
* Removed deprecated methods (such as all "SendXEvent" methods, which have been renamed to "TrackXEvent" and "ConsumeBundle" which has been renamed to "BuyBundle").


Version 2.2.7 *(30-11-2016)*
----------------------------
This version only has a few hotfixes for Android and updates for the Ad Libaries
 * Fixed crash for IAP events
 * Updated Ad Libraries for Android (Fyber, DFP and Chartboost)
 * Other minor bug fixes for Android
 * Android Spil SDK updated to v2.2.6


Version 2.2.6 *(18-10-2016)*
----------------------------
This version includes a full implementation of the Editor Mode for the Spil SDK, a permission request system for Android, several improvements in the configuration window as well as clearer issue checking
 * Chartboost parental gate implemented in iOS
 * Slight adjustments to the event sending for push notificaitons
 * Added automatic event sending for when an ad is displayed, clicked, dismissed and closed
 * Added permission request system for Android. The SDK now automatically request dangerous permissions at start-up (similar to how unity was doing it), but now a rationale is include for each permission. You also have the ability to disable this system and request the permissions manually when you need them during runtime.
 * A new look for the Spil SDK configuration windows have been added. You now have several tabs for each section, two new windows for documentation and release, as well as better build check-up for Android (hopefuly less issue will be reported now :) )


Version 2.2.5 *(26-10-2016)*
----------------------------
This version only has a few hotfixes for both Android and iOS
 * Added Custom Bundle Indentifier support for iOS
 * Fixed sending format for the TrackWalletInventoryEvent
 * iOS Spil SDK updated to v2.1.2
 * Android Spil SDK updated to v2.2.4


Version 2.2.4 *(20-10-2016)*
----------------------------
 * Fixed an iOS export issue.
 * + 1-5 fire damage.


Version 2.2.3 *(14-10-2016)*
----------------------------
This version brings multiple features of the Spil SDK to the Editor Mode, the Daily Bonus screen functionality as well as several bug fixes for both Android and iOS
 * iOS Spil SDK updated to v2.1.0
 * Android Spil SDK updated to v2.2.3
 * Added the following Spil SDK functionalities to the Unity Editor Mode: Game State, Packages, Config, Advertisement and Event Tracking. More will follow!
 * Several bug fixes for Android regarding the Wallet functionality
 * Added Vungle ad network inside Fyber
 * Updated Google Play Services to 9.6.1 (included also Google Play Games library in case you need it)
 * Bug fixes, code cleanup and improvements (for more details regarding native, check the Android and iOS repositories)


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
Tweaks & bug fixes. minor updates and bugfixes.
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
 * AndroidManifest.xml for google play measurements now intentionally crashes build untill it is updated by user (how to notes are included).
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
