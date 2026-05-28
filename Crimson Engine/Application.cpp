#include "Application.h"
#include "Loop.h"
#include "SystemManager.h"
#include "Settings.h"
#include <iostream>
#include <SDL2/SDL.h>

Loop EngineLoop;
SystemManager SManager;
Settings GameSettings;
Settings* GameSettingsPtr = &GameSettings;


void Application::Start()
{
	std::cout << std::endl << "Application | Start() | 'Initializing SDL' ";
	SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO | SDL_INIT_TIMER);

	std::cout << std::endl << "Application | Start() | 'Beginning System Initialization' " << std::endl;
	SManager.InitializeSystems(GameSettingsPtr);

	std::cout << std::endl << "Application | Start() | 'Beginning Systems Insertion into Loop' " << std::endl;
	EngineLoop.InsertSystemsIntoLoop(SManager.ReturnSystems());	

	std::cout << std::endl << "Application | Start() | 'Starting Engine Loop' " << std::endl;
	EngineLoop.Start();
}
