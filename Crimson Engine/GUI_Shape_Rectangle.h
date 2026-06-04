#pragma once
#include <SDL2/SDL.h>
#include "GUI_Element.h"
#include "GUI_Color.h"


class GUI_Shape_Rectangle : GUI_Element
{
	public:
		GUI_Shape_Rectangle(int X, int Y, int W, int H, SDL_Renderer* Renderer, GUI_Color* Colors);
		void Draw();
	private:
};