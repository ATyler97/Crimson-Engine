#pragma once
#include "GUI_Scene.h"
#include "GUI_Layer.h"
#include "GUI_Body.h"
#include "Body_Window.h"
#include <vector>
#include <string>
#include <SDL2/SDL.h>
#include "States.h"
class GUI_Graphics_Renderer
{
	public:
		GUI_Graphics_Renderer(States* state);
		void AddBodyToScene(GUI_Body BodyToAdd);
		void AddBodiesToScene(std::vector<GUI_Body> BodyVectorToAdd);
		void RenderObjectsToGUI(SDL_Renderer* rend);
		void DragWindow(std::vector<GUI_Body> Window, int i);
		void DragWindow(std::vector<GUI_Body> Window);
		void DetermineKeyResult();
		void DetermineShape(SDL_Renderer* rend, GUI_Body BodyToAdd);
		void PopulateBody();
		void Render();
};

