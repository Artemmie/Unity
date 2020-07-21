using UnityEngine;
using UnityEngine.UI;

public class GameOverScore : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        GetComponent<Text>().text = "Score: " + Score.score.ToString();
    }
}
