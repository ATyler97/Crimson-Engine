#pragma once
#include "Comp_Shape_Rectangle.h"
#include <SDL2/SDL.h>
#include "Component.h"
#include <string>

class Comp_UI_Button
{
	int ButtonXLoc;
	int ButtonYLoc;
	int ButtonWidth;
	int ButtonHeight;
	SDL_Renderer* Rend;
	std::string ButtonID;

	Comp_Color Color = Comp_Color(148,139,137,255);
	SDL_Event ButtonEvent;
	Comp_Shape_Rectangle ButtonGUI = Comp_Shape_Rectangle(ButtonXLoc,ButtonYLoc,ButtonWidth,ButtonHeight,Rend,&Color);
	
	Comp_UI_Button(SDL_Renderer* Rend);
	void CreateButton(int X, int Y, int W, int H,std::string ID);
	std::string ButtonPressed();
};

