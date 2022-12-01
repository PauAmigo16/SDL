#pragma once
#include "Turtles.h"

class DivingTurtles :
    public Turtles
{
private:
    float diveDuration;
    float surfaceDuration;
    float elapsedTime;

    bool isDiving;

public:
    DivingTurtles(float diveDuration, float surfaceDuration, int length) :Turtles(length)
    {
        this->diveDuration = diveDuration;
        this->surfaceDuration = surfaceDuration;
    }

    void Update() override;
    void Render() override;

    bool isDiving();
};

