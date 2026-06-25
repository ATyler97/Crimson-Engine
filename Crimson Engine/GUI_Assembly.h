#pragma once
#include "GUI_Object.h"
#include <optional>
#include "Object.h"

struct GUI_Assembly 
{
	GUI_Assembly();
	std::vector<GUI_Object> GetAssembly();
	static void InstanceGUI_Assembly();
	std::vector<GUI_Object> GetObjects();
	void Move(int x, int y);
	bool IsMouseOverClickable(int MouseX, int MouseY);
};