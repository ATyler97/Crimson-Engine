#pragma once
#include "GUI_Element.h"
struct GUI_Color : GUI_Element
{
	Uint8 Red; // 0-255
	Uint8 Green;
	Uint8 Blue;
	Uint8 Alpha;//opacity

	GUI_Color(Uint8 red, Uint8 green, Uint8 blue, Uint8 alpha)
	{
		Red = red, Green = green, Blue = blue, Alpha = alpha;
	};
};