#pragma once
#include <vector>
#include "GUI_Element.h"
struct GUI_Body
{
public:
	std::vector <GUI_Element> Elements;
	void Add_Element(GUI_Element Element)
	{
		Elements.push_back(Element);
	}
};