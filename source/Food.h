#pragma once
#include "GameObject.h"
#include "Log.h"

class Food :
    public GameObject
{
private:
    Log* log;

    bool attachedToPlayer;

    std::string path;
    
public:

    Food(Log* log) : log(log)
    {
        path = "../resources/Food.png";
    }

    void Update() override;
    void Render() override;

    bool AttachedToPlayer();
};

