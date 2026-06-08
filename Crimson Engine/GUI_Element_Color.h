#pragma once
#include "GUI_Element.h"

struct GUI_Element_Color : public GUI_Element
{
	ElementType TypeOfElement = Color;
	uint8_t Red;
	uint8_t Green;
	uint8_t Blue;
	uint8_t Alpha;
	GUI_Element_Color(uint8_t R, uint8_t G, uint8_t B, uint8_t A){
		Red = R;
		Green = G;
		Blue = B;
		Alpha = A;
	};
	uint8_t getRedValue(){
		return Red;
	}
	uint8_t getGreenValue() {
		return Green;
	}
	uint8_t getBlueValue() {
		return Blue;
	}
	uint8_t getAlphaValue() {
		return Alpha;
	}
};
