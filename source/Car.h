#pragma once
#include "GameObject.h"

class Car :
    public GameObject
{
public:
    Car(std::string path);

    void Update() override;
    void Render() override;
};

