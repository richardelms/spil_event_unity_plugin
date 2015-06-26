using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SpilDemoScript : MonoBehaviour {

	public void SendExampleEvent(){
		Dictionary<string,string> events = new Dictionary<string, string> ();
		events.Add ("Example", "Hello World");
		Spil.trackEvent ("TEST", events);
	}
	

}
