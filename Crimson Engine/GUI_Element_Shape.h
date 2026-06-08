#pragma once
#include "GUI_Element.h"

struct GUI_Element_Shape : public GUI_Element
{
	ElementType TypeOfElement = Shape;
	enum Shape_Type
	{
		Rectangle,
		Rectangle_Filled,
		Circle,
		Circle_Filled,
		Triangle,
		Triangle_Filled
	};
	Shape_Type TypeOfShape;
	GUI_Element_Shape(Shape_Type shapeType) {
		TypeOfShape = shapeType;
	}
	void SetShapeType(Shape_Type shapeType) {
		TypeOfShape = shapeType;
	}
	Shape_Type GetShapeType() {
		return TypeOfShape;
	}
};
