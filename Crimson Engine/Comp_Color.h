#pragma once
#include "Component.h"
struct Comp_Color : public Component
{
	int Red;
	int Green;
	int Blue;
	int Alpha;//opacity
};