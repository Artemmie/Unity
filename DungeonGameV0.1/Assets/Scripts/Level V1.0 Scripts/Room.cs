using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Room
{
    public Vector2Int roomCoordinate;
    public Dictionary<string, Room> neighbors;
    public Room(int xCoordinate, int yCoordinate)
    {
        this.roomCoordinate = new Vector2Int (xCoordinate, yCoordinate);
        this.neighbors = new Dictionary<string, Room>();
    }
    public Room (Vector2Int roomCoordinate)
    {
        this.roomCoordinate = roomCoordinate;
        this.neighbors = new Dictionary<string, Room>();
    }
    public List<Vector2Int> NeighborCoordinates() 
    {
        List<Vector2Int> neighborCoordinates = new List<Vector2Int> ();
        neighborCoordinates.Add (new Vector2Int(this.roomCoordinate.x, this.roomCoordinate.y - 1));
        neighborCoordinates.Add (new Vector2Int(this.roomCoordinate.x + 1, this.roomCoordinate.y));
        neighborCoordinates.Add (new Vector2Int(this.roomCoordinate.x, this.roomCoordinate.y + 1));
        neighborCoordinates.Add (new Vector2Int(this.roomCoordinate.x - 1, this.roomCoordinate.y));
        return neighborCoordinates;
    }
    public void Connect (Room neighbor) 
    {
        string direction = "";
        if (neighbor.roomCoordinate.y < this.roomCoordinate.y) 
        {
            direction = "N";
        }
        if (neighbor.roomCoordinate.x > this.roomCoordinate.x) 
        {
            direction = "E";
        }   
        if (neighbor.roomCoordinate.y > this.roomCoordinate.y) 
        {
            direction = "S";
        }
        if (neighbor.roomCoordinate.x < this.roomCoordinate.x) 
        {
            direction = "W";
        }
        this.neighbors.Add (direction, neighbor);
    }
    public string PrefabName()
    {
        string name = "Room_";
        foreach (KeyValuePair<string,Room> neighborPair in neighbors)
        {
            name += neighborPair.Key;
        }
        return name;
    } 
    public Room Neighbor(string direction)
    {
        return this.neighbors[direction];
    }
}

