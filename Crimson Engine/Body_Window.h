#pragma once
#include "GUI_Body.h"
#include <optional>
#include "Object.h"

struct Body_Window 
{
	Body_Window();
	Objects GetVectorWindow();

	static void InstanceWindow();
	void Move();
};