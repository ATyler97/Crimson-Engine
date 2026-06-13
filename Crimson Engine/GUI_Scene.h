#pragma once
#include <vector>;
#include "GUI_Layer.h"
#include "GUI_Body.h"
struct GUI_Scene
{
	std::vector <GUI_Body> Scene;

	void AddBodyToScene(GUI_Body BodyToAdd) { Scene.push_back(BodyToAdd); };
	int GetNumberOfBodies() { return Scene.size(); }
};