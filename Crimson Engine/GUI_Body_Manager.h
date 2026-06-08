#pragma once
#include <vector>
#include "GUI_Body.h"

class GUI_Body_Manager
{
	public:
		GUI_Body GetBody(int BodyIndex);
		void AddBodyToLayer(GUI_Body Body);
		void ClearBodiesFromLayer();
		std::vector<GUI_Body>* GetPointer();
};