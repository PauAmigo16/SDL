#pragma once
#include "GameObject.h"

class Turtles :
	public GameObject
{
private:
	int length;

	std::string path;

public:
	Turtles(int length) : length(length)
	{
		path = "../resources/Turtle.png";
	}

	virtual void Update() override;
	virtual void Render() override;
};

