#pragma once
#include "RankingScene.h"
#include "GameplayScene.h"
#include <map>
#include <string>

#define HM HighscoreManager::GetInstance()

class HighscoreManager
{
private:
	HighscoreManager* instance;
	std::map<int, std::string> scores;

	HighscoreManager() = default;

public:
	HighscoreManager* GetInstance();

	void LoadScores(std::string path);
	void SaveScores(std::string path);
	void AddScores(std::string path);
	std::map<int, std::string> GetScores();
};

