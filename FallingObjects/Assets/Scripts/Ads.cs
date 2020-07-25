using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Advertisements;

public class Ads : MonoBehaviour
{
    public string GooglePlay_ID = "3722683";
    public string placementId = "bannerPosition";
    public bool testMode = false;
    public static int amount = 0;

    
    // Start is called before the first frame update
    void Start()
    {
        Advertisement.Initialize(GooglePlay_ID, testMode);
        Advertisement.Banner.SetPosition(BannerPosition.BOTTOM_CENTER);
        StartCoroutine(ShowBannerWhenInitialized());
    }
    IEnumerator ShowBannerWhenInitialized()
    {
        while (!Advertisement.isInitialized)
        {
            yield return new WaitForSeconds(0.5f);
        }
        Advertisement.Banner.Show(placementId);
    }
    public void ShowInterstitialAd() 
    {
        if (amount > 3)
        {
            amount = 0;
            if (Advertisement.IsReady()) 
            {
                Advertisement.Show();
            } 
            else 
            {
                Debug.Log("Interstitial ad not ready at the moment! Please try again later!");
            }
        }
        else amount++;
    }
}
