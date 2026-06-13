#pragma once
#include <vector>
#include "GUI_Body.h"
#include <string>

struct GUI_Layer
{
	std::string Name;
	std::vector <GUI_Body> Layer;
	std::vector <GUI_Body>* LayerPtr;
	std::vector <GUI_Body>* GetPointer();

	void AddBodyToLayer(GUI_Body BodyToAdd) { Layer.push_back(BodyToAdd); };
	void AddBodyAddressToLayerPtr();
	void AddNameToLayer(std::string name) { Name = name; };
	int GetNumberOfBodies() { return Layer.size(); }
};
