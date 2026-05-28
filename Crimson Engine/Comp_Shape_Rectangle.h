#pragma once
#include <SDL2/SDL.h>
#include "Component.h"
#include "Comp_Color.h"

struct Comp_Shape_Rectangle : public Component
{
	Comp_Shape_Rectangle(int width, int height, SDL_Renderer* InstanceRenderer)
	{
		SDL_Rect Rectangle;
		SDL_Rect* RectanglePtr = &Rectangle;
		Rectangle.x, Rectangle.y = 0;
		Rectangle.w = width; 
		Rectangle.h = height;
		SDL_RenderFillRect(InstanceRenderer, RectanglePtr);
	}

	Comp_Shape_Rectangle(int width, int height, Comp_Color color, SDL_Renderer* InstanceRenderer)
	{
		SDL_Rect Rectangle;
		SDL_Rect* RectanglePtr = &Rectangle;
		Rectangle.x, Rectangle.y = 0;
		Rectangle.w = width;
		Rectangle.h = height;
		SDL_SetRenderDrawColor(InstanceRenderer, color.Red,color.Green,color.Blue,color.Alpha);
		SDL_RenderFillRect(InstanceRenderer, RectanglePtr);
	}


};