#pragma once
#include "GUI_Transformations.h"
#include "Body_Window.h"
#include <vector>
class GUI_Transformations
{
	public:
		static void Scale_To();
		static void Move_To(GUI_Body Body, int32_t OldMouseXPos, int32_t OldMouseYPos, int32_t NewXLoc, int32_t NewYLoc);
		static void Move_To(std::vector<GUI_Body> Body, int32_t OldMouseXPos, int32_t OldMouseYPos, int32_t NewMouseXLoc, int32_t NewMouseYLoc);


};

