#pragma once
#include <cstdint>
#include <string>

class GUI_Element
{
public:
	enum ElementType
	{
		Color,
		Location,
		Shape,
		Size,
	};
	ElementType TypeOfElement;
	virtual ~GUI_Element() {};
	virtual void SetElementType(ElementType type){ TypeOfElement = type; };
	virtual ElementType GetElementType() { return TypeOfElement; };
	
};
