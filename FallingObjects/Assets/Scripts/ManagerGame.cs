using UnityEngine;
using UnityEngine.SceneManagement;

public class ManagerGame : MonoBehaviour
{
    public GameObject gameOverCanvas;
    public GameObject touchToPlayCanvas;
    public GameObject rocketCanvas;
    public GameObject spawner;
    public GameObject fakePlane;
    public GameObject plane;
    public void GameOver()
    {
        gameOverCanvas.SetActive(true);
        rocketCanvas.SetActive(false);
        Time.timeScale = 0;
    }
    public void Replay()
    {
        SceneManager.LoadScene(0);
        Time.timeScale = 1;
        fakePlane.SetActive(true);
        plane.SetActive(false);
    }

    public void StartGame()
    {
        touchToPlayCanvas.SetActive(false);
        rocketCanvas.SetActive(true);
        spawner.SetActive(true);
        fakePlane.SetActive(false);
        plane.SetActive(true);

    }
    public void Rate()
    {
        Application.OpenURL("https://play.google.com/store/apps/details?id=com.Sunset.AvoidThePlanes");
    }
}
