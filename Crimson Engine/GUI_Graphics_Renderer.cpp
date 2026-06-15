#include <SDL2/SDL.h>
#include "GUI_Graphics_Renderer.h"
#include "Body_Window.h"
#include "Graphics_Transformations_MoveTo.h"
#include <iostream>

GUI_Scene ActiveScene = GUI_Scene();
Body_Window BW;
SDL_Renderer* renderer;


GUI_Graphics_Renderer::GUI_Graphics_Renderer()
{
	BW = Body_Window();
	AddBodiesToScene(BW.GetVectorWindow());
}

void GUI_Graphics_Renderer::AddBodyToScene(GUI_Body BodyToAdd)
{
	ActiveScene.AddBodyToScene(BodyToAdd);
}
void GUI_Graphics_Renderer::AddBodiesToScene(std::vector<GUI_Body> BodyVectorToAdd)
{
	for (int i = 0; i < BodyVectorToAdd.size(); i++) {
		ActiveScene.AddBodyToScene(BodyVectorToAdd[i]);
	}
}
void GUI_Graphics_Renderer::RenderObjectsToGUI(SDL_Renderer* rend)
{
	renderer = rend;
	for (int i = 0; i < ActiveScene.Scene.size(); i++)
	{
		DetermineShapeAndRender(renderer, ActiveScene.Scene[i]);
	}
}

void GUI_Graphics_Renderer::DetermineShapeAndRender(SDL_Renderer* rend, GUI_Body BodyToAdd)
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


