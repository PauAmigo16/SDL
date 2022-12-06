#include "Frog.h"

Frog::Frog()
{
    path = "../resources/FrogAnimation.png";
}

void Frog::AddMovement(Vector2 dir)
{
    targetPos = position + dir;
}

void Frog::AddFood(Food* food)
{
    this->food = food;
}

bool Frog::isMoving()
{
    return moving;
}
