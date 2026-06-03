#include "System_Manager.h"
#include "System_Logic.h"
#include "System_Graphics.h"
#include "System_Input.h"
#include "System_Sound.h"
#include "System_EventManager.h"
#include <SDL2/SDL.h>
#include <vector>
#include <iostream>
#include "Settings.h"

System_Input Input = System_Input();
System_EventManager Events = System_EventManager();
System_Graphics Graphics = System_Graphics();
System_Logic Logic = System_Logic();
System_Sound Sound = System_Sound();

System_Input* InputPtr = &Input;
System_EventManager* EventsPtr = &Events;
System_Logic* LogicPtr = &Logic;
System_Sound* SoundPtr = &Sound;
System_Graphics* GraphicsPtr = &Graphics;
std::vector <System_Base*> Systems = { InputPtr, EventsPtr, LogicPtr, GraphicsPtr, SoundPtr };

void SystemManager::InitializeSystems(Settings* gameSettings ,bool* LoopStateptr)
{
	std::cout << "\tSystemManager | InitializingSystems() | 'Initializing all systems' " << std::endl;
	Graphics.Initialize(gameSettings);
	Input.Initialize();
	Events.Initialize(LoopStateptr, InputPtr);
	Logic.Initialize();
	Sound.Initialize();
}

std::vector <System_Base*> SystemManager::ReturnSystems() {
	std::cout << "\tSystemManager | ReturnSystems() | 'Returning System Pointers' " << std::endl;
	return Systems;
}

//void SystemManager::ReturnSDL


