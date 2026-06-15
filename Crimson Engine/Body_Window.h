#pragma once
#include "GUI_Body.h"
#include <optional>

struct Body_Window 
{
	Body_Window();
	std::vector<GUI_Body> GetVectorWindow();

	static void InstanceWindow();
	void Move();
};