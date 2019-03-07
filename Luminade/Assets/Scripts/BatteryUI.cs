using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class BatteryUI : MonoBehaviour {


	int count = 0;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (PlayerController.candyCount > count) {
            gameObject.GetComponent<Slider>().value += 1;
            count = PlayerController.candyCount;
		}
	}
}
