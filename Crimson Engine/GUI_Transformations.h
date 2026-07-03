#pragma once
#include "GUI_Transformations.h"
#include "GUI_Assembly.h"
#include <vector>
class GUI_Transformations
{
	public:

		void MoveObject(GUI_Object* obj,char TypeOfAxis, int NewLocation);

		void ScaleObject(GUI_Object* obj, float scaleFactor);

		void ScaleObjectAxis(GUI_Object* obj, float scaleFactor,char TypeOfAxis);

		void MoveTo(std::vector<GUI_Object*> obj);

		void MoveBy(std::vector<GUI_Object*> obj);

		void ScaleObject(std::vector<GUI_Object*> obj, float scaleFactor);

		void ScaleObjectAxis(std::vector<GUI_Object*> obj, float scaleFactor,char TypeOfAxis);

};

