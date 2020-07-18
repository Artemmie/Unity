﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Door : MonoBehaviour
{
    public enum DoorType
    {
        left, right, top, bottom
    }
    public DoorType doorType;
    public GameObject doorCollider;
    public GameObject wall;
    private GameObject player;
    private float widthoffset = 2f;
    private void Start() 
    {
        player = GameObject.FindGameObjectWithTag("Player");
    }
    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.tag == "Player")
        {
            switch(doorType)
            {
                case DoorType.bottom:
                    player.transform.position = new Vector2(transform.position.x, transform.position.y - widthoffset);
                break;
                case DoorType.left:
                    player.transform.position = new Vector2(transform.position.x - widthoffset, transform.position.y);
                break;
                case DoorType.right:
                    player.transform.position = new Vector2(transform.position.x + widthoffset, transform.position.y);
                break;
                case DoorType.top:
                    player.transform.position = new Vector2(transform.position.x, transform.position.y + widthoffset);
                break;
            }
        }
    }
}
