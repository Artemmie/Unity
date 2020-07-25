using UnityEngine;
using UnityEngine.SceneManagement;

public class ManagerGame : MonoBehaviour
{
    public GameObject gameOverCanvas;
    public GameObject touchToPlayCanvas;
    public GameObject rocketCanvas;

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
        rocketCanvas.SetActive(true);
    }
    public void Rate()
    {
        Application.OpenURL("https://play.google.com/store/apps/details?id=com.Sunset.AvoidThePlanes");
    }
}
