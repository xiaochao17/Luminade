using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RoadmapWalking : MonoBehaviour {


    private Rigidbody2D rb2d;
    private Coroutine change;

    [SerializeField] GameObject firstDoor;
    [SerializeField] GameObject secondDoor;
    [SerializeField] GameObject thirdDoor;
    [SerializeField] GameObject fourthDoor;
    [SerializeField] GameObject fifthDoor;

    [SerializeField] GameObject level1Button;
    [SerializeField] GameObject level2Button;
    [SerializeField] GameObject level3Button;
    [SerializeField] GameObject level4Button;
    [SerializeField] GameObject level5Button;



    public static Vector3 roadmapPosition;






    void Awake () {
        transform.position = roadmapPosition;

        if (GameManager.level1Done == true)
        {
            level2Button.SetActive(true);
        }
        if (GameManager.level2Done == true){
            level3Button.SetActive(true);

        }
        if (GameManager.level3Done == true)
        {

            level4Button.SetActive(true);
        }
        if (GameManager.level4Done == true)
        {
            level5Button.SetActive(true);
        }
        if (GameManager.level5Done == true)
        {
            SceneManager.LoadScene("Win");
            //TODO: WIN THE GAME AND SHOW CREDITS SCENE
        }

    }


    //CHANGE time to speed for itween
    void WalkingBetweenTwoPoints(Vector3 newPosition)
    {
        iTween.MoveTo(gameObject, newPosition, 1.5f);
    }
    IEnumerator ChangeScene(string sceneName){
        yield return new WaitForSeconds(1.5f);
        SceneManager.LoadScene(sceneName);
    }

    public void Level1(){
        GameManager.currentLevel = GameManager.LevelManager.LEVEL1;
        roadmapPosition = firstDoor.transform.position;
        roadmapPosition.z = -0.1f;
        WalkingBetweenTwoPoints(roadmapPosition);
        change = StartCoroutine(ChangeScene("Main"));

    }
    public void Level2()
    {
        GameManager.currentLevel = GameManager.LevelManager.LEVEL2;
        roadmapPosition = secondDoor.transform.position;
        roadmapPosition.z = -0.1f;
        WalkingBetweenTwoPoints(roadmapPosition);
        change = StartCoroutine(ChangeScene("Level2"));
    }
    public void Level3()
    {
        GameManager.currentLevel = GameManager.LevelManager.LEVEL3;
        roadmapPosition = thirdDoor.transform.position;
        roadmapPosition.z = -0.1f;
        WalkingBetweenTwoPoints(roadmapPosition);
        change = StartCoroutine(ChangeScene("Level3"));
    }
    public void Level4()
    {
        GameManager.currentLevel = GameManager.LevelManager.LEVEL4;
        roadmapPosition = fourthDoor.transform.position;
        roadmapPosition.z = -0.1f;
        WalkingBetweenTwoPoints(roadmapPosition);
        change = StartCoroutine(ChangeScene("Level4"));
    }
    public void Level5()
    {
        GameManager.currentLevel = GameManager.LevelManager.LEVEL5;
        roadmapPosition = fifthDoor.transform.position;
        roadmapPosition.z = -0.1f;
        WalkingBetweenTwoPoints(roadmapPosition);
        change = StartCoroutine(ChangeScene("Level5"));
    }



}
