#pragma once
#include "GUI_Shape_Rectangle.h"
#include <SDL2/SDL.h>
#include "GUI_Element.h"
#include "GUI_Color.h"

SDL_Rect r;
SDL_Renderer* Rend = NULL;
GUI_Color* Colors; 

GUI_Shape_Rectangle::GUI_Shape_Rectangle(int X,int Y,int W,int H, SDL_Renderer* Renderer, GUI_Color* Color)
{
	r.x = X;
	r.y = Y;
	r.w = W;
	r.h = H;
	Rend = Renderer;
	Colors = Color;
}

void GUI_Shape_Rectangle::DrawRect()
{
	SDL_SetRenderDrawColor(Rend, Colors->Red, Colors->Green, Colors->Blue, Colors->Alpha);
	SDL_RenderFillRect(Rend, &r);
}
