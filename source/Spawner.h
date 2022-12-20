#pragma once
#include "Vector2.h"

template <typename T>

class Spawner
{
private:
	float maxSpawnTime;
	float minSpawnTime;
	float eTime;

	Vector2 startPosition;
	Vector2 startVelocity;

public:
	Spawner<T>()=default;

	T* Update(float dt);
};

