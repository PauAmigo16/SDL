#include "Vector2.h"

void Vector2::Normalize()
{
	float sR = sqrt(this->x * this->x + this->y * this->y);
	this->x /= sR;
	this->y /= sR;
}
