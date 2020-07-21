using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ManagerGame : MonoBehaviour
{
    public GameObject gameOverCanvas;
    public GameObject touchToPlayCanvas;

    private void Start()
    {
        Time.timeScale = 0;
    }
    public void GameOver()
    {
        gameOverCanvas.SetActive(true);
        Time.timeScale = 0;
    }
    public void Replay()
    {
        SceneManager.LoadScene(0);
    }

    public void StartGame()
    {
        Time.timeScale = 1;
        touchToPlayCanvas.SetActive(false);
    }
    public void Rate()
    {
        Application.OpenURL("market://details?id=YOUR_ID");
    }
}
