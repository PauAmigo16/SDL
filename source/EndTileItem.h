#pragma once
#include "GameObject.h"
class EndTileItem :
    public GameObject
{
private:
    float duration;
    float currentDuration;

    bool isLethal;

public:
    EndTileItem(float duration, bool isLethal, std::string spritePath) : duration(duration), isLethal(isLethal){}

    void Update() override;
    void Render() override;

    bool isFinished();
};

