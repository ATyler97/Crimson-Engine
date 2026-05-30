#include "InputSystem.h"
#include <iostream>
#include <SDL2/SDL.h>
#include "vector"

int Size;

void InputSystem::Initialize()
{
	SDL_GetKeyboardState(&Size);
	std::cout << "\t\tInput System | Initialize() | 'Initializing Input system' " << std::endl;
	// Initialize the input system
}
void InputSystem::Update()
{
	std::cout << "\n\t\tInput System | Update() | 'Updating Input system' " << std::endl;
	ProcessInput();
	// Update the input system
}
void InputSystem::ProcessInput() {
	SDL_Event event;
	
	while (SDL_PollEvent(&event));

}
void InputSystem::KeyReleased() {
	
}
void InputSystem::KeyPressed() {

	// Handle key press event
}
