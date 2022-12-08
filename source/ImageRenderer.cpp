#include "ImageRenderer.h"

void ImageRenderer::Load(std::string path)
{
	//Load the texture
	SDL_Surface* surface = IMG_Load(path.c_str());
	texture = SDL_CreateTextureFromSurface(RM->GetRenderer(), surface); 

	//Process the texture
	SDL_QueryTexture(texture, nullptr, nullptr, &sourceRect.w, &sourceRect.h);

	//Free the surface
	SDL_FreeSurface(surface);

	//Update the destination rect
	targetRect.w = sourceRect.w;
	targetRect.h = sourceRect.h;
}
