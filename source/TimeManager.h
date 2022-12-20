#pragma once
#include <SDL.h>

#define TM TimeManager::GetInstance()

class TimeManager
{
private:
	float dt;

	static TimeManager* instance;
	
	TimeManager() = default;

public:
	static const float FPS;
	static const float TICK;

	static TimeManager* GetInstance();

	void Update();

	float GetCurrentTime();
	float GetDt();
};

