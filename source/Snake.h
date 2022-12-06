#pragma once
#include "GameObject.h"
#include "Log.h"

class Snake :
    public GameObject
{
private:
    Log* log;

public:
    Snake(Log* log):log(log){}

    void Update() override;
    void Render() override;
};
