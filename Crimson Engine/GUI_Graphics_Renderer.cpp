#include <SDL2/SDL.h>
#include "GUI_Graphics_Renderer.h"
#include "GUI_Assembly.h"
#include "GUI_Transformations.h"
#include "States.h"
#include <iostream>
#include "Application_Task.h"



GUI_Scene ActiveScene = GUI_Scene();
GUI_Scene* ActiveScenePtr;
GUI_Assembly testwindow;
SDL_Renderer* renderer;
States* State;
GUI_Logic GuiLogic = GUI_Logic();


GUI_Graphics_Renderer::GUI_Graphics_Renderer()
{
	ActiveScenePtr = &ActiveScene;
	AddAssemblyToScene();
}
void GUI_Graphics_Renderer::initializeGUI_Logic() {
	GuiLogic.SetState(State);
	GuiLogic.SetActiveScene(ActiveScenePtr);
}
void GUI_Graphics_Renderer::SetState(States* state)
{
	State = state;
	GuiLogic.SetState(State);
	initializeGUI_Logic(); //not great but not terrible
}
void GUI_Graphics_Renderer::AddAssemblyToScene() 
{
	ActiveScene.Scene.push_back(testwindow);
}
void GUI_Graphics_Renderer::AddAssemblyToScene(GUI_Assembly Assem)
{
	ActiveScene.Scene.push_back(Assem);
}
void GUI_Graphics_Renderer::RenderObjectsToGUI(SDL_Renderer* rend)
{
	renderer = rend;
	GuiLogic.Check();
	Render();
}
void GUI_Graphics_Renderer::Render()
{
	for (int i = 0; i < ActiveScene.Scene.size(); i++) {
		for (int j = 0; j < ActiveScene.Scene[i].GetObjects().size();j++) {
			
			switch (ActiveScene.Scene[i].GetObjects()[j].Shape->TypeOfShape) 
			{
				case GUI_Element_Shape::Shape_Type::Rectangle:
					SDL_SetRenderDrawColor(renderer,
						ActiveScene.Scene[i].GetObjects()[j].Color->Red,
						ActiveScene.Scene[i].GetObjects()[j].Color->Green,
						ActiveScene.Scene[i].GetObjects()[j].Color->Blue,
						ActiveScene.Scene[i].GetObjects()[j].Color->Alpha);
					SDL_RenderDrawRect(renderer, &ActiveScene.Scene[i].GetObjects()[j].Shape->Rect);
					//gotta add the color 4head
					break;
				case GUI_Element_Shape::Shape_Type::Rectangle_Filled:
					SDL_SetRenderDrawColor(renderer,
						ActiveScene.Scene[i].GetObjects()[j].Color->Red,
						ActiveScene.Scene[i].GetObjects()[j].Color->Green,
						ActiveScene.Scene[i].GetObjects()[j].Color->Blue,
						ActiveScene.Scene[i].GetObjects()[j].Color->Alpha);
					SDL_RenderFillRect(renderer, &ActiveScene.Scene[i].GetObjects()[j].Shape->Rect);
					break;
				case GUI_Element_Shape::Shape_Type::Line:
					SDL_SetRenderDrawColor(renderer,
						ActiveScene.Scene[i].GetObjects()[j].Color->Red,
						ActiveScene.Scene[i].GetObjects()[j].Color->Green,
						ActiveScene.Scene[i].GetObjects()[j].Color->Blue,
						ActiveScene.Scene[i].GetObjects()[j].Color->Alpha);
					SDL_RenderDrawLine
					(renderer,
						ActiveScene.Scene[i].GetObjects()[j].Location->X,
						ActiveScene.Scene[i].GetObjects()[j].Location->Y,
						ActiveScene.Scene[i].GetObjects()[j].Size->Width,
						ActiveScene.Scene[i].GetObjects()[j].Size->Height);
					break;
				case GUI_Element_Shape::Shape_Type::Point:
					SDL_SetRenderDrawColor(renderer,
						ActiveScene.Scene[i].GetObjects()[j].Color->Red,
						ActiveScene.Scene[i].GetObjects()[j].Color->Green,
						ActiveScene.Scene[i].GetObjects()[j].Color->Blue,
						ActiveScene.Scene[i].GetObjects()[j].Color->Alpha);
					SDL_RenderDrawPoint(
						renderer,
						ActiveScene.Scene[i].GetObjects()[j].Location->X,
						ActiveScene.Scene[i].GetObjects()[j].Location->Y);
			}
		}
	}
}


