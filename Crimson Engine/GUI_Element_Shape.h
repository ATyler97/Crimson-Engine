#pragma once
#include "GUI_Element.h"

struct GUI_Element_Shape : public GUI_Element
{

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
