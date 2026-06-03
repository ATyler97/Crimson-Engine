#pragma once
#include "GUI_Element.h";
#include <SDL2/SDL.h>
#include <vector>

class Graphics_Layer {
public:
		std::vector<GUI_Element> elements;
		Graphics_Layer(SDL_Renderer* renderer);
		void AddElement(GUI_Element e) { elements.push_back(e);}
	};