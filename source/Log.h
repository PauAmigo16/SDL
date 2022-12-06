#pragma once
#include "GameObject.h"

class Log :
	public GameObject
{
private:
	int length;

	std::string endLog;
	std::string midLog;
	std::string startLog;

public:
	Log(int length) :length(length) 
	{
		endLog = "../resources/LogEnd.png";
		midLog = "../resources/LogMiddle.png";
		startLog = "../resources/LogStart.png";
	}

	void Update()override;
	void Render()override;
};

