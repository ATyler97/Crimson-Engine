#include "SystemManager.h"
#include "LogicSystem.h"
#include "GraphicsSystem.h"
#include "InputSystem.h"
#include "SoundSystem.h"
#include <SDL2/SDL.h>
#include <vector>
#include <iostream>
#include "Settings.h"

InputSystem Input;
GraphicsSystem Graphics;
LogicSystem Logic;
SoundSystem Sound;

InputSystem* InputPtr = &Input;
LogicSystem* LogicPtr = &Logic;
SoundSystem* SoundPtr = &Sound;
GraphicsSystem* GraphicsPtr = &Graphics;
std::vector <SystemBase*> Systems = { InputPtr, LogicPtr, GraphicsPtr, SoundPtr };


void SystemManager::InitializeSystems(Settings* gameSettings)
{
	std::cout << "\tSystemManager | InitializingSystems() | 'Initializing all systems' " << std::endl;
	Graphics.Initialize(gameSettings);
	Logic.Initialize();
	Input.Initialize();
	Sound.Initialize();
}

std::vector <SystemBase*> SystemManager::ReturnSystems() {
	std::cout << "\tSystemManager | ReturnSystems() | 'Returning System Pointers' " << std::endl;
	return Systems;
}

//void SystemManager::ReturnSDL


