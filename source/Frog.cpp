#include "Frog.h"

void Frog::AddFood(Food* food)
{
    this->food = food;
}

bool Frog::isMoving()
{
    return moving;
}
