#include "TimeManager.h"

TimeManager* TimeManager::GetInstance()
{
   if (instance == nullptr)
        instance = new TimeManager();

    return instance;
}
