#include "GUI_Transformations.h"
#include "MouseMath.h"

void GUI_Transformations::MoveObject(GUI_Object* obj,char TypeOfAxis, int NewLocation)
{
	if (TypeOfAxis == 'X') {
		obj->Location->X = NewLocation;
	}
	if (TypeOfAxis == 'Y') {
		obj->Location->Y = NewLocation;
	}
	if (TypeOfAxis == 'Z') {
		//obj->Location->Z = NewLocation;
	}
	else {
		
	}
}

void GUI_Transformations::ScaleObject(GUI_Object* obj, float scaleFactor)
{

}

void GUI_Transformations::ScaleObjectAxis(GUI_Object* obj, float scaleFactor,char TypeOfAxis)
{

}

void GUI_Transformations::MoveObject(std::vector<GUI_Object*> obj,const char TypeOfAxis, int NewLocation)
{
	for (int i = 0; i < obj.size(); i++) 
	{
		if (TypeOfAxis == 'X') {
			obj[i]->Location->X = NewLocation;
		}
		if (TypeOfAxis == 'Y') {
			obj[i]->Location->Y = NewLocation;
		}
		if (TypeOfAxis == 'Z') {
			//obj->Location->Z = NewLocation;
		}
		else {

		}
	}
}

void GUI_Transformations::ScaleObject(std::vector<GUI_Object*> obj, float scaleFactor)
{

}

void GUI_Transformations::ScaleObjectAxis(std::vector<GUI_Object*> obj,float scaleFactor,char TypeOfAxis)
{

}
