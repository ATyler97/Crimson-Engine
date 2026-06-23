#pragma once
#include <vector>;
#include "GUI_Layer.h"
#include "GUI_Object.h"
struct GUI_Scene
{
	std::vector <GUI_Object> Scene;

	void AddBodyToScene(GUI_Object BodyToAdd) { Scene.push_back(BodyToAdd); };
	int GetNumberOfBodies() { return Scene.size(); }
};