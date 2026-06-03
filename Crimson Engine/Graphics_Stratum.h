#pragma once
#include "Graphics_Layer.h"
#include "GUI_Base_Window.h"
#include <vector>
#include "GUI_Element.h"

struct Stratum {
	std::vector <Graphics_Layer> layers;
	Stratum(SDL_Renderer* renderer);
	void AddLayer(Graphics_Layer l) { layers.push_back(l); }
	void RemoveLayer();
};