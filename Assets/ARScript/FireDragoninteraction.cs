using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FireDragoninteraction : MonoBehaviour {

	float speed = 200;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		Vector3 mMoveMent = new Vector3 (Input.acceleration.x * speed * Time.deltaTime,Input.acceleration.y * speed * Time.deltaTime);//Time.deltaTime:完成上一帧
		transform.Translate(mMoveMent);
	}
}
