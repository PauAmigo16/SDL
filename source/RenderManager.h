#pragma once
#include <SDL.h>

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

	RenderManager* GetInstance();
	SDL_Renderer* GetRenderer();
};

