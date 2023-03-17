using System.Collections;
using System.Collections.Generic;
using UnityEngine;
//관성의 저항이 덜한 컨트롤러 움직임 방법.
public class CONTROLmoveGetAxis : MonoBehaviour
{
    private Rigidbody playerRidigbody;
    public float speed = 1f;
    void Start()
    {
        playerRidigbody = GetComponent<Rigidbody>(); 
    }

    
    void Update()
    {
            Move();
    }

    void Move(){
        
        float xInput = Input.GetAxis("Horizontal");
        float zInput = Input.GetAxis("Vertical");

        float xSpeed = xInput*speed;
        float zSpeed = zInput*speed;

        Vector3 newVelocity = new Vector3(xSpeed,0f,zSpeed);
        playerRidigbody.velocity = newVelocity;

    }





}