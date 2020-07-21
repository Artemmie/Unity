using UnityEngine;

public class PipeSpawner : MonoBehaviour
{
    public float maxTime = 1;
    private float timer = 0;
    [SerializeField] GameObject[] objects;
    public float height;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(timer >maxTime)
        {
            GameObject newpipe = Instantiate(objects[Random.Range(0, objects.Length)]) as GameObject;
            newpipe.transform.position = transform.position + new Vector3(0, Random.Range(-height, height), 0);
            Destroy(newpipe, 15);
            timer = 0;
        }
        timer+= Time.deltaTime;
        
    }
}
