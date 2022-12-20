#pragma once
#include "Vector2.h"

class Transform
{
public:
	Vector2 position;
	Vector2 scale;

	float rotation;

	Transform()=default;
	Transform(Vector2 position, float rotation, Vector2 scale) : position(position), rotation(rotation), scale(scale) {}

};

