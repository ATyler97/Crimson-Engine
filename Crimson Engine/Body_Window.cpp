#include "Body_Window.h"
#include "Object.h"

Objects window = Objects();
//std::vector<GUI_Body> window = std::vector<GUI_Body>();

Body_Window::Body_Window()
{
	InstanceWindow();
}

//std::vector<GUI_Body> Body_Window::GetVectorWindow()
//{
//	return window;
//}
Objects Body_Window::GetVectorWindow()
{
	return window;
}


void Body_Window::InstanceWindow()
{
	//std::vector<GUI_Body> Window;


	GUI_Body Body = GUI_Body();
	GUI_Body TopBar = GUI_Body();
	GUI_Body Exit = GUI_Body();
	GUI_Body SliderBar = GUI_Body();
	GUI_Body Slider = GUI_Body();

	Body.Color = GUI_Element_Color(25, 25, 25, 0);
	Body.Location = GUI_Element_Location(0, 0);
	Body.Size = GUI_Element_Size(640, 480);
	Body.Shape = GUI_Element_Shape(GUI_Element_Shape::Shape_Type::Rectangle_Filled);
	Body.Visibility = GUI_Element_Visibility(255);
	Body.Clickable = GUI_Element_Clickable(false);
	window.Object.push_back(Body);

	TopBar.Color = GUI_Element_Color(221, 96, 49, 0);
	TopBar.Location = GUI_Element_Location(0, 0);
	TopBar.Size = GUI_Element_Size(620, 20);
	TopBar.Shape = GUI_Element_Shape(GUI_Element_Shape::Shape_Type::Rectangle_Filled);
	TopBar.Visibility = GUI_Element_Visibility(255);
	TopBar.EventArea = GUI_Element_EventArea(TopBar.Size->Height, TopBar.Size->Width, TopBar.Location->X, TopBar.Location->Y);
	TopBar.Clickable = GUI_Element_Clickable(true);
	window.Object.push_back(TopBar);

	Exit.Color = GUI_Element_Color(179, 57, 81, 0);
	Exit.Location = GUI_Element_Location(620, 0);
	Exit.Size = GUI_Element_Size(20, 20);
	Exit.Shape = GUI_Element_Shape(GUI_Element_Shape::Shape_Type::Rectangle_Filled);
	Exit.Visibility = GUI_Element_Visibility(255);
	Exit.EventArea = GUI_Element_EventArea(Exit.Size->Height, Exit.Size->Width, Exit.Location->X, Exit.Location->Y);
	Exit.Clickable = GUI_Element_Clickable(false);
	window.Object.push_back(Exit);

	SliderBar.Color = GUI_Element_Color(56, 56, 56, 0);
	SliderBar.Location = GUI_Element_Location(620, 20);
	SliderBar.Size = GUI_Element_Size(20, 460);
	SliderBar.Shape = GUI_Element_Shape(GUI_Element_Shape::Shape_Type::Rectangle_Filled);
	SliderBar.Visibility = GUI_Element_Visibility(255);
	SliderBar.Clickable = GUI_Element_Clickable(false);
	window.Object.push_back(SliderBar);

	Slider.Color = GUI_Element_Color(80, 80, 80, 0);
	Slider.Location = GUI_Element_Location(623, 23);
	Slider.Size = GUI_Element_Size(13, 60);
	Slider.Shape = GUI_Element_Shape(GUI_Element_Shape::Shape_Type::Rectangle_Filled);
	Slider.Visibility = GUI_Element_Visibility(255);
	Slider.EventArea = GUI_Element_EventArea(Slider.Size->Height, Slider.Size->Width, Slider.Location->X, Slider.Location->Y);
	Slider.Clickable = GUI_Element_Clickable(false);
	window.Object.push_back(Slider);

	//window = Window;
}

