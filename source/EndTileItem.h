#pragma once
#include "GameObject.h"

enum class ItemType{FLY, CROC, FROG};

class EndTileItem :
    public GameObject
{
private:
    float duration;
    float currentDuration;

    bool isLethal;

    std::string path; 

    ItemType type;

public:
    EndTileItem(float duration, ItemType type) : duration(duration), type(type) 
    {
        switch (type)
        {
        case ItemType::FLY:
            path = "../resources/Fly.png";
            isLethal = false;
            break;
        case ItemType::CROC:
            path = "../resources/EndTileCroc.png";
            isLethal = true;
            break;
        case ItemType::FROG:
            path = "../resources/FullEndTile.png";
            isLethal = true;
            break;
        }
    }

    void Update() override;
    void Render() override;

    bool isFinished();
};

