#pragma once
#include "ImageRenderer.h"
class AnimatedImageRenderer :
    public ImageRenderer
{
private:
    int frameWidth;
    int frameHeight;
    int fps;
    bool looping;

public:
    AnimatedImageRenderer(int frameWidth=16, int frameHeight=16, int fps=30, bool looping=true, SDL_Color color={255,255,255,255}, float alpha=255, float rotation=0, SDL_Rect targetRect={0,0,16,16}, SDL_Rect sourceRect={0,0,16,16})
        : frameWidth(frameWidth), frameHeight(frameHeight), fps(fps), looping(looping), ImageRenderer(color, alpha, rotation, targetRect, sourceRect){}

    void Load(std::string path) override;
    void Update() override;
    void Render() override;
};

