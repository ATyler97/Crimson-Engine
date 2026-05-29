#include "Comp_UI_BaseWindow.h"

Comp_UI_BaseWindow::Comp_UI_BaseWindow(SDL_Renderer* Rend)
{
	Comp_Shape_Rectangle WindowBody = Comp_Shape_Rectangle(0, 0, 640, 480, Rend, &ColorBase);
	WindowBody.DrawRect();

	Comp_Shape_Rectangle WindowTopBar = Comp_Shape_Rectangle(0, 0, 620, 20, Rend, &ColorTopBar);
	WindowTopBar.DrawRect();

	Comp_Shape_Rectangle WindowScrollBarPath = Comp_Shape_Rectangle(620, 20, 20, 460, Rend, &ColorScrollBarPath);
	WindowScrollBarPath.DrawRect();

	Comp_Shape_Rectangle WindowExitButton = Comp_Shape_Rectangle(620, 0, 20, 20, Rend, &ColorExitButton);
	WindowExitButton.DrawRect();

	Comp_Shape_Rectangle WindowScrollBar = Comp_Shape_Rectangle(623, 23, 13, 60, Rend, &ColorScrollBar);
	WindowScrollBarPath.DrawRect();

}
