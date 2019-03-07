using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour {


    [SerializeField] GameObject player;
    [SerializeField] float watchDistance=10f;
    [SerializeField] float upleft;
    [SerializeField] float upright;
    [SerializeField] float downleft;
    [SerializeField] float downright;


    enum EnemyBehavior{
        CHASE,
        MOVE
    }

    EnemyBehavior currentBehavior;

    private void Awake()
    {
        currentBehavior = EnemyBehavior.MOVE;
    }


	
	// Update is called once per frame
	void Update () {

        switch (currentBehavior){
            case EnemyBehavior.CHASE:
                GetComponent<EnemyAI>().enabled = true;
                break;
            case EnemyBehavior.MOVE:
                GetComponent<EnemyAI>().enabled = false;
                break;
        }
	}

    private void FixedUpdate()
    {
        float distance = Vector3.Distance(transform.position, player.transform.position);
        if (distance<watchDistance){
            currentBehavior = EnemyBehavior.CHASE;
        }
        else{
            currentBehavior = EnemyBehavior.MOVE;
        }
    }

}
