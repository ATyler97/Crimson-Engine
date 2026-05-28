#pragma once
#include "Component.h"
#include "Comp_Position2D.h"
struct Comp_Texture_Cordinates : public Component
{
	Comp_Position2D UV;
	// 0,0 is top left corner of the screen, 1,1 is bottom right corner of the screen
	float Normal;
};