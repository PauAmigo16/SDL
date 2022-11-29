#pragma once
#include "GameObject.h"

class Log :
	public GameObject
{
private:
	int length;

public:
	Log(int length) :length(length) {}

	void Update()override;
	void Render()override;
};

