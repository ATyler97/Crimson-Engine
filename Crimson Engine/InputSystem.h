#pragma once
#include "SystemBase.h"
#include "InputSystem.h"
#include "KeyStruct.h"
#include <vector>
#include <SDL2/SDL.h>

class InputSystem : public SystemBase
{
	public:
		void Initialize() override;
		void Update() override;
		void ProcessInput();
		void KeyPressed(SDL_Keysym Key);
		void KeyReleased(SDL_Keysym Key);
		void MouseMoved(SDL_MouseMotionEvent Mouse);
		void MouseButtonPressed(SDL_MouseButtonEvent Mouse);
		void MouseButtonReleased(SDL_MouseButtonEvent Mouse);
		void MouseWheel(SDL_MouseWheelEvent Mouse);
		std::vector<Key*> ReturnActiveKeys();
};

