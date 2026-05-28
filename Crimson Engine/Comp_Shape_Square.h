#pragma once
#include <SDL2/SDL.h>
#include "Component.h"
#include "Comp_Color.h"

struct Comp_Shape_Square : public Component
{
	SDL_Rect Square;
	SDL_Rect* SquarePtr = &Square;
	SDL_Renderer* InstanceRenderer;

	Comp_Shape_Square(int Size, SDL_Renderer* InstanceRenderer)
	{
		Square.x, Square.y = 0;
		Square.w = Size;
		Square.h = Size;
		SDL_RenderFillRect(InstanceRenderer, SquarePtr);
	}

	Comp_Shape_Square(int Size, Comp_Color color, SDL_Renderer* InstanceRenderer)
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