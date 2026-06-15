#include "System_Loop.h"
#include "System_Base.h"
#include <vector>
#include <iostream>
#include <SDL2/SDL.h>
using namespace std;

vector<System_Base*> systems;

void System_Loop::Start(bool* state) {
	std::cout <<"\tLoop | Start() | 'Starting Engine Loop' " << std::endl;

	while (state) {
		State->TimeSt8.CurrentTime = SDL_GetTicks64();
		State->TimeSt8.DeltaTime = State->TimeSt8.CurrentTime - State->TimeSt8.PreviousTime;
		State->TimeSt8.PreviousTime = State->TimeSt8.CurrentTime;

		for (int i = 0; i < systems.size(); i++) 
		{
			systems[i]->Update();
		}
		std::cout << "\tLoop | Start() | 'Current Time: " << State->TimeSt8.CurrentTime << "' " << std::endl;
		std::cout << "\tLoop | Start() | 'Delta Time: " << State->TimeSt8.DeltaTime << "' " << std::endl;
		std::cout << "\tLoop | Start() | 'Previous Time: " << State->TimeSt8.PreviousTime << "' " << std::endl;
	}
}
void System_Loop::InsertSystemsIntoLoop(std::vector<System_Base*> systemsVector) {
	std::cout << "\tLoop | InsertSystemsIntoLoop() | 'Inserting systems into loop' " << std::endl;
	systems = systemsVector;
}
