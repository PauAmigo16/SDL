#pragma once
#include <SDL.h>
#include <vector>
#include "Object.h"

#define RM RenderManager::GetInstance()

class RenderManager
{
private:
	static RenderManager* instance;
	SDL_Window* window;
	SDL_Renderer* renderer;

	RenderManager(int width, int height, int flags)
	{
		SDL_CreateWindowAndRenderer(width, height, flags, &window, &renderer);
	}

public:
	static const float windowWidth;
	static const float windowHeight;

	static RenderManager* GetInstance();
	SDL_Renderer* GetRenderer();

	void LoadTextures(std::vector<Object> Objects);
};

