#pragma once
#include "SystemBase.h"
#include <SDL2/SDL.h>
#include <String>


class EventManagerSystem : public SystemBase
{
	public:
		void CarryoutEvent(SDL_Event e,std::string ID);
		void Initialize(bool* LoopState);
};

