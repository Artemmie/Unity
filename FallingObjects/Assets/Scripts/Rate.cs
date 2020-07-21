using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rate : MonoBehaviour
{
    // Start is called before the first frame update
    public void Start()
    {
        Application.OpenURL("market://details?id=YOUR_ID");
    }

}
