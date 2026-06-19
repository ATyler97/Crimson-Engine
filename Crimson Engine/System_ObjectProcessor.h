#pragma once
#include "System_Base.h"
#include "GUI_Body.h"
#include "Object.h"
class System_ObjectProcessor : public System_Base 
{
	public:

		void MouseClicked(GUI_Body body);
		void MoveObjectWithMouse(Objects Obj);

};