using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Move : MonoBehaviour
{
    public float minspeed;
    public float maxspeed;
    private float speed;
    void Start()
    {
        speed = Random.Range(minspeed, maxspeed) + Score.score / 10;
    }
    void Update()
    {
      transform.position += Vector3.left  * speed * Time.deltaTime;
    }
}
