#pragma once
#include "States.h"
#include "GUI_Scene.h"
#include "GUI_Layer.h"
#include "GUI_Object.h"
#include "GUI_Assembly.h"
#include <vector>
#include <string>


class GUI_Logic
{
public:
	GUI_Logic();
	void SetState(States* state);
	void SetActiveScene(GUI_Scene* AScene);
	void MouseClicked();

};

