using UnityEngine;
using UnityEngine.SocialPlatforms;
using GooglePlayGames;
using GooglePlayGames.BasicApi;


public class GPGSAuthentication : MonoBehaviour
{
    public static PlayGamesPlatform platform;
    void Start()
    {
        if (platform == null)
        {
            PlayGamesClientConfiguration config = new PlayGamesClientConfiguration.Builder().Build();
            PlayGamesPlatform.InitializeInstance(config);
            PlayGamesPlatform.DebugLogEnabled = true;
            platform = PlayGamesPlatform.Activate();
        }
        Social.Active.localUser.Authenticate(success =>
        {
            if (success)
            {
                Debug.Log("Success!");
            }
            else
            {
                Debug.Log("Failed");
            }
        });
        Social.LoadScores(GPGSIds.leaderboard_high_score, scores =>
        {
            if (scores.Length > 0)
            {
                foreach (IScore score in scores)
                {
                    if (Social.localUser.id == score.userID)
                    {
                        PlayerPrefs.SetInt("HighScore", (int)score.value);
                    }
                }
            }
            else
            {
                Debug.Log("No scores loaded");
            }
        });
    }
}
