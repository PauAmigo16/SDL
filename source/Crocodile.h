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

    std::string bodyPath;
    std::string openMouthPath;
    std::string closedMouthPath;

public:
    Crocodile(float openMouthDuration, float closedMouthDuration, int length) : Log(length), openMouthDuration(openMouthDuration), closedMouthDuration(closedMouthDuration) 
    {
        bodyPath = "../resources/CrocBody.png";
        openMouthPath = "../resources/CrocOpenMouth.png";
        closedMouthPath = "../resources/CrocClosedMouth.png";
    }

    bool isMouthOpen();

    void Update() override;
    void Render() override;
};