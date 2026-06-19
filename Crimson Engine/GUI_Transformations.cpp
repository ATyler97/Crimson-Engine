#include "GUI_Transformations.h"
#include "MouseMath.h"

void GUI_Transformations::Scale_To()
{

}

void GUI_Transformations::Move_To(GUI_Body Body, int32_t OldMouseXPos, int32_t OldMouseYPos, int32_t NewMouseXLoc, int32_t NewMouseYLoc)
{
	Body.Location->X = Mouse_Math::OriginMouseOffset(OldMouseXPos, NewMouseXLoc, Body.Location->X);
	Body.Location->Y = Mouse_Math::OriginMouseOffset(OldMouseYPos, NewMouseYLoc, Body.Location->Y);
}
void GUI_Transformations::Move_To(std::vector<GUI_Body> Body, int32_t OldMouseXPos, int32_t OldMouseYPos, int32_t NewMouseXLoc, int32_t NewMouseYLoc)
{
	for (int i = 0; i < Body.size(); i++)
	{
		Body[i].Location->X = Mouse_Math::OriginMouseOffset(OldMouseXPos, NewMouseXLoc, Body[i].Location->X);
		Body[i].Location->Y = Mouse_Math::OriginMouseOffset(OldMouseYPos, NewMouseYLoc, Body[i].Location->Y);
	}
}
