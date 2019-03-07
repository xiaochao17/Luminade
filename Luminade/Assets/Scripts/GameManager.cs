using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour {


    public static bool level1Done = false, level2Done = false, level3Done = false, level4Done = false, level5Done = false;

    public enum LevelManager
    {
        LEVEL1,
        LEVEL2,
        LEVEL3,
        LEVEL4,
        LEVEL5
    }

    public static LevelManager currentLevel;


    void Update () {

        // the level is done
        if (PlayerController.touchTheDoor){

            Invoke("ChangeTheLevel", 1f);
        }

        if (CameraMask.gameover == true){
            PlayerController.candyCount = 0;
            CameraMask.gameover = false;
            SceneManager.LoadScene(SceneManager.GetActiveScene().name);
        }

    }


    void ChangeTheLevel(){


        switch (currentLevel)
        {
            case LevelManager.LEVEL1:
                level1Done = true;
                break;
            case LevelManager.LEVEL2:
                level2Done = true;
                break;
            case LevelManager.LEVEL3:
                level3Done = true;
                break;
            case LevelManager.LEVEL4:
                level4Done = true;
                break;
            case LevelManager.LEVEL5:
                level5Done = true;
                break;
        }

        SceneManager.LoadScene("RoadMap");
        PlayerController.getKey = false;
        PlayerController.touchTheDoor = false;
    }
}
