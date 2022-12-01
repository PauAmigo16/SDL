#pragma once
#include "GameObject.h"
class Tile :
    public GameObject
{
private:
    bool isLethal;

public:
    Tile(bool isLethal):isLethal(isLethal){}

    void Update() override;
    void Render() override;
};

