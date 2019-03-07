using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PaueGame : MonoBehaviour {


    [SerializeField] GameObject player;
    [SerializeField] GameObject cameraMask;
    [SerializeField] GameObject enemy1;
    [SerializeField] GameObject enemy2;
    [SerializeField] GameObject enemy3;

    [SerializeField] GameObject pauseScreen;



    public void PauseTheGame()
    {
        player.GetComponent<PlayerController>().enabled = false;
        enemy1.GetComponent<EnemyAI>().enabled = false;
        enemy1.GetComponent<Enemy>().enabled = false;
        enemy2.GetComponent<EnemyAI>().enabled = false;
        enemy2.GetComponent<Enemy>().enabled = false;
        enemy3.GetComponent<EnemyAI>().enabled = false;
        enemy3.GetComponent<Enemy>().enabled = false;

        cameraMask.GetComponent<CameraMask>().enabled = false;
        pauseScreen.SetActive(true);
    }
    public void ResumeTheGame()
    {
        pauseScreen.SetActive(false);
        print("yes");
        player.GetComponent<PlayerController>().enabled = true;
        enemy1.GetComponent<EnemyAI>().enabled = true;
        enemy1.GetComponent<Enemy>().enabled = true;
        enemy2.GetComponent<EnemyAI>().enabled = true;
        enemy2.GetComponent<Enemy>().enabled = true;
        enemy3.GetComponent<EnemyAI>().enabled = true;
        enemy3.GetComponent<Enemy>().enabled = true;
        cameraMask.GetComponent<CameraMask>().enabled = true;
    }
    public void QuitAppInLevel()
    {
        Application.Quit();
    }


}
