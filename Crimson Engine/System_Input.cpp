#include "System_Input.h"
#include <iostream>
#include <SDL2/SDL.h>
#include "vector"
#include "ObjectProcessor.h"
#include "Logging.h"

void System_Input::Initialize()
{
	Logging::Log(State->MainSt8.Debug, 32);
}
void System_Input::Update()
{
	std::cout << "\n\t\tInput System | Update() | 'Updating Input system' " << std::endl;
	ProcessInput();
}
void System_Input::ProcessInput() 
{

}
void System_Input::KeyReleased(SDL_Keysym Key)
{
	State->InputSt8.KEYS[Key.sym] = false;
}
void System_Input::MouseMoved(SDL_MouseMotionEvent Mouse)
{
	State->InputSt8.MouseXOld = State->InputSt8.MouseXpos;
	State->InputSt8.MouseYOld = State->InputSt8.MouseYpos;
	State->InputSt8.MouseXpos = Mouse.x;
	State->InputSt8.MouseYpos = Mouse.y;
}
void System_Input::MouseButtonPressed(SDL_MouseButtonEvent Mouse)
{
	switch (Mouse.button) {
		case SDL_BUTTON_LEFT:
			State->InputSt8.LeftMouseButton = true;
			break;
		case SDL_BUTTON_MIDDLE:
			State->InputSt8.MiddleMouseButton = true;
			break;
		case SDL_BUTTON_RIGHT:
			State->InputSt8.RightMouseButton = true;
			break;
	}
}
void System_Input::MouseButtonReleased(SDL_MouseButtonEvent Mouse)
{
	switch (Mouse.button) {
		case SDL_BUTTON_LEFT:
			State->InputSt8.LeftMouseButton = false;
			break;
		case SDL_BUTTON_MIDDLE:
			State->InputSt8.MiddleMouseButton = false;
			break;
		case SDL_BUTTON_RIGHT:
			State->InputSt8.RightMouseButton = false;
			break;
		}
}
void System_Input::MouseWheel(SDL_MouseWheelEvent Mouse)
{
	State->InputSt8.ScrollPosition = State->InputSt8.ScrollPosition + Mouse.y;
}
void System_Input::KeyPressed(SDL_Keysym Key) 
{
	State->InputSt8.KEYS[Key.sym] = true;
}


