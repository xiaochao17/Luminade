using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PlayerController : MonoBehaviour {


    [SerializeField] float speed = 3f;
    [SerializeField] GameObject keyPrefab;
    [SerializeField] AudioClip levelCompleteSound;
    [SerializeField] AudioClip getKeySound;
    [SerializeField] Vector3 keyPosition;

    protected Joystick joystick;
    private Rigidbody2D rb2D;
    private Animator animator;
    private SpriteRenderer spriteRenderer;

    private bool facingLeft = false;
    private bool facingUp = false;

    public static int candyCount = 0;


    public static bool getKey = false;
    public static bool touchTheDoor = false;
    public static bool touchEnemy = false;

    void Awake () {
        joystick = FindObjectOfType<Joystick>();
        rb2D = GetComponent<Rigidbody2D>();
        spriteRenderer = GetComponent<SpriteRenderer>();
        animator = GetComponent<Animator>();
	}
	
	void Update () {

        //get x y absolute speed
        float xVelocity = (joystick.Horizontal + Input.GetAxis("Horizontal")) * speed;
        float yVelocity = (joystick.Vertical + Input.GetAxis("Vertical")) * speed;
        //add the speed 
        rb2D.velocity = new Vector3(xVelocity, yVelocity, 0f);
        float velocityValue = Vector3.Magnitude(rb2D.velocity);

        //change player animation
        animator.SetFloat("Speed", Mathf.Abs(velocityValue));
        if (facingLeft&&xVelocity>0){
            facingLeft = false;
            spriteRenderer.flipX = false;
        }
        else if (!facingLeft && xVelocity <0){
            facingLeft = true;
            spriteRenderer.flipX = true;
        }
        if (yVelocity>0){
            facingUp = true;
            animator.SetBool("UpMovement", facingUp);
        }
        else{
            facingUp = false;
            animator.SetBool("UpMovement", facingUp);
        }

        //check if all thecandies get eaten
        if (candyCount >=20){
            candyCount = 0;
            Instantiate(keyPrefab, keyPosition, Quaternion.identity);

        }
        print(candyCount);



    }

    private void FixedUpdate()
    {

    }




    private void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.tag == "SpecialItem")
        {
            CameraMask.getSpecialItem = true;
        }
        if (collision.gameObject.tag == "Enemy"){
            touchEnemy = true;
        }
        if (collision.gameObject.tag == "Candy"){
            candyCount += 1;

        }
        if (collision.gameObject.tag == "Key"){
            getKey = true;
            AudioSource.PlayClipAtPoint(getKeySound, transform.position);
        }
        if (collision.gameObject.tag == "Door" && getKey)
        {
            touchTheDoor = true;
            AudioSource.PlayClipAtPoint(levelCompleteSound, transform.position);
        }
    }


}
