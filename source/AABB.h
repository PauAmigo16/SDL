#pragma once
#include "Vector2.h"

class AABB
{
private:
	Vector2 topLeft;
	Vector2 bottomRight;

	float size;

public:
	AABB() = default;
	AABB(Vector2 topLeft, float size) 
		: topLeft(topLeft), size(size)
	{
		bottomRight.x = topLeft.x + size;
		bottomRight.y = topLeft.y + size;
	}

	bool CheckOverlapingAABB(const AABB* other);
	bool CheckOverlapingPoint(Vector2 point);

	float GetSize();

	Vector2 GetTopLeft();
	Vector2 GetBottomRight();

	void SetSize(float size);
	void SetTopLeft(Vector2 vector);
	void SetBottomRight(Vector2 vector);
};

