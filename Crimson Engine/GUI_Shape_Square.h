#pragma once
#include <SDL2/SDL.h>
#include "GUI_Element.h"
#include "GUI_Color.h"

struct GUI_Shape_Square : GUI_Element
{
	SDL_Rect Square;
	SDL_Rect* SquarePtr = &Square;
	SDL_Renderer* InstanceRenderer;

	GUI_Shape_Square(int Size, SDL_Renderer* InstanceRenderer)
	{
		Square.x, Square.y = 0;
		Square.w = Size;
		Square.h = Size;
		SDL_RenderFillRect(InstanceRenderer, SquarePtr);
	}

	GUI_Shape_Square(int Size, GUI_Color color, SDL_Renderer* InstanceRenderer)
	{
		Square.w = Size;
		SDL_Rect* SquarePtr = &Square;
		SDL_SetRenderDrawColor(InstanceRenderer, color.Red, color.Green, color.Blue, color.Alpha);
		SDL_RenderFillRect(InstanceRenderer, SquarePtr);
	}
	void Draw()
	{
		SDL_RenderFillRect(InstanceRenderer, SquarePtr);
	}


};