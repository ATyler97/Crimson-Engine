#include "GUI_Logic.h"
#include "Logging.h"
States* STATE;
GUI_Scene* Active;

GUI_Logic::GUI_Logic()
{}

void GUI_Logic::Check() 
{
	Logging::Log(STATE->MainSt8.Debug, 53);
	MouseClicked();
}
void GUI_Logic::SetState(States* state)
{
	STATE = state;
}

void GUI_Logic::SetActiveScene(GUI_Scene* AScene)
{
	Active = AScene;
}

void GUI_Logic::MouseClicked()
{
	Logging::Log(STATE->MainSt8.Debug, 54);
	if (STATE->InputSt8.LeftMouseButton) {
		for (int i = 0; i < Active->Scene.size(); i++) {
			Active->Scene[i].Move(STATE->InputSt8.MouseXpos, STATE->InputSt8.MouseYpos);
		}
	}
}


