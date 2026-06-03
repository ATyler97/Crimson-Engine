#include "GUI_Shape_Rectangle.h"
#include <SDL2/SDL.h>
#include "GUI_Element.h"
struct GUI_Base_Window : GUI_Element{
	GUI_Color ColorBase = GUI_Color(30, 30, 30, 256);
	GUI_Color ColorTopBar = GUI_Color(221, 96, 49, 256);
	GUI_Color ColorScrollBarPath = GUI_Color(56, 56, 56, 256);
	GUI_Color ColorExitButton = GUI_Color(179, 57, 81, 256);
	GUI_Color ColorScrollBar = GUI_Color(80, 80, 80, 256);
	GUI_Base_Window(SDL_Renderer* Rend) ;
	
};