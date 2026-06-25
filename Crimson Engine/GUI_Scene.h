#pragma once
#include <vector>;
#include "GUI_Layer.h"
#include "GUI_Object.h"
#include "GUI_Assembly.h"
struct GUI_Scene
{
	std::vector <GUI_Assembly> Scene;

	void AddAssemblyToScene(GUI_Assembly AssemblyToAdd);
};