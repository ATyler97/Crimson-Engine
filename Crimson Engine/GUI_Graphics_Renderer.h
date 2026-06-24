#pragma once
#include "GUI_Scene.h"
#include "GUI_Layer.h"
#include "GUI_Object.h"
#include "GUI_Assembly.h"
#include <vector>
#include <string>
#include <SDL2/SDL.h>
#include "States.h"
class GUI_Graphics_Renderer
{
	public:
		GUI_Graphics_Renderer();
		void AddObjectToScene(GUI_Object ObjectToAdd);
		void SetState(States* state);
		void AddObjectsToScene(std::vector<GUI_Object> ObjectVectorToAdd);
		void RenderObjectsToGUI(SDL_Renderer* rend);
		void DragWindow(GUI_Object* Window);
		void DetermineKeyResult();
		void DetermineShape(SDL_Renderer* rend, GUI_Object ObjectToAdd);
		void PopulateObject();
		void Render();
};

