#pragma once
#include "System_Base.h"
#include "System_Input.h"
#include <SDL2/SDL.h>
#include <String>


class System_EventManager : public System_Base
{
	public:
		void CheckEvents();
		void Initialize(System_Input* Inptr);
		void Update() override;
};

