using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RoomV2 : MonoBehaviour
{

    public int width;
    public int height;
    public int X;
    public int Y;
    private bool updatedDoors = false;
    public RoomV2(int x, int y)
    {
        X = x;
        Y = y;
    }
    public Door leftDoor;
    public Door rightDoor;
    public Door topDoor;
    public Door bottomDoor;

    public List<Door> doors = new List<Door>();
    void Start()
    {
        if(RoomController.instance == null){
            Debug.Log("You pressed play in the worng scene!");
            return;
        }
        Door[] ds = GetComponentsInChildren<Door>();
        foreach(Door d in ds)
        {
            doors.Add(d);
            switch(d.doorType)
            {
                case Door.DoorType.right:
                    rightDoor = d;
                break;
                case Door.DoorType.left:
                    leftDoor = d;
                break;
                case Door.DoorType.top:
                    topDoor = d;
                break;
                case Door.DoorType.bottom:
                    bottomDoor = d;
                break;
            }
        }
        RoomController.instance.RegisterRoom(this);
    }
    void Update() 
    {
        if(name.Contains("End") && !updatedDoors)
        {
            RemoveUnconnectedDoors();
            updatedDoors = true;
        }
    }
    public void RemoveUnconnectedDoors()
    {
        foreach(Door door in doors)
        {
            switch(door.doorType)
            {
                case Door.DoorType.right:
                    if(getRight() != null)
                        door.gameObject.SetActive(false);
                break;
                case Door.DoorType.left:
                    if(getLeft() != null)
                        door.gameObject.SetActive(false);
                break;
                case Door.DoorType.top:
                    if(getTop() != null)
                        door.gameObject.SetActive(false);
                break;
                case Door.DoorType.bottom:
                    if(getBottom() != null)
                        door.gameObject.SetActive(false);
                break;
            }
        }
    }
    public RoomV2 getRight()
    {   
        if(RoomController.instance.doesRoomExist(X + 1,Y))
        {
            return RoomController.instance.findRoom(X + 1, Y);
        }
        else return null;
    }
    public RoomV2 getLeft()
    {
        if(RoomController.instance.doesRoomExist(X - 1,Y))
        {
            return RoomController.instance.findRoom(X - 1, Y);
        }
        else return null;
    }
    public RoomV2 getTop()
    {
        if(RoomController.instance.doesRoomExist(X,Y + 1))
        {
            return RoomController.instance.findRoom(X, Y + 1);
        }
        else return null;
    }
    public RoomV2 getBottom()
    {
        if(RoomController.instance.doesRoomExist(X,Y - 1))
        {
            return RoomController.instance.findRoom(X, Y - 1);
        }
        else return null;
    }
    void OnDrawGizmos() 
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireCube(transform.position, new Vector3(width,height,0));
    }
    public Vector3 GetRoomCenter()
    {
        return new Vector3(X * width, Y * height);
    }
    private void OnTriggerEnter2D(Collider2D other) 
    {
        if (other.tag == "Player")
        {
            RoomController.instance.OnPlayerEnterRoom(this);
        }
    }
}