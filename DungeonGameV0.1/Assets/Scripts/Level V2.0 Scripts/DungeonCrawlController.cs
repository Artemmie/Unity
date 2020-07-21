using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public enum Direction
{
    top = 0,
    left = 1,
    down = 2,
    right = 3

};
public class DungeonCrawlController : MonoBehaviour
{
    public static List<Vector2Int> positionsVisited = new List<Vector2Int>();
    private static readonly Dictionary<Direction, Vector2Int> directionMovementMap = new Dictionary<Direction, Vector2Int>
    {
        {Direction.top, Vector2Int.up},
        {Direction.left, Vector2Int.left},
        {Direction.down, Vector2Int.down},
        {Direction.right, Vector2Int.right}

    };
    public static List<Vector2Int> GenerateDungeon(DungeonGenerationData dungeonData)
    {
        List<DungeonCrawler> dungeonCrawlers = new List<DungeonCrawler>();
     //   Debug.Log("number of crawlers: " + dungeonData.numberOfCrawlers);
    //    Debug.Log("Min: " +dungeonData.iterationMin + "Max: " + dungeonData.iterationMax);
        for (int i = 0; i< dungeonData.numberOfCrawlers; i++)
        {
            dungeonCrawlers.Add(new DungeonCrawler(Vector2Int.zero));
        }
        int iterations = Random.Range(dungeonData.iterationMin, dungeonData.iterationMax);
    //    Debug.Log("Iterations: " + iterations);
        for (int i = 0; i < iterations; i++)
        {
     //       Debug.Log("i:" + i);
            foreach (DungeonCrawler dungeonCrawler in dungeonCrawlers)
            {
                Vector2Int newPos = dungeonCrawler.Move(directionMovementMap);
                Debug.Log("i: " + i + " Crawler: " + dungeonCrawler + " New Position: " + newPos.x + ":" + newPos.y);
                positionsVisited.Add(newPos);
            }
        }
        Debug.Log("Pos visited: " + positionsVisited.Count);
        return positionsVisited;
    }
}
