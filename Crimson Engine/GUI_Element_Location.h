#pragma once
#include "GUI_Element.h"

struct GUI_Element_Location : public GUI_Element
{
	ElementType TypeOfElement = Location;
	int32_t X;
	int32_t Y;
	GUI_Element_Location(int32_t X_Coord, int32_t Y_Coord) {
		X = X_Coord;
		Y = Y_Coord;
	};
};