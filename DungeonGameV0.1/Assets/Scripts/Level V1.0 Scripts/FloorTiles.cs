using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FloorTiles : MonoBehaviour
{

    [SerializeField] GameObject[] tiles;
    [SerializeField] Vector2 tileStartPos;
    [SerializeField] Vector2 tileSpacing;
    [SerializeField] int gridWdith;
    [SerializeField] int gridHeight;
    public RoomV2 room;
    
    void Awake()
    {
        room = GetComponentInParent<RoomV2>();
        generateTiles();
    }

    private void generateTiles()
    {
        tileStartPos.y += room.transform.localPosition.y;
        tileStartPos.x += room.transform.localPosition.x;
        Debug.Log("The pos is now: " + tileStartPos);
        tileSpacing = tiles[0].GetComponent<Renderer>().bounds.size;
        for (int i = 0; i < gridHeight; i++)
        {
            for (int j = 0; j < gridWdith; j++)
            {
                
                int randomTile = Random.Range(0, tiles.Length);
                int randomFlip = Random.Range(1, 11);
                if (randomFlip <= 5)
                {
                    tiles[randomTile].GetComponent<SpriteRenderer>().flipY = true;
                    if (randomFlip <= 2) tiles[randomTile].GetComponent<SpriteRenderer>().flipX = true;
                }
                else 
                {
                    tiles[randomTile].GetComponent<SpriteRenderer>().flipX = false;
                    tiles[randomTile].GetComponent<SpriteRenderer>().flipY = false;
                }
                GameObject go = Instantiate (tiles[randomTile], transform);
                go.GetComponent<Transform>().position =  new Vector2(tileStartPos.x + (j * tileSpacing.x), tileStartPos.y + (i * tileSpacing.y));
                go.name = "Tile number" + i + j;
            }
        }
    }
}
