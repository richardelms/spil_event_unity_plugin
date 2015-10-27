<h1>Spilgames Event System: Unity Plugin</h1>

<h3>1: Import the Unity package into your project</h3>

Important note for Android: Only import the google play services folder (Plugins/Android/google_play_services_lib) if you do not have it in your project already. Some other plugins, such as chartboost, will have imported it too.

<h3>2: Init the SDK</h3>

Create an empty game object in the first scene of your game (Splash or loading/initialisation screen) and attach the script named Spil.cs to it. The script can be found in the imported Spilgames folder.

<h3>3: Track events</h3>

To track an event, simply call Spil.TrackEvent(String eventName); from anywhere in your code.

To pass more information with the event, simply create a <String, String> Dictionary and pass that as the second parameter like so:

Dictionary<String, String> eventParams = new Dictionary<String,String>();

eventParams.add(“Level”,levelName);
eventParams.add(“Coins”,playerCoins);

Spil.TrackEvent(“PlayerDeath”, eventParams);

<h3>4: Setup the more apps page</h3>

To trigger the spilgames more apps page, simply call Spil.ShowSpilMoreApps();

Talk with your spil contact to decide where and when to call this.


