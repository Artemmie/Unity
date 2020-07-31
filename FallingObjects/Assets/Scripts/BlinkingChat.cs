using System.Collections;
using UnityEngine;
using UnityEngine.UI;

public class BlinkingChat : MonoBehaviour
{
    Text text;
    void Start()
    {
        text = GetComponent<Text>();
        StartBlinking();
    }
    IEnumerator Blink()
    {
        while (true)
        {
            text.color = new Color(text.color.r, text.color.g, text.color.b, 1);
            yield return new WaitForSeconds(1f);
            text.color = new Color(text.color.r, text.color.g, text.color.b, 0);
            yield return new WaitForSeconds(1f);
        }
    
    }
    void StartBlinking()
    {
        StartCoroutine("Blink");
    }
}