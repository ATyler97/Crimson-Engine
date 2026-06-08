#include "GUI_Layer_Manager.h"
#include <SDL2/SDL.h>	
#pragma once
SDL_Renderer* Renderer;

GUI_Layer_Manager::GUI_Layer_Manager(SDL_Renderer* renderer)
{
	Renderer = renderer;
}

void GUI_Layer_Manager::AddLayer(GUI_Layer layer)
{
	Layers.push_back(layer);
}

void GUI_Layer_Manager::RemoveLayer(GUI_Layer layer)
{
	Layers.erase(std::remove(Layers.begin(), Layers.end(), layer), Layers.end());
}

void GUI_Layer_Manager::DrawLayers()
{
	for (int i = 0; i < Layers.size(); i++)
	{
		//Layers[i].getpointer()
		for (int j = 0; j < Layers[i].Layer.size(); j++)
		{
			//Layers[i].Layer[j].
			for (int k = 0; k < Layers[i].Layer[j].Elements.size(); k++)
			{
				switch (Layers[i].Layer[j].Elements[k].GetElementType())
				{
				case GUI_Element::Color:
					
					break;
				case GUI_Element::Location:
					//Draw location
					break;
				case GUI_Element::Shape:
					//Draw shape
					break;
				case GUI_Element::Size:
					//Draw size
					break;
				}
			}
		}
	}
}
void GUI_Layer_Manager::SetRenderColor(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
{
	SDL_SetRenderDrawColor(Renderer, r, g, b, a);
	//Update layers
}
void GUI_Layer_Manager::SetRenderLocation()
{
	//Update layers
}
void GUI_Layer_Manager::SetRenderShape()
{
	//Update layers
}
void GUI_Layer_Manager::SetRenderSize()
{
	//Update layers
}
