#pragma once
#include <vector>
#include "GUI_Body.h"

struct GUI_Layer_Manager
{
	std::vector <GUI_Body> Layers;
	GUI_Body DemoLayer = GUI_Body();
	void Add_Layer(GUI_Body Layer)
	{
		Layers.push_back(Layer);
	}
};