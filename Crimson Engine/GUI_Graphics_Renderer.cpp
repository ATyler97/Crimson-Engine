
#include "GUI_Graphics_Renderer.h"
#include "Body_Window.h"
#include <iostream>

GUI_Scene ActiveScene = GUI_Scene();
Body_Window BW;


GUI_Graphics_Renderer::GUI_Graphics_Renderer()
{
	InjectBodyIntoRendererForTesting();

}

void GUI_Graphics_Renderer::RenderGUIGraphics(SDL_Renderer* rend)
{
	GUI_Body Body = ActiveScene.Scene[0].Layer[0];
	using ShapeType = GUI_Element_Shape::Shape_Type;

	switch (Body.Shape->TypeOfShape) {
			case ShapeType::Rectangle:
				RenderBody(rend, Body, "Rectangle");
				break;
			case ShapeType::Rectangle_Filled:
				RenderBody(rend, Body, "Rectangle_Filled");
				break;
			case ShapeType::Circle:
				break;
			case ShapeType::Circle_Filled:
				break;
			case ShapeType::Triangle:
				break;
			case ShapeType::Triangle_Filled:
			break;
		default:
			std::cout << "GUI_Graphics_Renderer::RenderGUIGraphics()  ==Error== Shape of object in un initalized.";

			}
}



void GUI_Graphics_Renderer::RenderBody(SDL_Renderer* rend, GUI_Body Body, std::string Type)
{
	if (Type == "Rectangle")
	{
		SDL_Rect Rect;
		Rect.w = Body.Size->Width;
		Rect.h = Body.Size->Height;
		Rect.x = Body.Location->X;
		Rect.y = Body.Location->Y;
		SDL_SetRenderDrawColor(rend, Body.Color->Red, Body.Color->Blue, Body.Color->Green, Body.Visibility->Alpha);
		SDL_RenderDrawRect(rend, &Rect);
	};
	if (Type == "Rectangle_Filled")
	{
		SDL_Rect Rect;
		SDL_RenderClear(rend);
		Rect.w = Body.Size->Width;
		Rect.h = Body.Size->Height;
		Rect.x = Body.Location->X;
		Rect.y = Body.Location->Y;
		SDL_SetRenderDrawColor(rend, Body.Color->Red, Body.Color->Blue, Body.Color->Green, Body.Visibility->Alpha);
		SDL_RenderFillRect(rend, &Rect);
	};
	if (Type == "Circle") // does not exist 
	{

	};
	if (Type == "Circle_Filled") // Does not exist
	{

	};
	if (Type == "Triangle")// does not exist. 
	{

	};
	if (Type == "Triangle_Filled")// does not exist. 
	{

	};
}

void GUI_Graphics_Renderer::InjectBodyIntoRendererForTesting()
{
	BW = Body_Window();

	CreateNewLayer("testing");
	AddBodyToLayer(BW.GetBodyWindow(),ActiveScene.Scene[0]);
};



void GUI_Graphics_Renderer::AddBodyToLayer(GUI_Body BodyToAdd, GUI_Layer LayerBeingAddedTo)
{
	LayerBeingAddedTo.AddBodyToLayer(BodyToAdd);
}

void GUI_Graphics_Renderer::AddLayerToScene(GUI_Layer LayerToAdd, GUI_Scene SceneBeingAddedTo)
{
	SceneBeingAddedTo.AddLayerToScene(LayerToAdd);
}

void GUI_Graphics_Renderer::CreateNewLayer(std::string NameOfLayer)
{
	GUI_Layer NewLayer = GUI_Layer();
	NewLayer.AddNameToLayer(NameOfLayer);
	ActiveScene.Scene.push_back(NewLayer);
}

int GUI_Graphics_Renderer::GetActiveSceneLayerCount()
{
	return ActiveScene.GetNumberOfLayers();
}

int GUI_Graphics_Renderer::GetActiveBodies()
{
	int NumberOfBodies = 0;
	for (int i = 0; i < ActiveScene.GetNumberOfLayers(); i++) {
		NumberOfBodies = NumberOfBodies + ActiveScene.Scene[i].GetNumberOfBodies();
	}
	return NumberOfBodies;
}




