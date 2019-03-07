using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ColorChange : MonoBehaviour {



	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		if (PlayerController.candyCount == 5){
			GetComponent<Image>().color = new Color32 (219,197,49,185);
		}
		if (PlayerController.candyCount == 10){
			GetComponent<Image>().color = new Color32 (138,253,92,185);
		}
	}
}
