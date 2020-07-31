using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Audio;
using UnityEngine.Advertisements;
using Firebase.Analytics;

public class ManagerGame : MonoBehaviour, IUnityAdsListener
{
    
    [SerializeField] GameObject gameOverCanvas;
    [SerializeField] GameObject touchToPlayCanvas;
    [SerializeField] GameObject rocketCanvas;
    [SerializeField] GameObject fakePlane;
    [SerializeField] GameObject mainAudio;
    [SerializeField] GameObject plane2;
    [SerializeField] GameObject plane;
    [SerializeField] GameObject continueChat;
    [SerializeField] GameObject gameOverCanvasWithContinue;
    [SerializeField] GameObject[] menu;
    [SerializeField] GameObject[] startGame;
    private string GooglePlay_ID = "3722683";
    private string myPlacementId = "rewardedVideo";
    private bool testMode = false;
    private static bool replayAd = false;
    private static int continueCount = 0;
    private static int AdReplayAmount = 0;
    

    void Start()
    {
        Advertisement.AddListener(this);
        Advertisement.Initialize(GooglePlay_ID, testMode);
        StartCoroutine(OnStartAnimation());
    }
    public void GameOver()
    {
        if (continueCount < 2)
        {
            gameOverCanvasWithContinue.SetActive(true);
        }
        else
        {
            gameOverCanvas.SetActive(true);
        }
        rocketCanvas.SetActive(false);
        plane.SetActive(false);
        mainAudio.GetComponent<AudioSource>().mute = true;
        Time.timeScale = 0;
    }
    public void Replay()
    {
        SceneManager.LoadScene(0);
        continueCount = 0;
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
    IEnumerator OnStartAnimation()
    {
        yield return new WaitForSeconds(2.5f);          
        foreach(GameObject canvas in menu)
        {
            canvas.SetActive(true);
        }
        plane2.SetActive(false);
    }
    IEnumerator ContinueGame()
    {
        continueCount++;
        gameOverCanvasWithContinue.SetActive(false);
        plane.transform.position = new Vector3(plane.transform.position.x, 0, plane.transform.position.z);
        plane.transform.rotation = Quaternion.identity;
        plane.SetActive(true);
        rocketCanvas.SetActive(true);
        continueChat.SetActive(true);
        yield return new WaitForSecondsRealtime(3f);
        mainAudio.GetComponent<AudioSource>().mute = false;
        continueChat.SetActive(false);
        Time.timeScale = 1;
    }
    public void ShowInterstitialAd() 
    {
        if (AdReplayAmount > 2)
        {
            AdReplayAmount = 0;
            if (Advertisement.IsReady()) 
            {
                replayAd = true;
                Advertisement.Show();
            }
        }
        else 
        {
            AdReplayAmount++;
            Replay();
        }
    }
    public void ShowRewardedVideo() 
    {
        if (Advertisement.IsReady(myPlacementId)) 
        {
            replayAd = false;
            Advertisement.Show(myPlacementId);
        } 
    }
    public void OnUnityAdsDidFinish (string placementId, ShowResult showResult) 
    {
        if (showResult == ShowResult.Finished) 
        {   
            Firebase.Analytics.FirebaseAnalytics.LogEvent("finished_reward_ad");
            if (replayAd)
            {
                Replay();
            }
            else
            {
                StartCoroutine(ContinueGame());
            }   
        } 
        else if (showResult == ShowResult.Skipped) 
        {
            Firebase.Analytics.FirebaseAnalytics.LogEvent("skipped_an_ad");
            Replay();
        } 
        else if (showResult == ShowResult.Failed) 
        {
            Firebase.Analytics.FirebaseAnalytics.LogEvent("ad_failed");
            Replay();
        }
    }
    public void OnUnityAdsReady (string placementId) 
    {
        if (placementId == myPlacementId) 
        {
        }
    }
    public void OnUnityAdsDidError (string message) 
    {
    }
    public void OnUnityAdsDidStart (string placementId) 
    {
    } 
    public void OnDestroy() 
    {
        Advertisement.RemoveListener(this);
    }
}
