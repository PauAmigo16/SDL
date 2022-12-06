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
	Tile(bool isLethal, TileType type) : isLethal(isLethal), type(type)
	{
		switch (type)
		{
		case TileType::END:
			path = "../resources/EndTile.png";
			break;

		case TileType::ROAD:
			path = "../resources/RoadTile.png";
			break;

		case TileType::WATER:
			path = "../resources/WaterTile.png";
			break;

		case TileType::BRICK:
			path = "../resources/BrickTile.png";
			break;
		}
	}

	void Update() override;
	void Render() override;
};

