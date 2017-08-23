#include "FlyCamera.h"



FlyCamera::FlyCamera()
{
}


FlyCamera::~FlyCamera()
{
}

void SetLookAt(vec3 eye, vec3 center, vec3 up) 
{
	vec3 f = eye - center;
	vec3 z = glm::normalize<vec3>(f);
	vec3 s = glm::cross(up, z);
	vec3 x = glm::normalize<vec3>(s);
	vec3 u = glm::cross(z, x);
	vec3 y = glm::normalize<vec3>(u);


}