using UnityEngine;
using UnityEngine.UI;

public class GameOverScore : MonoBehaviour
{
    private void OnEnable()
    {
        GetComponent<Text>().text = "Score: " + Score.score.ToString();
    }
}
