#include <SDL2/SDL.h>
#include "GUI_Graphics_Renderer.h"
#include "GUI_Assembly.h"
#include "GUI_Transformations.h"
#include "States.h"
#include <iostream>
#include "Application_Task.h"

GUI_Scene ActiveScene = GUI_Scene();
GUI_Assembly BW;
SDL_Renderer* renderer;
States* State;


GUI_Graphics_Renderer::GUI_Graphics_Renderer()
{

}
void GUI_Graphics_Renderer::SetState(States* state)
{
	State = state;
}
void GUI_Graphics_Renderer::AddObjectToScene(GUI_Object ObjectToAdd)
{
	ActiveScene.AddObjectToScene(ObjectToAdd);

}
void GUI_Graphics_Renderer::AddObjectsToScene(std::vector<GUI_Object> ObjectVectorToAdd)
{
	for (int i = 0; i < ObjectVectorToAdd.size(); i++) {
		ActiveScene.AddObjectToScene(ObjectVectorToAdd[i]);
	}
}
void GUI_Graphics_Renderer::RenderObjectsToGUI(SDL_Renderer* rend)
{
	for (int i = 0; i < ActiveScene.Scene.size(); i++)
	{
		
		DetermineShape(rend, ActiveScene.Scene[i]);
	}
}
void GUI_Graphics_Renderer::DetermineShape(SDL_Renderer* rend, GUI_Object ObjectToAdd)
{
	SDL_SetRenderDrawColor(rend, ObjectToAdd.Color->Red, ObjectToAdd.Color->Green, ObjectToAdd.Color->Blue, ObjectToAdd.Visibility->Alpha);
	SDL_Rect shape = SDL_Rect();
	
	switch (ObjectToAdd.Shape->TypeOfShape) {
	case GUI_Element_Shape::Shape_Type::Rectangle:
		shape.w = ObjectToAdd.Size->Width;
		shape.h = ObjectToAdd.Size->Height;
		shape.x = ObjectToAdd.Location->X;
		shape.y = ObjectToAdd.Location->Y;

		SDL_RenderDrawRect(rend, &shape);
		break;
	case GUI_Element_Shape::Shape_Type::Rectangle_Filled:
		shape.w = ObjectToAdd.Size->Width;
		shape.h = ObjectToAdd.Size->Height;
		shape.x = ObjectToAdd.Location->X;
		shape.y = ObjectToAdd.Location->Y;

		SDL_RenderFillRect(rend, &shape);
		break;
	case GUI_Element_Shape::Shape_Type::Line:
		SDL_RenderDrawLine(rend, ObjectToAdd.Size->Width, ObjectToAdd.Size->Height, ObjectToAdd.Location->X, ObjectToAdd.Location->Y);
		break;
	case GUI_Element_Shape::Shape_Type::Point:
		SDL_RenderDrawPoint(rend, ObjectToAdd.Location->X, ObjectToAdd.Location->Y);

		break;
	}
	SDL_SetRenderDrawColor(rend, 0, 0, 0, 0);
}

void GUI_Graphics_Renderer::PopulateObject()
{
	AddObjectsToScene(BW.GetGUI_Assembly());
}

void GUI_Graphics_Renderer::Render()
{

 }


