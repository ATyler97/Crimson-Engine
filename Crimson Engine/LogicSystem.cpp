#include "LogicSystem.h"
#include <iostream>
#include "KeyStruct.h"
#include <SDL2/SDL.h>

void LogicSystem::Initialize() {
	// Initialize the logic system
	std::cout << "\t\tLogic System | Initialize() | 'Initializing Logic System' " << std::endl;
}

void LogicSystem::Update() {
	std::cout << "\t\tLogic System | Update() | 'Updating Logic System' " << std::endl;
	
}

void LogicSystem::ReceiveActiveKeys(std::vector<Key*> activeKeys) {

}

