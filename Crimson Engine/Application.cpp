#include "Application.h"
#include "System_Loop.h"
#include "System_Manager.h"
#include "Settings.h"
#include <iostream>
#include <SDL2/SDL.h>

bool Running;
bool* RunningPtr = &Running;
SystemManager SManager;
Settings GameSettings;
Settings* GameSettingsPtr = &GameSettings;


void Application::Start()
{

	int SDL_Init(SDL_INIT_EVERYTHING);
	SManager.InitializeSystems(GameSettingsPtr,RunningPtr);
	SManager.ReturnLoop()->InsertSystemsIntoLoop(SManager.ReturnSystems());
	SManager.ReturnLoop()->Start(RunningPtr);
}
