using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DungeonGeneration : MonoBehaviour
{

    [SerializeField] private int numberOfRooms;
    private Room[,] rooms;
    private Room currentRoom;
    private static DungeonGeneration instance = null;
    private void Awake() 
    {
        if (instance == null)
        {
            DontDestroyOnLoad(this.gameObject);
            instance = this;
            this.currentRoom = GenerateDungeon();
        } 
        else
        {
            string roomPrefabName = instance.currentRoom.PrefabName();
            GameObject roomObject = (GameObject) Instantiate (Resources.Load(roomPrefabName));
            Destroy(this.gameObject);
        }
    }
    private void Start()
    {
        string roomPrefabName = this.currentRoom.PrefabName ();
        GameObject roomObject = (GameObject)Instantiate(Resources.Load(roomPrefabName));
        
    }
    private Room GenerateDungeon()
    {  
        int gridSize = 3 * numberOfRooms;
        rooms = new Room[gridSize, gridSize];
        Vector2Int initialRoomCoordinate = new Vector2Int ((gridSize /2) -1, (gridSize /2) - 1);
        Queue<Room> roomsToCreate = new Queue<Room>();
        roomsToCreate.Enqueue (new Room(initialRoomCoordinate.x, initialRoomCoordinate.y));
        List<Room> createdRooms = new List<Room>();
        while (roomsToCreate.Count > 0 && createdRooms.Count < numberOfRooms)
        {
            Room currentRoom = roomsToCreate.Dequeue();
            this.rooms[currentRoom.roomCoordinate.x, currentRoom.roomCoordinate.y] = currentRoom;
            createdRooms.Add(currentRoom);
            AddNeighbors(currentRoom,roomsToCreate);
        }
        foreach (Room room in createdRooms)
        {
            List<Vector2Int> neighborCoordinates = room.NeighborCoordinates();
            foreach (Vector2Int coordinate in neighborCoordinates)
            {
                Room neighbor = this.rooms[coordinate.x,coordinate.y];
                if(neighbor != null)
                {
                    room.Connect(neighbor);
                }
            }
        }
        return this.rooms[initialRoomCoordinate.x,initialRoomCoordinate.y];

    }
    private void AddNeighbors(Room currentRoom, Queue<Room> roomsToCreate)
    {
        List<Vector2Int> neighborCoordinates = currentRoom.NeighborCoordinates();
        List<Vector2Int> availaibleNeighbors = new List<Vector2Int>();
        foreach (Vector2Int coordinate in neighborCoordinates)
        {
            if (this.rooms[coordinate.x,coordinate.y] == null)
            {
                availaibleNeighbors.Add(coordinate);
            }
        }
        int numberofNeighbors = (int)Random.Range(1,availaibleNeighbors.Count);
        for (int neighborIndex = 0; neighborIndex < numberofNeighbors; neighborIndex++)
        {
            float randomNumber = Random.value;
            float roomFrac = 1f / (float)availaibleNeighbors.Count;
            Vector2Int chosenNeighbor = new Vector2Int(0,0);
            foreach (Vector2Int coordinate in availaibleNeighbors)
            {
                if (randomNumber < roomFrac)
                {
                    chosenNeighbor = coordinate;
                    break;
                }
                else
                {
                    roomFrac += 1f / (float)availaibleNeighbors.Count;
                }
            }
            roomsToCreate.Enqueue(new Room(chosenNeighbor));
            availaibleNeighbors.Remove(chosenNeighbor);
        }
    }
    private void PrintGrid() 
    {
        for (int rowIndex = 0; rowIndex < this.rooms.GetLength (1); rowIndex++) 
        {
            string row = "";
            for (int columnIndex = 0; columnIndex < this.rooms.GetLength (0); columnIndex++) 
            {
                if (this.rooms [columnIndex, rowIndex] == null) 
                {
                    row += "X";
                } 
                else 
                {
                    row += "R";
                }
            }
        }
    }
    public void MoveToRoom(Room room)
    {
        this.currentRoom = room;
    }
    public Room CurrentRoom()
    {
        return this.currentRoom;
    }
}
