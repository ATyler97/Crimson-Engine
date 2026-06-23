#pragma once
#include <vector>
#include "GUI_Object.h"
#include <string>

struct GUI_Layer
{
	std::string Name;
	std::vector <GUI_Object> Layer;
	std::vector <GUI_Object>* LayerPtr;
	std::vector <GUI_Object>* GetPointer();

	void AddBodyToLayer(GUI_Object BodyToAdd) { Layer.push_back(BodyToAdd); };
	void AddBodyAddressToLayerPtr();
	void AddNameToLayer(std::string name) { Name = name; };
	int GetNumberOfBodies() { return Layer.size(); }
};
