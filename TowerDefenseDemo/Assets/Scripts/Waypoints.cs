using UnityEngine;

public class Waypoints : MonoBehaviour {
    public static Transform[] pointsBlue;
    public static Transform[] pointsRed;
    void Awake()
    {
        if(CompareTag("Waypoint Blue"))
        {
            pointsBlue = new Transform[transform.childCount];
            for (int i = 0; i < pointsBlue.Length; i++)
            {
                pointsBlue[i] = transform.GetChild(i);
            }
        }
        if (CompareTag("Waypoint Red"))
        {
            pointsRed = new Transform[transform.childCount];
            for (int i = 0; i < pointsRed.Length; i++)
            {
                pointsRed[i] = transform.GetChild(i);
            }
        }
    }
}
