using UnityEngine;

public class ItemsSpawner : MonoBehaviour
{
    [SerializeField] GameObject[] items;

    void Start() 
    {
        GameObject i = Instantiate(items[Random.Range(0, items.Length)], transform.position, Quaternion.identity) as GameObject;
    }
}
