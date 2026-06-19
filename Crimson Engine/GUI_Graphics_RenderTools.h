#pragma once
#include "GUI_Element.h"
#include "GUI_Body.h"
#include "Object.h"
#include "Layer.h"
#include "Scene.h"
#include <vector>
#include <SDL2/SDL.h>

class GUI_Graphics_RenderTools
{
	public:
		static void DrawObjects(SDL_Renderer* rend, GUI_Body bod);
};

