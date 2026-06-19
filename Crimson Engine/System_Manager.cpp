#include "System_Manager.h"
#include "System_Logic.h"
#include "System_Graphics.h"
#include "System_Input.h"
#include "System_Sound.h"
#include "System_EventManager.h"
#include "System_Loop.h"
#include "System_ObjectProcessor.h"
#include <SDL2/SDL.h>
#include <vector>
#include <iostream>
#include "Settings.h"
#include "States.h"

States State;

System_Loop Loop = System_Loop();
System_Input Input = System_Input();
System_EventManager Events = System_EventManager();
System_Graphics Graphics = System_Graphics();
System_Logic Logic = System_Logic();
System_Sound Sound = System_Sound();
System_ObjectProcessor Processor = System_ObjectProcessor();

States* StatePtr = &State;

System_Loop* LoopPtr = &Loop;
System_Input* InputPtr = &Input;
System_EventManager* EventsPtr = &Events;
System_Logic* LogicPtr = &Logic;
System_Sound* SoundPtr = &Sound;
System_Graphics* GraphicsPtr = &Graphics;
System_ObjectProcessor* ProcessorPtr = &Processor;
std::vector <System_Base*> Systems;

void SystemManager::InitializeSystems(Settings* gameSettings ,bool* LoopStateptr)
{
	std::cout << "\tSystemManager | InitializingSystems() | 'Initializing all systems' " << std::endl;
	Events.Initialize(LoopStateptr, InputPtr);
	Input.Initialize();
	Processor.Initialize();
	Logic.Initialize();
	Graphics.Initialize(gameSettings);
	Sound.Initialize();

	Loop.State = &State;
	Events.State = &State;
	Input.State = &State;
	Logic.State = &State;
	Graphics.State = &State;
	Sound.State = &State;
	Processor.State = &State;
	Systems = { EventsPtr,InputPtr, LogicPtr,ProcessorPtr, GraphicsPtr, SoundPtr,ProcessorPtr };
}
System_Loop* SystemManager::ReturnLoop() {
	return LoopPtr;
}

std::vector <System_Base*> SystemManager::ReturnSystems() {
	std::cout << "\tSystemManager | ReturnSystems() | 'Returning System Pointers' " << std::endl;
	return Systems;
}

//void SystemManager::ReturnSDL


