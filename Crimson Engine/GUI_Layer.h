#pragma once
#include <vector>
#include "GUI_Body.h"
#include "GUI_Element.h"
#include "GUI_Element_Color.h"
#include "GUI_Element_Location.h"
#include "GUI_Element_Size.h"
#include "GUI_Element_Shape.h"

struct GUI_Layer
{
	std::vector <GUI_Body> Layer;
	std::vector <GUI_Body>* LayerPtr;
	std::vector <GUI_Body>* GetPointer();
	virtual void AddElementsToBody();
	void AddBodiesToLayer();
};
