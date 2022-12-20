#include "AABB.h"

//Returns true if there is a collision
bool AABB::CheckOverlapingAABB(const AABB* other)
{
	return (topLeft.x < other->bottomRight.x&&
		bottomRight.x > other->topLeft.x &&
		topLeft.y < other->bottomRight.y&&
		bottomRight.y > other->topLeft.y);
}

//Returns true if the point is inside 
bool AABB::CheckOverlapingPoint(Vector2 point)
{
	return (topLeft.x >= point.x &&
		bottomRight.x <= point.x &&
		topLeft.y >= point.y &&
		bottomRight.y <= point.y);
}

Vector2 AABB::GetTopLeft()
{
	return topLeft;
}

Vector2 AABB::GetBottomRight()
{
	return bottomRight;
}

float AABB::GetSize()
{
	return size;
}

void AABB::SetSize(float size)
{
	this->size = size;
}

void AABB::SetTopLeft(Vector2 vector)
{
	topLeft = vector;
}

void AABB::SetBottomRight(Vector2 vector)
{
	bottomRight = vector;
}
