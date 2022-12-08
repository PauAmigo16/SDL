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
    Crocodile(float openMouthDuration, float closedMouthDuration, int length) 
        : Log(length), openMouthDuration(openMouthDuration), closedMouthDuration(closedMouthDuration) 
    {
        bodyPath = "../resources/CrocBody.png";
        openMouthPath = "../resources/CrocOpenMouth.png";
        closedMouthPath = "../resources/CrocClosedMouth.png";
        for (int i = 0; i < 3; i++) {
            auto renderer = ImageRenderer();
            renderers.push_back(renderer);
        }

    }

    bool isMouthOpen();

    void Load() override;
    void Update() override;
    void Render() override;
};