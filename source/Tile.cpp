#include "Tile.h"

Tile::Tile(bool isLethal, TileType type) : isLethal(isLethal), type(type)
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
	renderers.push_back(ImageRenderer());
}

void Tile::Load()
{
	renderers[0].Load(path);
}