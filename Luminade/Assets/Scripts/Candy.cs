using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Candy : MonoBehaviour {

    public Transform cameraposition;
    [SerializeField] float speed = 2.5f;
    private Color newColor;

    private bool catchif = false;

    private void Start()
    {
        newColor = GetComponent<SpriteRenderer>().color;
        newColor.a = 0;
    }

    private void Update()
    {
        if(catchif){
            transform.position = Vector3.MoveTowards(transform.position, cameraposition.position, speed/10f);
            iTween.ColorTo(this.gameObject, newColor, 3f);
        }
    }


    void MoveToExample(){
        iTween.MoveTo(this.gameObject, iTween.Hash("position", cameraposition.position,"speed",speed,
                                                   "easetype",iTween.EaseType.easeInOutSine));
        iTween.ColorTo(this.gameObject, newColor, 2f);
    }


    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            GetComponent<PolygonCollider2D>().enabled = false;
            catchif = true;
            //MoveToExample();
            //Destroy(gameObject);
        }
    }


}
