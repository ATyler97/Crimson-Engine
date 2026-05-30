#include "Loop.h"
#include "SystemBase.h"
#include <vector>
#include <iostream>
#include <SDL2/SDL.h>
using namespace std;


vector<SystemBase*> systems;
int64_t CurrentTime;
int64_t DeltaTime;
int64_t PreviousTime;

void Loop::Start(bool* state) {
	std::cout <<"\tLoop | Start() | 'Starting Engine Loop' " << std::endl;
	
	while (state) {
		CurrentTime = SDL_GetTicks64();
		DeltaTime = CurrentTime - PreviousTime;
		PreviousTime = CurrentTime;

		for (int i = 0; i < systems.size(); i++) 
		{
			systems[i]->Update();
		}
		std::cout << "\tLoop | Start() | 'Current Time: " << CurrentTime << "' " << std::endl;
		std::cout << "\tLoop | Start() | 'Delta Time: " << DeltaTime << "' " << std::endl;
		std::cout << "\tLoop | Start() | 'Previous Time: " << PreviousTime << "' " << std::endl;
	}
}
void Loop::InsertSystemsIntoLoop(std::vector<SystemBase*> systemsVector) {
	std::cout << "\tLoop | InsertSystemsIntoLoop() | 'Inserting systems into loop' " << std::endl;
	systems = systemsVector;
}
