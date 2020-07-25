using UnityEngine;

public class PipeSpawner : MonoBehaviour
{
    public float maxTime = 1;
    private float timer = 0;
    [SerializeField] GameObject[] objects;
    public float height;
    void Update()
    {
        if(timer >maxTime)
        {
            GameObject newpipe = Instantiate(objects[Random.Range(0, objects.Length)]) as GameObject;
            newpipe.transform.position = transform.position + new Vector3(0, Random.Range(-height, height), 0);
            Destroy(newpipe, 7);
            timer = 0;
        }
        timer += Time.deltaTime;
        
    }
}
