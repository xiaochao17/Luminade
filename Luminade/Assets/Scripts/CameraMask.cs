using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMask : MonoBehaviour {


    private float timer = 0f;

    public static bool getSpecialItem = false;
    public static bool gameover = false;

    [Header("Scaling Parameters")]
    [SerializeField] float scalingCoefficient = 0.01f;
    [SerializeField] float minScale = 0.1f;





	void Update () {
    

        if (transform.localScale.x>minScale){
            //decrease the radius of the camera mask
            if (timer > Time.deltaTime){
                timer = 0f;
                transform.localScale -= new Vector3(scalingCoefficient, scalingCoefficient, 0);
            }
            //increase the radius of the camera mask if special item gets picked up
            if (getSpecialItem == true)
            {
                getSpecialItem = false;
                transform.localScale += new Vector3(scalingCoefficient * 20f, scalingCoefficient * 20f, 0);
            }
            if (PlayerController.touchEnemy == true){
                PlayerController.touchEnemy = false;
                GetComponent<AudioSource>().Play();
                transform.localScale -= new Vector3(scalingCoefficient*30f, scalingCoefficient*30f, 0);

            }
        }

        // if the camera mask is too small, end the game
        else{
            gameover = true;
            transform.localScale = new Vector3(2f, 2f, 1f);
        }




        timer += 0.01f;

    }
}
