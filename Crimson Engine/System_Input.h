#pragma once
#include "System_Base.h"
#include "System_Input.h"
#include <vector>
#include <SDL2/SDL.h>

/*
* The soul responsibility of this system should be to take the events raised by the 
* System_Event Class and appropriately set their state in the State Class.  
*/

class System_Input : public System_Base
{
	public:
		void Initialize() override;
		void Update() override;
		void KeyPressed(SDL_Keysym Key);
		void KeyReleased(SDL_Keysym Key);
		void MouseMoved(SDL_MouseMotionEvent Mouse);
		void MouseButtonPressed(SDL_MouseButtonEvent Mouse);
		void MouseButtonReleased(SDL_MouseButtonEvent Mouse);
		void MouseWheel(SDL_MouseWheelEvent Mouse);
};

