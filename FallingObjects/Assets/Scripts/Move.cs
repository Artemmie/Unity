using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Move : MonoBehaviour
{
    public float minspeed;
    public float maxspeed;
    private float speed;
    // Start is called before the first frame update
    void Start()
    {
        speed = Random.Range(minspeed, maxspeed) + Score.score / 10;
    }

    // Update is called once per frame
    void Update()
    {
      transform.position += Vector3.left  * speed * Time.deltaTime;
    }
}
