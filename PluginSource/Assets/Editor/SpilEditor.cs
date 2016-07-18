using UnityEngine;
using System.Collections;
using UnityEditor;
using System.IO;

public class SpilEditor : EditorWindow 
{

	public string bundleID;

	[MenuItem ("Window/Spilgames", false, 1)]
	static void Init () {
		// Get existing open window or if none, make a new one:
		SpilEditor window = (SpilEditor)EditorWindow.GetWindow( typeof( SpilEditor ) );
		window.autoRepaintOnSceneChange = true;
		window.titleContent.text = "Spilgames";
		window.Show();
	}


	void OnGUI()
	{
		GUILayout.Label( "SpilSDK Config Import", EditorStyles.boldLabel );
		GUILayout.Label ("Bundle ID", EditorStyles.label);
		bundleID = GUILayout.TextField (bundleID);
		if (GUILayout.Button ("Create Default Configs")) {
			CreateDefaultConfigFiles ();
		}
	}


	void CreateDefaultConfigFiles(){
		if(bundleID == ""){
			throw new UnityException ("Bundle ID is Blank");
		}
		Debug.Log ("Getting Default Game Data for: " + bundleID);
		string streamingAssetsPath = Application.dataPath + "/StreamingAssets";
		Directory.CreateDirectory(streamingAssetsPath);
		File.Create (streamingAssetsPath + "/defaultGameConfig.json");
		File.Create (streamingAssetsPath + "/defaultGameData.json");
		File.Create (streamingAssetsPath + "/defaultPlayerData.json");
	}


}