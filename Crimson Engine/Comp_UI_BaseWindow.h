#include "Comp_Shape_Rectangle.h"
#include <SDL2/SDL.h>
#include "Component.h"
#include <vector>
struct Comp_UI_BaseWindow{
	SDL_Renderer* Render;
	std::vector<SDL_Rect> Window;
	
	//Window Body
	Comp_Color BodyColor = Comp_Color(25, 25, 25, 255);
	Comp_Color* BodyColorPTR;
	Comp_Shape_Rectangle WindowBody = Comp_Shape_Rectangle(0, 0, 640, 480, Render, BodyColorPTR);
	Comp_UI_BaseWindow(SDL_Renderer* Rend) { Render = Rend; };
};