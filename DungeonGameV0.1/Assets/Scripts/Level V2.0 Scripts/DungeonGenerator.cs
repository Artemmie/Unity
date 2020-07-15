using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DungeonGenerator : MonoBehaviour
{
    public DungeonGenerationData dungeonGenerationData;
    private List<Vector2Int> dungeonRooms;

    private void Start() 
    {
        dungeonRooms = DungeonCrawlController.GenerateDungeon(dungeonGenerationData);
        spawnRooms(dungeonRooms);
    }

    private void spawnRooms(IEnumerable<Vector2Int> rooms)
    {
        RoomController.instance.loadRoom("Start", 0, 0);
        foreach (Vector2Int roomLocation in rooms)
        {
            RoomController.instance.loadRoom(RoomController.instance.GetRandomRoomName(), roomLocation.x, roomLocation.y);
        }
    }
}
