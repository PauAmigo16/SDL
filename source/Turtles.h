#pragma once
#include "GameObject.h"

class Turtles :
    public GameObject
{
private:
    int length;

public:
    Turtles(int length) : length(length){}

    virtual void Update() override;
    virtual void Render() override;
};

