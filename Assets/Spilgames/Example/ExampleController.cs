using UnityEngine;
using System.Collections;

//include this to get access to dictinoaries
using System.Collections.Generic;

public class ExampleController : MonoBehaviour {



	//track a simple event with no parameters
	public void TrackEventSimple(){
		//just pass a string to the spil server
		Spil.TrackEvent ("SimpleEvent");
	}
	
	//or track an event with more data by passing a dictionary as well as an event name
	public void TrackEventWithParamsExample(){
		//create a string string dictionary
		Dictionary<string,string> eventParams = new Dictionary<string, string> ();
		
		//fill it with the info you would like to track, add as much as you like, the more info the better :D
		eventParams.Add("ExampleParamKey1","ExampleParamValue1");
		eventParams.Add("ExampleParamKey2","ExampleParamValue2");
		
		//send it along to the spil server
		Spil.TrackEvent ("ExampleEventWithParams", eventParams);
	}
	
	
	//to show the spil more apps page, just call it like this
	public void MoreApps(){
		Spil.ShowSpilMoreApps ();
	}
	

}
