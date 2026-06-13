#pragma once
#include <vector>;
#include "GUI_Layer.h"
#include "GUI_Body.h"
struct GUI_Scene
{
	std::vector <GUI_Layer> Scene;
	std::vector <GUI_Layer>* ScenePtr;
	std::vector <GUI_Layer>* GetPointer();

	void AddLayerToScene(GUI_Layer BodyToAdd) { Scene.push_back(BodyToAdd); };
	int GetNumberOfLayers() { return Scene.size(); }
};