#pragma once
#include "GUI_Object.h"
#include <optional>
#include "Object.h"

struct GUI_Assembly 
{
	GUI_Assembly();
	std::vector<GUI_Object> GetGUI_Assembly();

	static void InstanceGUI_Assembly();
	void Move(int x, int y);
	void IsMouseOverClickable(int MouseX, int MouseY);
	void IsMouseOverWindow(int MouseX, int MouseY);
};