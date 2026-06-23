#include "GUI_Graphics_Main.h"
#include "GUI_Graphics_RenderTools.h"
#include "GUI_Body.h"
#include "Object.h"
#include "Layer.h"
#include "Scene.h"
#include <vector>
#include <SDL2/SDL.h>
#include "States.h"
#include "Body_Window.h"

Scenes ActiveScene;
SDL_Renderer* GUIrenderer;
States* state;
Body_Window Window;
Layers TestLayer;

void GUI_Graphics_Main::Render()
{
	for (int i = 0; i < ActiveScene.Scene.size(); i++) 
	{
		for (int k = 0; k < ActiveScene.Scene[i].Layer.size(); k++)
		{
			for (int j = 0; j < ActiveScene.Scene[i].Layer[k].Object.size(); j++)
			{
				GUI_Graphics_RenderTools::DrawObjects(GUIrenderer, ActiveScene.Scene[i].Layer[k].Object[j]);
			}
		}
	}
}
GUI_Graphics_Main::GUI_Graphics_Main(SDL_Renderer* rend, States* statE)
{
	GUIrenderer = rend;
	state = statE;
	Initalize();
}
void GUI_Graphics_Main::Initalize() 
{
	ActiveScene = Scenes();
	ActiveScene.Scene.push_back(TestLayer);
	//PassObjectsIntoLayer(Window.GetVectorWindow(), ActiveScene.Scene[0]);

}

// setting the stage methods. 
void GUI_Graphics_Main::PassSceneIntoActiveScene(Scenes scene)
{
	ActiveScene = scene;
}
void GUI_Graphics_Main::PassLayerIntoScene(Layers layer)
{
	ActiveScene.Scene.push_back(layer);
}
void GUI_Graphics_Main::PassObjectsIntoLayer(Objects Obj, Layers layer)
{
	layer.Layer.push_back(Obj);
}
void GUI_Graphics_Main::PassBodiesIntoObjects(GUI_Body bod, Objects Obj) 
{
	Obj.Object.push_back(bod);
}
