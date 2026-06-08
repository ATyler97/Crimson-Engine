#pragma once
#include <vector>
#include "GUI_Body.h"
#include "GUI_Layer.h"

class GUI_Layer_Manager
{
public:
	GUI_Layer_Manager(SDL_Renderer* renderer);
	void AddLayer(GUI_Layer layer);
	void RemoveLayer(GUI_Layer layer);
	void UpdateLayers();
	void DrawLayers();
	void SetRenderColor(uint8_t r, uint8_t g, uint8_t b, uint8_t a);
	void SetRenderLocation();
	void SetRenderShape();
	void SetRenderSize();
private:
	std::vector<GUI_Layer> Layers;
};