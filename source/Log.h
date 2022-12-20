#pragma once
#include "GameObject.h"

class Log :
	public GameObject
{
private:
	int length;

	std::string startLogPath;
	std::string midLogPath;
	std::string endLogPath;

public:
	Log(int length);

	void Load() override;
	void Update() override;
	void Render() override;
};

