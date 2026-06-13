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
		void RenderGUIGraphics(SDL_Renderer* rend);
		void RenderBody(SDL_Renderer* rend, GUI_Body Body, std::string Type);
		//void CreateRenderObject(SDL_Renderer* rend,GUI_Body Body);
		void InjectBodyIntoRendererForTesting();


		void AddBodyToLayer(GUI_Body BodyToAdd, GUI_Layer LayerBeingAddedTo);
		void AddLayerToScene(GUI_Layer LayerToAdd, GUI_Scene SceneBeingAddedTo);
		void CreateNewLayer(std::string NameOfLayer);
	
		int GetActiveSceneLayerCount();
		int GetActiveBodies();
};
