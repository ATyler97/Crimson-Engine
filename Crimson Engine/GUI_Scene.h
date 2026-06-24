#pragma once
#include <vector>;
#include "GUI_Layer.h"
#include "GUI_Object.h"
struct GUI_Scene
{
	std::vector <GUI_Object> Scene;

	void AddObjectToScene(GUI_Object ObjectToAdd) { Scene.push_back(ObjectToAdd); };
	int GetNumberOfObjects() { return Scene.size(); }
};