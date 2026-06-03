#include "System_EventManager.h"
#include "System_Input.h"
#include <iostream>;
#include <SDL2/SDL.h>
bool* stateptr;
System_Input* Inputptr;

void System_EventManager::Initialize(bool* LoopState, System_Input* Inptr)
{
	std::cout << "\t\tEvent Manager System | Initialize() | 'Event Manager System Initalizing" << std::endl;
	stateptr = LoopState;
	Inputptr = Inptr;
}
void System_EventManager::Update() 
{
	std::cout << "\t\tEvent Manager System | Update() | 'Checking for Updates" << std::endl;
	CheckEvents();
}
void System_EventManager::CheckEvents() {
	SDL_Event event;
	while (SDL_PollEvent(&event))
	{
		switch (event.type) {
		case SDL_QUIT:
			*stateptr = false;
			std::cout << "\t\tEvent Manager System | CheckEvents() | SDL_QUIT | Ending loop" << std::endl;
			break;

		case SDL_WINDOWEVENT:
			std::cout << "\t\tEvent Manager System | CheckEvents() | SDL_WINDOWEVENT | Windows event Triggered" << std::endl;
			break;
		case SDL_SYSWMEVENT:
			std::cout << "\t\tEvent Manager System | CheckEvents() | SDL_SYSWMEVENT | System Event Triggered" << std::endl;
			break;
		case SDL_KEYDOWN:
			std::cout << "\t\tEvent Manager System | CheckEvents() | SDL_KEYDOWN | Key Pressed Event" << std::endl;
			Inputptr->KeyPressed(event.key.keysym);
			break;
		case SDL_KEYUP:
			std::cout << "\t\tEvent Manager System | CheckEvents() | SDL_KEYUP | Key Released Event" << std::endl;
			Inputptr->KeyPressed(event.key.keysym);
			break;
		case SDL_TEXTEDITING:
			std::cout << "\t\tEvent Manager System | CheckEvents() | SDL_TEXTEDITING | Text being edited" << std::endl;
			break;
		case SDL_TEXTINPUT:
			std::cout << "\t\tEvent Manager System | CheckEvents() | SDL_TEXTINPUT | Text being input" << std::endl;
			break;
		case SDL_MOUSEMOTION:
			std::cout << "\t\tEvent Manager System | CheckEvents() | SDL_MOUSEMOTION | Mouse move event" << std::endl;
			Inputptr->MouseMoved(event.motion);
			break;
		case SDL_MOUSEBUTTONDOWN:
			std::cout << "\t\tEvent Manager System | CheckEvents() | SDL_MOUSEBUTTONDOWN | Mousebutton down" << std::endl;
			Inputptr->MouseButtonPressed(event.button);
			break;
		case SDL_MOUSEBUTTONUP:
			std::cout << "\t\tEvent Manager System | CheckEvents() | SDL_MOUSEBUTTONUP | MouseButton up " << std::endl;
			Inputptr->MouseButtonReleased(event.button);
			break;
		case SDL_MOUSEWHEEL:
			std::cout << "\t\tEvent Manager System | CheckEvents() | SDL_MOUSEWHEEL | Mouse wheel" << std::endl;
			Inputptr->MouseWheel(event.wheel);
			break;
		case SDL_RENDER_TARGETS_RESET:
			std::cout << "\t\tEvent Manager System | CheckEvents() | SDL_RENDER_TARGETS_RESET | Render Target Reset" << std::endl;
			break;
		case SDL_RENDER_DEVICE_RESET:
			std::cout << "\t\tEvent Manager System | CheckEvents() | SDL_RENDER_DEVICE_RESET | Render Divice Reset" << std::endl;
			break;
		default:
			std::cout << "\t\tEvent Manager System | CheckEvents() | 'Event Unidentified' \t\t<--ERROR-->" << std::endl;
			break;
		}
	}
}
