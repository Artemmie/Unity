using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FloorTiles : MonoBehaviour
{
    [SerializeField] GameObject[] tiles;
    [SerializeField] Vector3 tileStartPos;
    Vector2 tileSpacing;
    [SerializeField] int gridWdith;
    [SerializeField] int gridHeight;

    void Start()
    {
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
                GameObject go = Instantiate(tiles[randomTile], new Vector3(tileStartPos.x + (j * tileSpacing.x), tileStartPos.y + (i * tileSpacing.y)), Quaternion.identity) as GameObject;
                go.transform.parent = GameObject.Find("Floor").transform;
            }
        }
    }


}
