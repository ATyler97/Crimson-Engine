#include "GUI_Object.h"

bool GUI_Object::MouseOver(int X, int Y)
{
	this->Location->GetXpos();

	if (X >= this->Location->GetXpos() &&
		Y >= this->Location->GetYpos() &&
		X <= this->Size->GetWidth() &&
		Y <= this->Size->GetHeight()) {
		return true;
	}
	else {
		return false;
	}
}
void GUI_Object::DetermineShape()
{
	switch (Shape->TypeOfShape) {
	case GUI_Element_Shape::Shape_Type::Rectangle:
		Shape->Rect.x = Location->X;
		Shape->Rect.y = Location->Y;
		Shape->Rect.w = Size->Width;
		Shape->Rect.h = Size->Height;
		break;
	case GUI_Element_Shape::Shape_Type::Rectangle_Filled:
		Shape->Rect.x = Location->X;
		Shape->Rect.y = Location->Y;
		Shape->Rect.w = Size->Width;
		Shape->Rect.h = Size->Height;
		break;
	}
}