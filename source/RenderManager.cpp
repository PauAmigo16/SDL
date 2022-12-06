#include "RenderManager.h"

RenderManager* RenderManager::instance = nullptr;

RenderManager* RenderManager::GetInstance()
{
    if (instance == nullptr)
        instance = new RenderManager(224, 240, SDL_WINDOW_RESIZABLE);

    return instance;
}

SDL_Renderer* RenderManager::GetRenderer()
{
    return renderer;
}

void RenderManager::LoadTextures(std::vector<Object> Objects)
{
    for (auto gO : Objects)
        gO.LoadTexture(renderer);
}
