#pragma once
#include "GUI_Scene.h"
#include "GUI_Layer.h"
#include "GUI_Object.h"
#include "Assembly.h"
#include <vector>
#include <string>
#include <SDL2/SDL.h>
#include "States.h"
class GUI_Graphics_Renderer
{
	public:
		GUI_Graphics_Renderer();
		void AddBodyToScene(GUI_Object BodyToAdd);
		void SetState(States* state);
		void AddBodiesToScene(std::vector<GUI_Object> BodyVectorToAdd);
		void RenderObjectsToGUI(SDL_Renderer* rend);
		void DragWindow(GUI_Object* Window);
		void DetermineKeyResult();
		void DetermineShape(SDL_Renderer* rend, GUI_Object BodyToAdd);
		void PopulateBody();
		void Render();
};

