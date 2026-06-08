#include "GUI_Layer_Window.h"
#include <vector>
#include "GUI_Body.h"
#include "GUI_Element.h"
#include "GUI_Element_Color.h"
#include "GUI_Element_Location.h"
#include "GUI_Element_Size.h"
#include "GUI_Element_Shape.h"


std::vector <GUI_Body> Layer_Window;
std::vector <GUI_Body>* Layer_Window_Pointer = &Layer_Window;
GUI_Body Main_Window_Body = GUI_Body();


std::vector<GUI_Body>* GUI_Layer_Window::GetPointer()
{
	return Layer_Window_Pointer;
}
void GUI_Layer_Window::AddElementsToBody()
{
	Main_Window_Body.Add_Element(GUI_Element_Color(255, 255, 255, 255)); // White color
	Main_Window_Body.Add_Element(GUI_Element_Location(0, 0)); // 0,0, top left corner of the screen
	Main_Window_Body.Add_Element(GUI_Element_Size(640, 480)); // 640x480 size
	Main_Window_Body.Add_Element(GUI_Element_Shape(GUI_Element_Shape::Shape_Type::Rectangle)); // Placeholder for the shape element, to be defined later3
}
void GUI_Layer_Window::AddBodiesToLayer()
{
	Layer_Window.push_back(Main_Window_Body);
}



