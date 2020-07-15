using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GridController : MonoBehaviour
{
    public RoomV2 room;
    [System.Serializable]
    public struct Grid
    {
        public int columns, rows;
        public float vericalOffset, horizontalOffset;

    }
    public Grid grid;
    public GameObject grindTile;
    public int tmpOffset = 2;
    public List<Vector2> availaiblePoints = new List <Vector2>();
    void Awake()
    {
        room = GetComponentInParent<RoomV2>();
        grid.columns = room.width - 2;
        grid.rows = room.height - tmpOffset;
        GenerateGrid();
    }

    private void GenerateGrid()
    {
        grid.vericalOffset += room.transform.localPosition.y;
        grid.horizontalOffset += room.transform.localPosition.x;

        for (int y = 0; y < grid.rows; y++)
        {
            for (int x = 0; x < grid.columns; x++)
            {
                GameObject go = Instantiate(grindTile,transform);
                go.GetComponent<Transform>().position = new Vector2(x - (grid.columns - grid.horizontalOffset), y - (grid.rows - grid.vericalOffset));
                go.name = "X: " + x + "Y: " + y;
                availaiblePoints.Add(go.transform.position);
                go.SetActive(false);
            }
        }
        GetComponentInParent<ObjectRoomSpawner>().InitialiseObjectSpawning();
    }
}
