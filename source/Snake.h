#pragma once
#include "GameObject.h"
#include "Log.h"

class Snake :
    public GameObject
{
private:
    Log* log;

    std::string path;

public:
    Snake(Log* log):log(log)
    {
        path = "../resources/SnakeAnimation.png";
    }

    void Update() override;
    void Render() override;
};

