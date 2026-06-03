#include "System_Input.h"
#include <iostream>
#include <SDL2/SDL.h>
#include "vector"

bool KEYS[322];
bool LeftMouseButton;
bool RightMouseButton;
Sint32 MouseXpos;
Sint32 MouseYpos;
Sint32 ScrollPosition;

void System_Input::Initialize()
{
	std::cout << "\t\tInput System | Initialize() | 'Initializing Input system' " << std::endl;
	
	for (int i = 0; i < 322; i++) {
		KEYS[i] = false;
	}

	LeftMouseButton = false;
	RightMouseButton = false;
	ScrollPosition = 0;
	Sint32 MouseXpos = 0;
	Sint32 MouseYpos = 0;

}
void System_Input::Update()
{
	std::cout << "\n\t\tInput System | Update() | 'Updating Input system' " << std::endl;
}
void System_Input::ProcessInput() 
{
	
}
void System_Input::KeyReleased(SDL_Keysym Key)
{
	KEYS[Key.sym] = false;
}
void System_Input::MouseMoved(SDL_MouseMotionEvent Mouse)
{
	MouseXpos = Mouse.x;
	MouseYpos = Mouse.y;
}
void System_Input::MouseButtonPressed(SDL_MouseButtonEvent Mouse)
{
	switch (Mouse.button) {
		case SDL_BUTTON_LEFT:
			break;
		case SDL_BUTTON_MIDDLE:
			break;
		case SDL_BUTTON_RIGHT:
			break;
	}
}
void System_Input::MouseButtonReleased(SDL_MouseButtonEvent Mouse)
{
	switch (Mouse.button) {
	case SDL_BUTTON_LEFT:
		break;
	case SDL_BUTTON_MIDDLE:
		break;
	case SDL_BUTTON_RIGHT:
		break;
	}
}
void System_Input::MouseWheel(SDL_MouseWheelEvent Mouse)
{
	ScrollPosition = ScrollPosition + Mouse.y;
}
void System_Input::KeyPressed(SDL_Keysym Key) 
{
	KEYS[Key.sym] = true;
}


