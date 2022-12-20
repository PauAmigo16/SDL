#pragma once
#include "GameObject.h"
#include "TextObject.h"

class Button :
    public GameObject
{
private:
    TextObject* text;

public:
    Button() = default;

    void Update() override;
    void Render() override;

    void SetText(TextObject* t);
};

