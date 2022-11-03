#include "SplashScreenScene.h"

void SplashScreenScene::Update(float dt)
{
	if (IM->CheckKeyState(SDLK_SPACE, PRESSED))
		SM->SetScene("MainMenu");
}

void SplashScreenScene::Render()
{
}

void SplashScreenScene::OnEnter()
{
	std::cout << "Entering splash screen" << std::endl;
}

void SplashScreenScene::OnExit()
{
	std::cout << "Exiting splash screen" << std::endl;
}
