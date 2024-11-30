using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollower : MonoBehaviour
{
    public Transform playerhead;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if(PlayerMovement.Instance != null)
        {
            this.transform.position = playerhead.position;
            this.transform.rotation = playerhead.rotation;
        }
    }
}
