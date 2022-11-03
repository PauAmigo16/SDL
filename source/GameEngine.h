#pragma once
#include <SDL.h>
#include <cstdlib>
#include <ctime>
#include "GameObject.h"
#include "InputManager.h"
#include "SceneManager.h"

class GameEngine
{
private: 
	//------ EXECUTION CONTROL
	bool isRunning;

	//------ SDL
	SDL_Window* window;
	SDL_Renderer* renderer;

	int windowWidth;
	int windowHeight;

	GameObject logo;

	void InitSDL();
	void InitWindowAndRenderer();

	//------ EVENTS
	InputManager IM;

	//----- RENDER
	int RandomNum();
	void Render();



public:
	GameEngine(int x, int y);

	void Init();
	void Run();
	void Quit();

};

