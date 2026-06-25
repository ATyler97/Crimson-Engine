#include "System_Logic.h"
#include <iostream>
#include "Logging.h"

#include <SDL2/SDL.h>

void System_Logic::Initialize() {
	// Initialize the logic system
	Logging::Log(State->MainSt8.Debug, 45);
}

void System_Logic::Update() {
	Logging::Log(State->MainSt8.Debug, 46);
}

