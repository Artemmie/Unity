using UnityEngine;
using UnityEngine.UI;

public class Rocket : MonoBehaviour
{
    public static int rocket = 0;
    public GameObject planeWithoutRockets;
    public GameObject planeWithRockets;
    void Start()
    {
        rocket = 0;
    }
    void Update()
    {
        GetComponent<Text>().text = rocket.ToString();
        if (rocket > 0)
        {
            planeWithoutRockets.SetActive(false);
            planeWithRockets.SetActive(true);
        }
        else
        {
            planeWithoutRockets.SetActive(true);
            planeWithRockets.SetActive(false);
        }
    }
}
