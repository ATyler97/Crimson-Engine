#pragma once
#include "System_Base.h"
#include "GUI_Object.h"
#include "Object.h"
class System_ObjectProcessor : public System_Base 
{
	public:

		void MouseClicked(GUI_Object body);
		void MoveObjectWithMouse(Objects Obj);

};