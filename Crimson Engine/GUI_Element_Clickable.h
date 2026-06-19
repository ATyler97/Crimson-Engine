#pragma once
#include "GUI_Element.h"

struct GUI_Element_Clickable : public GUI_Element
{
	ElementType TypeOfElement = Clickable;
	bool Clicked;
	GUI_Element_Clickable(bool clicked) {
		Clicked = clicked;
	};
};