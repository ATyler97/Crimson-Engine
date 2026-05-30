#include "Comp_Shape_Rectangle.h"
#include <SDL2/SDL.h>
#include "Component.h"
struct Comp_UI_BaseWindow{
	Comp_Color ColorBase = Comp_Color(30, 30, 30, 256);
	Comp_Color ColorTopBar = Comp_Color(221, 96, 49, 256);
	Comp_Color ColorScrollBarPath = Comp_Color(56, 56, 56, 256);
	Comp_Color ColorExitButton = Comp_Color(179, 57, 81, 256);
	Comp_Color ColorScrollBar = Comp_Color(80, 80, 80, 256);
	Comp_UI_BaseWindow(SDL_Renderer* Rend) ;
	
};