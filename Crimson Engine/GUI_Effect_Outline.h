#pragma once
#include <SDL2/SDL.h>
#include "GUI_Element.h"
#include "GUI_Color.h"
#include "GUI_Shape_Rectangle.h"

struct GUI_Effect_Outline : GUI_Element
{
	GUI_Effect_Outline(SDL_Rect ShapeToOutline);

};