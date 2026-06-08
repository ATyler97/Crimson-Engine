#pragma once
#include <vector>
#include "GUI_Body.h"
#include "GUI_Layer.h"

struct GUI_Layer_Window : public GUI_Layer
{

	std::vector <GUI_Body>* GetPointer();
	void AddElementsToBody();
	void AddBodiesToLayer();
};