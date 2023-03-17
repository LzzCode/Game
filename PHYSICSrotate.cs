using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//벡터값으로 오브젝트를 회전시키는 방법
public class PHYSICSrotate : MonoBehaviour
{

    public float rotationSpeed =1f;

    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(0f,rotationSpeed*Time.deltaTime,0f);
    }
}
