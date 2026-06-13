#pragma once
#include "GUI_Element.h"

struct GUI_Element_Size : public GUI_Element
{
	ElementType TypeOfElement = Size;
	int Width;
	int Height;
	GUI_Element_Size(int W, int H) {
		Width = W;
		Height = H;
	};
};