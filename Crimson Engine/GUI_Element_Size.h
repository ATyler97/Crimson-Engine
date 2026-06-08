#pragma once
#include "GUI_Element.h"

struct GUI_Element_Size : public GUI_Element
{
	ElementType TypeOfElement = Size;
	uint8_t Width;
	uint8_t Height;
	GUI_Element_Size(uint8_t W, uint8_t H) {
		Width = W;
		Height = H;
	};
};