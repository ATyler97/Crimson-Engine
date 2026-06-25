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
	Logging::Log(State->MainSt8.Debug, 33);
}
void System_Input::KeyReleased(SDL_Keysym Key)
{
	Logging::Log(State->MainSt8.Debug, 35);
	State->InputSt8.KEYS[Key.sym] = false;
}
void System_Input::MouseMoved(SDL_MouseMotionEvent Mouse)
{
	Logging::Log(State->MainSt8.Debug, 36);
	State->InputSt8.MouseXOld = State->InputSt8.MouseXpos;
	State->InputSt8.MouseYOld = State->InputSt8.MouseYpos;
	State->InputSt8.MouseXpos = Mouse.x;
	State->InputSt8.MouseYpos = Mouse.y;
}
void System_Input::MouseButtonPressed(SDL_MouseButtonEvent Mouse)
{
	switch (Mouse.button) {
		case SDL_BUTTON_LEFT:
			Logging::Log(State->MainSt8.Debug, 37);
			State->InputSt8.LeftMouseButton = true;
			break;
		case SDL_BUTTON_MIDDLE:
			Logging::Log(State->MainSt8.Debug, 38);
			State->InputSt8.MiddleMouseButton = true;
			break;
		case SDL_BUTTON_RIGHT:
			Logging::Log(State->MainSt8.Debug, 39);
			State->InputSt8.RightMouseButton = true;
			break;
	}
}
void System_Input::MouseButtonReleased(SDL_MouseButtonEvent Mouse)
{
	switch (Mouse.button) {
		case SDL_BUTTON_LEFT:
			Logging::Log(State->MainSt8.Debug, 40);
			State->InputSt8.LeftMouseButton = false;
			break;
		case SDL_BUTTON_MIDDLE:
			Logging::Log(State->MainSt8.Debug, 41);
			State->InputSt8.MiddleMouseButton = false;
			break;
		case SDL_BUTTON_RIGHT:
			Logging::Log(State->MainSt8.Debug, 42);
			State->InputSt8.RightMouseButton = false;
			break;
		}
}
void System_Input::MouseWheel(SDL_MouseWheelEvent Mouse)
{
	Logging::Log(State->MainSt8.Debug, 43);
	State->InputSt8.ScrollPosition = State->InputSt8.ScrollPosition + Mouse.y;
}
void System_Input::KeyPressed(SDL_Keysym Key) 
{
	Logging::Log(State->MainSt8.Debug, 44);
	State->InputSt8.KEYS[Key.sym] = true;
}


