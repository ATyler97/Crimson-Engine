#include <SDL2/SDL.h>
#include "GUI_Graphics_Renderer.h"
#include "Assembly.h"
#include "GUI_Transformations.h"
#include "States.h"
#include <iostream>
#include "Application_Task.h"

GUI_Scene ActiveScene = GUI_Scene();
Assembly BW;
SDL_Renderer* renderer;
States* State;


GUI_Graphics_Renderer::GUI_Graphics_Renderer()
{

}
void GUI_Graphics_Renderer::SetState(States* state)
{
	State = state;
}
void GUI_Graphics_Renderer::AddBodyToScene(GUI_Object BodyToAdd)
{
	ActiveScene.AddBodyToScene(BodyToAdd);

}
void GUI_Graphics_Renderer::AddBodiesToScene(std::vector<GUI_Object> BodyVectorToAdd)
{
	for (int i = 0; i < BodyVectorToAdd.size(); i++) {
		ActiveScene.AddBodyToScene(BodyVectorToAdd[i]);
	}
}
void GUI_Graphics_Renderer::RenderObjectsToGUI(SDL_Renderer* rend)
{
	for (int i = 0; i < ActiveScene.Scene.size(); i++)
	{
		
		DetermineShape(rend, ActiveScene.Scene[i]);
	}
}
void GUI_Graphics_Renderer::DetermineShape(SDL_Renderer* rend, GUI_Object BodyToAdd)
{
	SDL_SetRenderDrawColor(rend, BodyToAdd.Color->Red, BodyToAdd.Color->Green, BodyToAdd.Color->Blue, BodyToAdd.Visibility->Alpha);
	SDL_Rect shape = SDL_Rect();
	
	switch (BodyToAdd.Shape->TypeOfShape) {
	case GUI_Element_Shape::Shape_Type::Rectangle:
		shape.w = BodyToAdd.Size->Width;
		shape.h = BodyToAdd.Size->Height;
		shape.x = BodyToAdd.Location->X;
		shape.y = BodyToAdd.Location->Y;

		SDL_RenderDrawRect(rend, &shape);
		break;
	case GUI_Element_Shape::Shape_Type::Rectangle_Filled:
		shape.w = BodyToAdd.Size->Width;
		shape.h = BodyToAdd.Size->Height;
		shape.x = BodyToAdd.Location->X;
		shape.y = BodyToAdd.Location->Y;

		SDL_RenderFillRect(rend, &shape);
		break;
	case GUI_Element_Shape::Shape_Type::Line:
		SDL_RenderDrawLine(rend, BodyToAdd.Size->Width, BodyToAdd.Size->Height, BodyToAdd.Location->X, BodyToAdd.Location->Y);
		break;
	case GUI_Element_Shape::Shape_Type::Point:
		SDL_RenderDrawPoint(rend, BodyToAdd.Location->X, BodyToAdd.Location->Y);

		break;
	}
	SDL_SetRenderDrawColor(rend, 0, 0, 0, 0);
}

void GUI_Graphics_Renderer::PopulateBody()
{
	AddBodiesToScene(BW.GetAssembly());
}

void GUI_Graphics_Renderer::Render()
{

 }


