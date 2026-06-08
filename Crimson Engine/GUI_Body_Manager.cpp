#include "GUI_Body_Manager.h"
#include <vector>
#include "GUI_Body.h"

std::vector <GUI_Body> Layer;
std::vector <GUI_Body>* Layer_Pointer = &Layer;

GUI_Body GUI_Body_Manager::GetBody(int BodyIndex)
{
	return Layer[BodyIndex];
}

void GUI_Body_Manager::AddBodyToLayer(GUI_Body Body)
{
	Layer.push_back(Body);
}

void GUI_Body_Manager::ClearBodiesFromLayer()
{
	Layer.clear();
}
std::vector <GUI_Body>* GUI_Body_Manager::GetPointer()
{
	return Layer_Pointer;
}
