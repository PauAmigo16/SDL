#include "TimeManager.h"

TimeManager* TimeManager::instance = nullptr;

const float FPS = 60.0f;
const float Tick = 1.0f / 60.0f;

TimeManager* TimeManager::GetInstance()
{
   if (instance == nullptr)
        instance = new TimeManager();

    return instance;
}

float TimeManager::GetDt()
{
    return dt;
}
