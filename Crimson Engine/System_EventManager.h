#pragma once
#include "System_Base.h"
#include "System_Input.h"
#include <SDL2/SDL.h>
#include <String>


class System_EventManager : public System_Base
{
	public:
		void Initialize(bool* LoopState, System_Input* Inptr);
		void CheckEvents();
		void Update() override;
};

