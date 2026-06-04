#pragma once
#include "GUI_Shape_Rectangle.h"
#include <SDL2/SDL.h>
#include <string>

class GUI_Button : public GUI_Element
{
	public:
		int ButtonXLoc;
		int ButtonYLoc;
		int ButtonWidth;
		int ButtonHeight;
		SDL_Renderer* Rend;
		std::string ButtonID;

		GUI_Color Color = GUI_Color(0,0,0,0);
		GUI_Shape_Rectangle ButtonGUI = GUI_Shape_Rectangle(ButtonXLoc,ButtonYLoc,ButtonWidth,ButtonHeight,Rend,&Color);
	
		GUI_Button(int X, int Y, int W, int H, SDL_Renderer* Render, std::string ID);
		void CreateButton(int X, int Y, int W, int H,std::string ID);
		std::string ButtonPressed();
};

