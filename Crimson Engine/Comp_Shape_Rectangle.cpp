#pragma once
#include "Comp_Shape_Rectangle.h"
#include <SDL2/SDL.h>
#include "Component.h"
#include "Comp_Color.h"

SDL_Rect r;
SDL_Renderer* Rend = NULL;
Comp_Color* Colors; 

Comp_Shape_Rectangle::Comp_Shape_Rectangle(int X,int Y,int W,int H, SDL_Renderer* Renderer, Comp_Color* Color)
{
	r.x = X;
	r.y = Y;
	r.w = W;
	r.h = H;
	Rend = Renderer;
	Colors = Color;
}

void Comp_Shape_Rectangle::DrawRect()
{
	SDL_SetRenderDrawColor(Rend, Colors->Red, Colors->Green, Colors->Blue, Colors->Alpha);
	SDL_RenderFillRect(Rend, &r);
}
