#pragma once
#include "SystemBase.h"
#include "InputSystem.h"
#include <SDL2/SDL.h>
#include <String>


class EventManagerSystem : public SystemBase
{
	public:
		void Initialize(bool* LoopState, InputSystem* Inptr);
		void CheckEvents();
		void Update() override;
};

