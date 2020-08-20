using UnityEngine;
using UnityEngine.UI;
using GooglePlayGames;
using UnityEngine.SocialPlatforms;

public class Highscore : MonoBehaviour
{  
    private int highScore;
    private bool high = false;
    private void OnEnable()
    {
        if (Score.score > PlayerPrefs.GetInt("HighScore", highScore))
        {
            high = true;
            PlayerPrefs.SetInt("HighScore", Score.score);
            Social.ReportScore(Score.score, GPGSIds.leaderboard_high_score, (bool success) =>
            {
                if (success)
                {
                }
            });
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
