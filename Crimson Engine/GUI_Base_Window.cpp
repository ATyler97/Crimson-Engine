#include "GUI_Base_Window.h"
#include "GUI_Button.h"
#include "GUI_Element.h"

GUI_Base_Window::GUI_Base_Window(SDL_Renderer* Render)
{
	GUI_Shape_Rectangle WindowBody = GUI_Shape_Rectangle(0, 0, 640, 480, Render, &ColorBase);
	WindowBody.DrawRect();

	GUI_Shape_Rectangle WindowTopBar = GUI_Shape_Rectangle(0, 0, 620, 20, Render, &ColorTopBar);
	WindowTopBar.DrawRect();

	GUI_Shape_Rectangle WindowScrollBarPath = GUI_Shape_Rectangle(620, 20, 20, 460, Render, &ColorScrollBarPath);
	WindowScrollBarPath.DrawRect();

	GUI_Shape_Rectangle WindowExitButton = GUI_Shape_Rectangle(620, 0, 20, 20, Render, &ColorExitButton);
	WindowExitButton.DrawRect();

	GUI_Shape_Rectangle WindowScrollBar = GUI_Shape_Rectangle(623, 23, 13, 60, Render, &ColorScrollBar);
	WindowScrollBarPath.DrawRect();

	GUI_Button WindowTopBarButton = GUI_Button(Render);
	WindowTopBarButton.CreateButton(0, 0, 620, 20, "WindowTopBar");

	GUI_Button WindowScrollBarButton = GUI_Button(Render);
	WindowScrollBarButton.CreateButton(623, 23, 13, 60, "WindowScrollBar");

	GUI_Button WindowExitButtonButton = GUI_Button(Render);
	WindowExitButtonButton.CreateButton(620, 0, 20, 20, "WindowExitButton");

}
