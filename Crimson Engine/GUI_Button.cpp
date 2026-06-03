#include "GUI_Button.h"


void GUI_Button::CreateButton(int X, int Y, int W, int H, std::string ID)
{
	ButtonXLoc = X;
	ButtonYLoc = Y;
	ButtonWidth = W;
	ButtonHeight = H;
	ButtonID = ID;
}

std::string GUI_Button::ButtonPressed()
{
	return ButtonID;
}
