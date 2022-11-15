#pragma once
#include <SDL_image.h>
#include "Vector2.h"

class Renderer
{
protected:
	SDL_Texture* texture;
	SDL_Color color;
	SDL_Rect sourceRect;
	SDL_Rect targetRect;

	Vector2 Scale;

	float alpha;
	float rotation;

public:
	Renderer(SDL_Color color, float alpha, float rotation, SDL_Rect sourceRect, SDL_Rect targetRect) : color(color), alpha(alpha), rotation(rotation), sourceRect(sourceRect), targetRect(targetRect) {}
	void Load()
};

