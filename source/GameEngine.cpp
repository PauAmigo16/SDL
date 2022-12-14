#include "GameEngine.h"

GameEngine::GameEngine(int x, int y)
	: windowHeight(y), windowWidth(x), isRunning(true)
{
}

#pragma region INITIALIZATION

//Initializes SDL, windows and renderers
void GameEngine::Init()
{
	InitSDL();
	InitWindowAndRenderer();

	RM->LoadTextures(SM->GetScene("Gameplay"));

}

//Ensures that SDL is working and can run
void GameEngine::InitSDL()
{
	//Load SDL and check if it is correct
	int result = SDL_Init(SDL_INIT_VIDEO);

	bool success = result >= 0;

	if (!success)
		throw SDL_GetError();
}

//Create a window and a renderer
void GameEngine::InitWindowAndRenderer()
{
	int result = SDL_CreateWindowAndRenderer(windowWidth, windowHeight, SDL_WINDOW_SHOWN, &window, &renderer);
	
	bool success = result >= 0;

	if (!success)
		throw SDL_GetError();
}

#pragma endregion INITIALIZATION


#pragma region RENDER

//Game loop
void GameEngine::Run()
{
	//BEFORE THE GAME LOOP
	SM->SetScene("Splash Screen");

	//GAME LOOP
	while (isRunning)
	{
		IM->Listen();
		isRunning = !IM->GetQuitEvent();
		SM->GetCurrentScene()->Update(0.0f);

		RM->RenderScreen();
	}
}

int GameEngine::RandomNum()
{
	int num = rand() % 255;
	return num;
}

#pragma endregion RENDER

//Destroys all windows and renderers
void GameEngine::Quit()
{
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
	//Destroys all renderers
	//Destroys all windows
	//Quits SDL
}
