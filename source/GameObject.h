#pragma once
#include <SDL.h>
#include <string>
#include <SDL_image.h>
#include <vector>
#include "Object.h"
#include "AnimatedImageRenderer.h"
#include <vector>

class GameObject : public Object
{
protected:
	std::vector<Renderer> renderers;

public:
	GameObject() = default;

	virtual void Load() override=0;
	virtual void Update() override = 0;
	virtual void Render() override = 0;

	std::vector<Renderer> GetRenderers();
};
