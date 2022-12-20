#include "HighscoreManager.h"

HighscoreManager* HighscoreManager::GetInstance()
{
    if (instance == nullptr)
        instance = new HighscoreManager();

    return instance;
}

std::map<int, std::string> HighscoreManager::GetScores()
{
    return scores;
}
