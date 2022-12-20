#pragma once
#include <SDL.h>

class Scene {
protected:
	std::vector<Object> ui;
	std::vector<Object> objects;

public:
	Scene() = default;

	virtual void Update(float dt) = 0;
	virtual void Render(SDL_Renderer* renderer) = 0;
	virtual void OnEnter() = 0;
	virtual void OnExit() = 0;
};