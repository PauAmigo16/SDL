#pragma once
#include "GameObject.h"

enum class TileType { END, ROAD, WATER, BRICK };

class Tile :
	public GameObject
{
private:
	bool isLethal;

	std::string path;

	TileType type;

public:
	Tile(bool isLethal, TileType type);

	void Load() override;
	void Update() override;
	void Render() override;
};

