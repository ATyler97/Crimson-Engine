#include "InputSystem.h"
#include <iostream>
#include <SDL2/SDL.h>
#include "vector"

bool KEYS[322];
bool LeftMouseButton;
bool RightMouseButton;
Sint32 MouseXpos;
Sint32 MouseYpos;
Sint32 ScrollPosition;

void InputSystem::Initialize()
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
void InputSystem::Update()
{
	std::cout << "\n\t\tInput System | Update() | 'Updating Input system' " << std::endl;
}
void InputSystem::ProcessInput() 
{
	
}
void InputSystem::KeyReleased(SDL_Keysym Key)
{
	KEYS[Key.sym] = false;
}
void InputSystem::MouseMoved(SDL_MouseMotionEvent Mouse)
{
	MouseXpos = Mouse.x;
	MouseYpos = Mouse.y;
}
void InputSystem::MouseButtonPressed(SDL_MouseButtonEvent Mouse)
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
void InputSystem::MouseButtonReleased(SDL_MouseButtonEvent Mouse)
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
void InputSystem::MouseWheel(SDL_MouseWheelEvent Mouse)
{
	ScrollPosition = ScrollPosition + Mouse.y;
}
void InputSystem::KeyPressed(SDL_Keysym Key) 
{
	KEYS[Key.sym] = true;
}


