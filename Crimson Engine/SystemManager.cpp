#include "SystemManager.h"
#include "LogicSystem.h"
#include "GraphicsSystem.h"
#include "InputSystem.h"
#include "SoundSystem.h"
#include "EventManagerSystem.h"
#include <SDL2/SDL.h>
#include <vector>
#include <iostream>
#include "Settings.h"

InputSystem Input = InputSystem();
EventManagerSystem Events = EventManagerSystem();
GraphicsSystem Graphics = GraphicsSystem();
LogicSystem Logic = LogicSystem();
SoundSystem Sound = SoundSystem();

InputSystem* InputPtr = &Input;
EventManagerSystem* EventsPtr = &Events;
LogicSystem* LogicPtr = &Logic;
SoundSystem* SoundPtr = &Sound;
GraphicsSystem* GraphicsPtr = &Graphics;
std::vector <SystemBase*> Systems = { InputPtr,EventsPtr, LogicPtr, GraphicsPtr, SoundPtr };


void SystemManager::InitializeSystems(Settings* gameSettings ,bool* LoopStateptr)
{
	std::cout << "\tSystemManager | InitializingSystems() | 'Initializing all systems' " << std::endl;
	Graphics.Initialize(gameSettings);
	Events.Initialize(LoopStateptr);
	Logic.Initialize();
	Input.Initialize();
	Sound.Initialize();
}

std::vector <SystemBase*> SystemManager::ReturnSystems() {
	std::cout << "\tSystemManager | ReturnSystems() | 'Returning System Pointers' " << std::endl;
	return Systems;
}

//void SystemManager::ReturnSDL


