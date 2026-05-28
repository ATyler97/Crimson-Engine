#pragma once
#include <SDL2/SDL.h>
#include "Component.h"
#include "Comp_Color.h"
#include "Comp_Shape_Rectangle.h"

struct Comp_Effect_Outline : public Component 
{
	Comp_Effect_Outline(SDL_Rect ShapeToOutline);

};