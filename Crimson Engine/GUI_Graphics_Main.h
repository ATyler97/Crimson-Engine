#pragma once
#include "GUI_Graphics_Main.h"
#include "GUI_Body.h"
#include "Object.h"
#include "Layer.h"
#include "Scene.h"
#include <vector>
#include <SDL2/SDL.h>
#include "States.h"

class GUI_Graphics_Main
{
public:
	void Render();
	GUI_Graphics_Main(SDL_Renderer* rend, States* statE);
	void Initalize();
	void ProcessObject();
	void PassSceneIntoActiveScene(Scenes scene);
	void PassLayerIntoScene(Layers layer);
	void PassObjectsIntoLayer(Objects Obj, Layers layer);
	void PassBodiesIntoObjects(GUI_Body bod, Objects Obj);
};

