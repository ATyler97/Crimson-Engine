#include "GUI_Assembly.h"
#include "Object.h"


std::vector<GUI_Object> Objects = std::vector<GUI_Object>();

GUI_Assembly::GUI_Assembly()
{
	InstanceGUI_Assembly();
}
std::vector<GUI_Object> GUI_Assembly::GetAssembly() {
	return Objects;
}

void GUI_Assembly::InstanceGUI_Assembly()
{
	//std::vector<GUI_Object> Objects;


	GUI_Object Object = GUI_Object();
	GUI_Object TopBar = GUI_Object();
	GUI_Object Exit = GUI_Object();
	GUI_Object SliderBar = GUI_Object();
	GUI_Object Slider = GUI_Object();

	Object.Color = GUI_Element_Color(25, 25, 25, 0);
	Object.Location = GUI_Element_Location(0, 0);
	Object.Size = GUI_Element_Size(640, 480);
	Object.Shape = GUI_Element_Shape(GUI_Element_Shape::Shape_Type::Rectangle_Filled);
	Object.Visibility = GUI_Element_Visibility(255);
	Object.Clickable = GUI_Element_Clickable(false);
	Objects.push_back(Object);

	TopBar.Color = GUI_Element_Color(221, 96, 49, 0);
	TopBar.Location = GUI_Element_Location(0, 0);
	TopBar.Size = GUI_Element_Size(620, 20);
	TopBar.Shape = GUI_Element_Shape(GUI_Element_Shape::Shape_Type::Rectangle_Filled);
	TopBar.Visibility = GUI_Element_Visibility(255);
	TopBar.EventArea = GUI_Element_EventArea(TopBar.Size->Height, TopBar.Size->Width, TopBar.Location->X, TopBar.Location->Y);
	TopBar.Clickable = GUI_Element_Clickable(true);
	Objects.push_back(TopBar);

	Exit.Color = GUI_Element_Color(179, 57, 81, 0);
	Exit.Location = GUI_Element_Location(620, 0);
	Exit.Size = GUI_Element_Size(20, 20);
	Exit.Shape = GUI_Element_Shape(GUI_Element_Shape::Shape_Type::Rectangle_Filled);
	Exit.Visibility = GUI_Element_Visibility(255);
	Exit.EventArea = GUI_Element_EventArea(Exit.Size->Height, Exit.Size->Width, Exit.Location->X, Exit.Location->Y);
	Exit.Clickable = GUI_Element_Clickable(false);
	Objects.push_back(Exit);

	SliderBar.Color = GUI_Element_Color(56, 56, 56, 0);
	SliderBar.Location = GUI_Element_Location(620, 20);
	SliderBar.Size = GUI_Element_Size(20, 460);
	SliderBar.Shape = GUI_Element_Shape(GUI_Element_Shape::Shape_Type::Rectangle_Filled);
	SliderBar.Visibility = GUI_Element_Visibility(255);
	SliderBar.Clickable = GUI_Element_Clickable(false);
	Objects.push_back(SliderBar);

	Slider.Color = GUI_Element_Color(80, 80, 80, 0);
	Slider.Location = GUI_Element_Location(623, 23);
	Slider.Size = GUI_Element_Size(13, 60);
	Slider.Shape = GUI_Element_Shape(GUI_Element_Shape::Shape_Type::Rectangle_Filled);
	Slider.Visibility = GUI_Element_Visibility(255);
	Slider.EventArea = GUI_Element_EventArea(Slider.Size->Height, Slider.Size->Width, Slider.Location->X, Slider.Location->Y);
	Slider.Clickable = GUI_Element_Clickable(false);
	Objects.push_back(Slider);
	InitalizeAssemblyShape();

}

std::vector<GUI_Object> GUI_Assembly::GetObjects() {
	return Objects;
}
void GUI_Assembly::InitalizeAssemblyShape() {
	for (int i = 0; i < Objects.size(); i++) 
	{
		Objects[i].Shape->Rect.x = Objects[i].Location->X;
		Objects[i].Shape->Rect.y = Objects[i].Location->Y;
		Objects[i].Shape->Rect.w = Objects[i].Size->Width; 
		Objects[i].Shape->Rect.h = Objects[i].Size->Height;
	}
}
void GUI_Assembly::Move(int x, int y)
{
	for (int i = 0; i < Objects.size();i++) {
		Objects[i].Location->X = Objects[i].Location->X + x;
		Objects[i].Location->Y = Objects[i].Location->Y + y;

		Objects[i].Size->Width = Objects[i].Size->Width + x;
		Objects[i].Size->Width = Objects[i].Size->Height + y;
	}
}

bool GUI_Assembly::IsMouseOverClickable(int MouseX, int MouseY)
{
	for(int i = 0; i < Objects.size(); i++)
	{
		if (Objects[i].Clickable && Objects[i].MouseOver(MouseX,MouseY)) {
			return true;
		}
		else {
			return false;
		}
	}
}


