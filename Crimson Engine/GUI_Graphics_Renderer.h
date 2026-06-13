#pragma once
#include "GUI_Scene.h"
#include "GUI_Layer.h"
#include "GUI_Body.h"
#include "Body_Window.h"
#include <vector>
#include <string>
#include <SDL2/SDL.h>

class GUI_Graphics_Renderer
{
	public:
		GUI_Graphics_Renderer();
		void AddBodyToScene(GUI_Body BodyToAdd);
		void AddBodiesToScene(std::vector<GUI_Body> BodyVectorToAdd);
		void RenderObjectsToGUI(SDL_Renderer* rend);
		void DetermineShapeAndRender(SDL_Renderer* rend, GUI_Body BodyToAdd);
		void PopulateBody(GUI_Body Body);
};

