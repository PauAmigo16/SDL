#pragma once
#include "Transform.h"
#include "AABB.h"
#include "Vector2.h"

class Object
{
protected:
	Transform transform;
	AABB boundingBox;
	Vector2 velocity;

public:
	Object() = default;

	virtual void Update() = 0;
	virtual void Render() = 0;
	virtual void Load() = 0;

	Transform GetTransform();
	AABB GetBoundingBox();
	Vector2 GetVelocity();

	void SetPosition(Vector2 p);
	void SetRotation(float r);
	void SetScale(Vector2 s);
	void SetTransform(Transform t);
	void SetVelocity(Vector2 v);
};

