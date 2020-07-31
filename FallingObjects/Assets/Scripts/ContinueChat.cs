using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ContinueChat : MonoBehaviour
{
    Text text;
    public static int countdown;
    private void OnEnable() 
    {
        
        text = GetComponent<Text>();
        StartBlinking();
    }
    
    IEnumerator Blink()
    {
        while (true)
        {
            text.text = countdown.ToString();
            text.color = new Color(text.color.r, text.color.g, text.color.b, 1);
            yield return new WaitForSecondsRealtime(0.5f);
            text.color = new Color(text.color.r, text.color.g, text.color.b, 0);
            yield return new WaitForSecondsRealtime(0.5f);
            countdown--;
        }
    }
    public void StartBlinking()
    {
        countdown = 3;
        StartCoroutine("Blink");
    }
}
