#pragma once
#include <SDL.h>
#include <vector>
#include "Object.h"
#include "SceneManager.h"
#include "InputManager.h"

#define RM RenderManager::GetInstance()

class RenderManager
{
private:
	static RenderManager* instance;
	SDL_Window* window;
	SDL_Renderer* renderer;

	static const int windowWidth=224;
	static const int windowHeight =240;

	RenderManager(int width, int height, int flags)
	{
		SDL_CreateWindowAndRenderer(width, height, flags, &window, &renderer);
	}
public:
	int currentWinWidth;
	int currentWinHeight;

	static RenderManager* GetInstance();
	SDL_Renderer* GetRenderer();

	void LoadTextures(Scene*);
	void RenderScreen();
};

