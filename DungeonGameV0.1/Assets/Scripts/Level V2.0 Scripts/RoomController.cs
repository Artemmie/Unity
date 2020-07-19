using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RoomInfo
{
    public string name;
    public int X;
    public int Y;
}
public class RoomController : MonoBehaviour
{
    public static RoomController instance;
    string currentWorldName = "Basement";
    RoomInfo currentLoadRoomData;
    Queue<RoomInfo> LoadRoomQueue = new Queue<RoomInfo>();
    public List<RoomV2> loadedRooms = new List<RoomV2>();
    bool isLoadingRoom = false;
    bool spawnedBossRoom = false;
    bool spawnedStatueRoom = false;
    bool updatedRooms = false;

    private RoomV2 currRoom;

    void Awake() 
    {
        instance = this;
    }
    private void Update() 
    {
        UpdateRoomQueue();
    }

    private void UpdateRoomQueue()
    {
        if (isLoadingRoom)
        {
            return;
        }
        if (LoadRoomQueue.Count == 0)
        {
            if (!spawnedBossRoom)
            {
                StartCoroutine(SpawnedBossRoom());
            }
            if(!spawnedStatueRoom)
            {
                StartCoroutine(SpawnedStatueRoom());
            }
            else if (spawnedBossRoom && spawnedStatueRoom && !updatedRooms)
            {
                foreach(RoomV2 room in loadedRooms)
                {
                    room.RemoveUnconnectedDoors();
                }
                UpdatedRooms();
                updatedRooms = true;
            }
            return;
        }
        currentLoadRoomData = LoadRoomQueue.Dequeue();
        isLoadingRoom = true;
        StartCoroutine(LoadRoomRoutine(currentLoadRoomData));
    }
    IEnumerator SpawnedBossRoom()
    {
        spawnedBossRoom = true;
        yield return new WaitForSeconds(0.4f);
        if (LoadRoomQueue.Count == 0)
        {
            RoomV2 bossRoom = loadedRooms[loadedRooms.Count - 1];
            RoomV2 tempRoom = new RoomV2(bossRoom.X,bossRoom.Y);
            Destroy(bossRoom.gameObject);
            var roomToRemove = loadedRooms.Single(r => r.X == tempRoom.X && r.Y == tempRoom.Y);
            loadedRooms.Remove(roomToRemove);
            loadRoom("End",tempRoom.X,tempRoom.Y);
        }
    }
    IEnumerator SpawnedStatueRoom()
    {
        spawnedStatueRoom = true;
        yield return new WaitForSeconds(0.8f);
        RoomV2 statueRoom = currRoom;
        if (LoadRoomQueue.Count == 0)
        {
            foreach (RoomV2 room in loadedRooms)
            {
                if (room.DoorsAmount() && !room.name.Contains("End"))
                {
                    statueRoom = room;
                    break;
                }
            }
            Debug.Log("Statue Room: " + statueRoom + "curr: " + currRoom);
            if (statueRoom == currRoom) 
            {
                yield break;
            }
            RoomV2 tempRoom = new RoomV2(statueRoom.X, statueRoom.Y);
            Destroy(statueRoom.gameObject);
            var roomToRemove = loadedRooms.Single(r => r.X == tempRoom.X && r.Y == tempRoom.Y);
            loadedRooms.Remove(roomToRemove);
            loadRoom("Statue", tempRoom.X, tempRoom.Y);
        }
    }

    public void loadRoom(string name, int x, int y)
    {
        if (doesRoomExist(x,y))
        {
            return;
        }
        RoomInfo newRoomData = new RoomInfo();
        newRoomData.name = name;
        newRoomData.X = x;
        newRoomData.Y = y;

        LoadRoomQueue.Enqueue(newRoomData);
    }
    IEnumerator LoadRoomRoutine(RoomInfo info)
    {
        string roomName = currentWorldName + info.name;
        AsyncOperation loadRoom = SceneManager.LoadSceneAsync(roomName, LoadSceneMode.Additive);
        while(loadRoom.isDone == false)
        {
            yield return null;
        }
    }
    public void RegisterRoom(RoomV2 room)
    {
        if (!doesRoomExist(currentLoadRoomData.X,currentLoadRoomData.Y))
        {
            room.transform.position = new Vector3(
                currentLoadRoomData.X * room.width,
                currentLoadRoomData.Y * room.height,
                0
            );
            room.X = currentLoadRoomData.X;
            room.Y = currentLoadRoomData.Y;
            room.name = currentWorldName + "-" + currentLoadRoomData.name + " " + room.X + ", " + room.Y;
            room.transform.parent = transform;

            isLoadingRoom = false;
            if (loadedRooms.Count == 0)
            {
                CameraController.instance.currRoom = room;
            }
            loadedRooms.Add(room);  
        }
        else
        {
            Destroy(room.gameObject);
            isLoadingRoom = false;

        }
    }
    public bool doesRoomExist(int x, int y)
    {
        return loadedRooms.Find(item => item.X == x && item.Y == y) != null;
    }
    public RoomV2 findRoom(int x, int y)
    {
        return loadedRooms.Find(item => item.X == x && item.Y == y);
    }

    public string GetRandomRoomName()
    {
        string[] possibleRooms = new string[]
        {
      //      "Empty",
            "Basic1",
       //     "Statue"
        };
        return possibleRooms[UnityEngine.Random.Range(0, possibleRooms.Length)];
    }
    public void OnPlayerEnterRoom(RoomV2 room)
    {
        CameraController.instance.currRoom = room;
        currRoom = room;
        StartCoroutine(RoomCoroutine());
    }
    public IEnumerator RoomCoroutine()
    {
        yield return new WaitForSeconds(0.7f);
        UpdatedRooms();
    }

    public void UpdatedRooms()
    {
        foreach (RoomV2 room in loadedRooms)
        {
            if(currRoom != room)
            {
                EnemyController[] enemies = room.GetComponentsInChildren<EnemyController>();
                if (enemies != null)
                {
                    foreach (EnemyController enemy in enemies)
                    {
                        enemy.inRoom = false;
                    }

                    foreach(Door door in room.GetComponentsInChildren<Door>())
                    {
                        door.doorCollider.SetActive(false);
                    }
                }
                else
                {
                    foreach( Door door in room.GetComponentsInChildren<Door>())
                    {
                        door.doorCollider.SetActive(false);
                    }  
                }
            }
            else
            {
                EnemyController[] enemies = room.GetComponentsInChildren<EnemyController>();
                if (enemies.Length > 0)
                {
                    foreach (EnemyController enemy in enemies)
                    {
                        enemy.inRoom = true;
                    }
                    foreach(Door door in room.GetComponentsInChildren<Door>())
                    {
                        Debug.Log("Door: " + door + "Door Collider: " + door.doorCollider);
                        door.doorCollider.SetActive(true);
                    }  
                }
                else
                {
                    foreach( Door door in room.GetComponentsInChildren<Door>())
                    {
                        door.doorCollider.SetActive(false);
                    }    
                }
            }
        }
    }
}
