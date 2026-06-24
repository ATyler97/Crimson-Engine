#include "Application.h"
#include "System_Loop.h"
#include "System_Manager.h"
#include "Settings.h"
#include <iostream>
#include <SDL2/SDL.h>
#include "Logging.h"
					
SystemManager SManager;															//the system manager is the class that controls all of the engine's systems and their functions
Settings GameSettings;															//the settings for the graphics api to use. 
Settings* GameSettingsPtr = &GameSettings;


void Application::Start()
{
	Logging::Log(GameSettings.Debug, 1);
	
	int SDL_Init(SDL_INIT_EVERYTHING);
	Logging::Log(GameSettings.Debug, 2);										//this initalizes the SDL library for use.
	
	SManager.InitializeSystems(GameSettingsPtr);	
	Logging::Log(GameSettings.Debug, 3);										//initalizes all of the systems
	
	SManager.ReturnLoop()->InsertSystemsIntoLoop(SManager.ReturnSystems());		//Takes a vector containing all of the created and instanciated systems's pointers and gives it to System_Loop
	Logging::Log(GameSettings.Debug, 4);
	
	SManager.ReturnLoop()->Start();
	Logging::Log(GameSettings.Debug, 5);										//Starts the loop in System_Loop
}
