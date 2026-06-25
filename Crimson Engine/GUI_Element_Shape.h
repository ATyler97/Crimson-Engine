#pragma once
#include "GUI_Element.h"
#include <SDL2/SDL_rect.h>
#include <SDL2/SDL_shape.h>

struct GUI_Element_Shape : public GUI_Element
{
	SDL_Rect Rect;
	enum class Shape_Type
	{
		Rectangle,
		Rectangle_Filled,
		Line,
		Point,
	};

	Shape_Type TypeOfShape;

	GUI_Element_Shape(Shape_Type type)
		: TypeOfShape(type)
	{
		TypeOfElement = Shape;

	}
	
};
