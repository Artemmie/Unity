using UnityEngine;
using UnityEngine.UI;

public class Highscore : MonoBehaviour
{  
    private int highScore;
    private bool high = false;
    private void OnEnable()
    {
        if (Score.score > PlayerPrefs.GetInt("HighScore", highScore))
        {
            PlayerPrefs.SetInt("HighScore", Score.score);
            high = true;
        }
        highScore = PlayerPrefs.GetInt("HighScore", highScore);
        if (high)
        {
            GetComponent<Text>().text = "New Best: " + highScore.ToString();
            GetComponent<Text>().color = Color.red;
        }
        else GetComponent<Text>().text = "Best: " + highScore.ToString();
        
    }
}
