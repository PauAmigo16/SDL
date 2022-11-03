#pragma once
#include "Scene.h"
class MenuScene :
    public Scene
{
    // Inherited via Scene
    virtual void Update(float dt) override;
    virtual void Render() override;
    virtual void OnEnter() override;
    virtual void OnExit() override;
};

