#pragma once
#include <SDL2/SDL.h>
#include "Component.h"
#include "Comp_Color.h"

class Comp_Shape_Rectangle : public Component
{
	public:
		Comp_Shape_Rectangle(int X, int Y, int W, int H, SDL_Renderer* Renderer, Comp_Color* Colors);
		void DrawRect();
	private:
};