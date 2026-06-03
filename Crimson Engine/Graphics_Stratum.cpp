#pragma once
#include "Graphics_Layer.h"
#include "GUI_Base_Window.h"
#include <vector>
#include "Graphics_Stratum.h"
#include "GUI_Element.h"

SDL_Renderer* renderer;
Graphics_Layer Background;

Stratum::Stratum(SDL_Renderer* Renderer)
{
	renderer = Renderer;
	Background = Graphics_Layer(Renderer);

	Background.AddElement(GUI_Base_Window(Renderer));
};
