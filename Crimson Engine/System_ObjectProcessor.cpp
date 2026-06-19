#include "System_ObjectProcessor.h"
#include "GUI_Body.h"
#include "Object.h"
#include "States.h"
void System_ObjectProcessor::MouseClicked(GUI_Body body)
{	
	if (body.Clickable) {
		if (State->InputSt8.RightMouseButton == true &&  
			State->InputSt8.MouseXpos >= body.Location->X &&	
			State->InputSt8.MouseYpos <= body.Location->Y &&
			State->InputSt8.MouseXpos <= body.Size->Width &&
			State->InputSt8.MouseYpos >= body.Size->Height)
		{
			body.Clickable->Clicked = true;
		}
	}
}
void System_ObjectProcessor::MoveObjectWithMouse(Objects Obj) 
{
	for (int i = 0; i < Obj.Object.size(); i++) 
	{
		Obj.Object[i].Location->X = State->InputSt8.MouseXpos;
		Obj.Object[i].Location->Y = State->InputSt8.MouseYpos;
	}
}

