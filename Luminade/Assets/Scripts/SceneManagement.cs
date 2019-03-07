using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneManagement : MonoBehaviour {


    public void LoadMenuScene()
    {
        GameManager.level1Done = false;
        GameManager.level2Done = false;
        GameManager.level3Done = false;
        GameManager.level4Done = false;
        GameManager.level5Done = false;
        SceneManager.LoadScene("Menu");
    }
    public void GoToRoadMap(){
        RoadmapWalking.roadmapPosition = new Vector3(-7f,-2f,-0.1f);
        SceneManager.LoadScene("RoadMap");
    }
    public void LoadCreditsScene()
    {
        SceneManager.LoadScene("Credit");
    }
    public void QuitApp(){
        Application.Quit();
    }



    public void LoadMainScene()
    {
        SceneManager.LoadScene("Main");
    }
    public void GoToLevel2(){
        SceneManager.LoadScene("Level2");
    }
    public void GoToLevel3()
    {
        SceneManager.LoadScene("Level3");

    }
    public void GoToLevel4()
    {
        SceneManager.LoadScene("Level4");

    }
    public void GoToLevel5()
    {
        SceneManager.LoadScene("Level5");

    }





}
