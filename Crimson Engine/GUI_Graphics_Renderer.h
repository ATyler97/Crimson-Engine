#pragma once
#include "GUI_Scene.h"
#include "GUI_Layer.h"
#include "GUI_Object.h"
#include "GUI_Assembly.h"
#include <vector>
#include <string>
#include <SDL2/SDL.h>
#include "States.h"
#include "GUI_Logic.h"
class GUI_Graphics_Renderer
{
	public:
		GUI_Graphics_Renderer();
		void initializeGUI_Logic();
		void SetState(States* state);
		void AddAssemblyToScene();
		void AddAssemblyToScene(GUI_Assembly Assem);
		void RenderObjectsToGUI(SDL_Renderer* rend);
		void Render();
};

