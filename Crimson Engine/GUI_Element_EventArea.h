#pragma once
#include "GUI_Element.h"

struct GUI_Element_EventArea : public GUI_Element
{
	ElementType TypeOfElement = EventArea;
	int Width, Height, X, Y;

	GUI_Element_EventArea(int w, int h, int x, int y) { Width = w, Height = h, X = x, Y = y; }
};