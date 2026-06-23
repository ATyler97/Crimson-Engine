#pragma once
#include "GUI_Object.h"
#include <optional>
#include "Object.h"

struct Assembly 
{
	Assembly();
	std::vector<GUI_Object> GetAssembly();

	static void InstanceAssembly();
	void Move(int x, int y);
	void IsMouseOverClickable(int MouseX, int MouseY);
	void IsMouseOverWindow(int MouseX, int MouseY);
};