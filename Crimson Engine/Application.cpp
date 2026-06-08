#include "Application.h"
#include "System_Loop.h"
#include "System_Manager.h"
#include "Settings.h"
#include <iostream>
#include <SDL2/SDL.h>

bool Running;
bool* RunningPtr = &Running;
Loop EngineLoop;
SystemManager SManager;
Settings GameSettings;
Settings* GameSettingsPtr = &GameSettings;


void Application::Start()
{
	std::cout << std::endl << "Application | Start() | 'Initializing SDL' ";
	//SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_TIMER);
	int SDL_Init(SDL_INIT_EVERYTHING);
	std::cout << std::endl << "Application | Start() | 'Beginning System Initialization' " << std::endl;
	SManager.InitializeSystems(GameSettingsPtr,RunningPtr);

	std::cout << std::endl << "Application | Start() | 'Beginning Systems Insertion into Loop' " << std::endl;
	EngineLoop.InsertSystemsIntoLoop(SManager.ReturnSystems());	

	std::cout << std::endl << "Application | Start() | 'Starting Engine Loop' " << std::endl;
	EngineLoop.Start(RunningPtr);
}
