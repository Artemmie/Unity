using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Audio;

public class ManagerGame : MonoBehaviour
{
    
    [SerializeField] GameObject gameOverCanvas;
    [SerializeField] GameObject touchToPlayCanvas;
    [SerializeField] GameObject rocketCanvas;
    [SerializeField] GameObject fakePlane;
    [SerializeField] GameObject mainAudio;
    [SerializeField] GameObject plane2;
    [SerializeField] GameObject[] menu;
    [SerializeField] GameObject[] startGame;


    public void GameOver()
    {
        gameOverCanvas.SetActive(true);
        rocketCanvas.SetActive(false);
        mainAudio.GetComponent<AudioSource>().mute = true;
        Time.timeScale = 0;
    }
    public void Replay()
    {
        SceneManager.LoadScene(0);
        Time.timeScale = 1;
    }

    public void StartGame()
    {
        foreach (GameObject objects in startGame)
        {
            objects.SetActive(true);
        }
        touchToPlayCanvas.SetActive(false);
        fakePlane.SetActive(false);
    }
    public void Rate()
    {
        Application.OpenURL("https://play.google.com/store/apps/details?id=com.Sunset.AvoidThePlanes");
    }
    private void Start() 
    {
        StartCoroutine(OnStartAnimation());   
    }

    IEnumerator OnStartAnimation()
    {
        yield return new WaitForSeconds(2.5f);          
        foreach(GameObject canvas in menu)
        {
            canvas.SetActive(true);
        }
        plane2.SetActive(false);
    }
}
