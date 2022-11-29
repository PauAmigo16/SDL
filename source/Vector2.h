#pragma once
#include <math.h>

class Vector2
{
public:
	float x;
	float y;

	Vector2() = default;
	Vector2(float x, float y) : x(x), y(y) {}

	void Normalize();

	static Vector2 operator+ (Vector2 a, Vector2 b)
	{
		return Vector2(a.x + b.x, a.y + b.y);
	}
	static Vector2 operator- (Vector2 a, Vector2 b)
	{
		return Vector2(a.x - b.x, a.y - b.y);
	}
	static Vector2 operator* (Vector2 a, float scale)
	{
		return Vector2(a.x * scale, a.y * scale);
	}
	static Vector2 operator/ (Vector2 a, float scale)
	{
		return Vector2(a.x / scale, a.y / scale);
	}
	static bool operator== (Vector2 a, Vector2 b)
	{
		return (a.x == b.x && a.y == b.y);
	}
	static bool operator!= (Vector2 a, Vector2 b)
	{
		return !(a.x == b.x && a.y == b.y);
	}
};

