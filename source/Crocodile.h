#pragma once
#include "Log.h"

class Crocodile :
    public Log
{
private:
    float openMouthDuration;
    float closedMouthDuration;
    float elapsedTime;

    bool mouthOpen;

public:
    Crocodile(float openMouthDuration, float closedMouthDuration, int length) : Log(length) {
        this->openMouthDuration = openMouthDuration;
        this->closedMouthDuration = closedMouthDuration;
    }

    bool isMouthOpen();

    void Update() override;
    void Render() override;
};

