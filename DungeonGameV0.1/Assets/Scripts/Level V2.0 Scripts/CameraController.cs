using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{
    public static CameraController instance;
    public RoomV2 currRoom;
    [SerializeField] float moveSpeedWhenRoomChange;

    void Awake() 
    {
        instance = this;
    }
    void Update()
    {
        UpdatePositio();
    }

    private void UpdatePositio()
    {
        if (currRoom == null)
        {
            return;
        }
        Vector3 targetPos = GetCameraTargetPosition();
        transform.position = Vector3.MoveTowards(transform.position, targetPos, Time.deltaTime * moveSpeedWhenRoomChange);
    }

    private Vector3 GetCameraTargetPosition()
    {
        if(currRoom == null)
        {
            return Vector3.zero;
        }
        Vector3 targetPos = currRoom.GetRoomCenter();
        targetPos.z = transform.position.z;
        return targetPos;
    }
    public bool isSwitching()
    {
        return transform.position.Equals(GetCameraTargetPosition()) == false;
    }
}
