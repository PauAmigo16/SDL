#pragma once
#include "Spawner.h"
#include <vector>
#include <string>

class LevelLoader
{
public:
	LevelLoader();
	std::vector<Spawner> LoadLevel(std::string path);
};

