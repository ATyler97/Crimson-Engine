
#include "Body_Window.h"
GUI_Body WB = GUI_Body();

static void InstanceBodyWindow(){

	GUI_Body Window_Body = GUI_Body();

	Window_Body.Color = GUI_Element_Color(255, 255, 255, 255);
	Window_Body.Location = GUI_Element_Location(0, 0);
	Window_Body.Size = GUI_Element_Size(0, 0);
	Window_Body.Shape = GUI_Element_Shape(GUI_Element_Shape::Shape_Type::Rectangle_Filled);
	WB = Window_Body;
}

Body_Window::Body_Window()
{
	InstanceBodyWindow();
}

GUI_Body Body_Window::GetBodyWindow()
{
	return WB;
}
