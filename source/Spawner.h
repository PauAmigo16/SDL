#pragma once
#include "Vector2.h"

template <template ObjectType>
class Spawner
{
private:
	float maxSpawnTime;
	float minSpawnTime;
	float eTime;

	Vector2 startPosition;
	Vector2 startVelocity;

public:
	Spawner<ObjectType>();

	ObjectType Update();
};

