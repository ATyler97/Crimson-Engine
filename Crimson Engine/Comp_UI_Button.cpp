#include "Comp_UI_Button.h"


void Comp_UI_Button::CreateButton(int X, int Y, int W, int H, std::string ID)
{
	ButtonXLoc = X;
	ButtonYLoc = Y;
	ButtonWidth = W;
	ButtonHeight = H;
	ButtonID = ID;
}

std::string Comp_UI_Button::ButtonPressed()
{
	return ButtonID;
}
