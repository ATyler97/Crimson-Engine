
#pragma once
#include "GUI_Element.h"

struct GUI_Element_Visibility : public GUI_Element
{
	ElementType TypeOfElement = Visibility;

	uint8_t Alpha;
	GUI_Element_Visibility(uint8_t A) {
		Alpha = A;
	};
	uint8_t getAlphaValue() {
		return Alpha;
	}
};
