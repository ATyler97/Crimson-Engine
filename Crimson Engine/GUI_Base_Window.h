#pragma once
#include "GUI_Shape_Rectangle.h"
#include "GUI_Button.h"
#include <SDL2/SDL.h>
#include "GUI_Element.h"
#include "GUI_Color.h"
#include <vector>
class GUI_Base_Window : GUI_Element {
public:
	GUI_Color ColorTopBar;
	GUI_Color ColorScrollBarPath;
	GUI_Color ColorExitButton;
	GUI_Color ColorScrollBar;
	GUI_Color ColorBase;

	GUI_Shape_Rectangle WindowBody;
	GUI_Shape_Rectangle WindowTopBar;
	GUI_Shape_Rectangle WindowScrollBarPath;
	GUI_Shape_Rectangle WindowExitButton;
	GUI_Shape_Rectangle WindowScrollBar;

	GUI_Button WindowTopBarButton;
	GUI_Button WindowScrollBarButton;
	GUI_Button WindowExitButtonButton;

	GUI_Base_Window(SDL_Renderer* Renderer);
	void Draw();
};