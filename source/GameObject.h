#pragma once
#include <SDL.h>
#include <string>
#include <SDL_image.h>
#include <vector>
#include "Object.h"
#include "ImageRenderer.h"
#include "Renderer.h"

class GameObject : public Object
{
protected:
	std::vector<ImageRenderer> renderer;

public:
	GameObject() = default;

	void LoadTexture(SDL_Renderer* renderer);
	void SetPosition(int x, int y);

	virtual void Update() override = 0;
	virtual void Render() override = 0;

	Renderer* GetRenderer();
};
