#include "Object.h"

Transform Object::GetTransform()
{
    return transform;
}

AABB Object::GetBoundingBox()
{
    return boundingBox;
}

Vector2 Object::GetVelocity()
{
    return velocity;
}

void Object::SetPosition(Vector2 p)
{
    transform.position = p;
}

void Object::SetRotation(float r)
{
    transform.rotation = r;
}

void Object::SetScale(Vector2 s)
{
    transform.position = s;
}

void Object::SetTransform(Transform t)
{
    transform = t;
}

void Object::SetVelocity(Vector2 v)
{
    velocity = v;
}
