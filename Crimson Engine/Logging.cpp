#include "Logging.h"
#include <iostream>
using namespace std;

void Logging::Log(bool Debug, int message)
{
	if (Debug) {
		switch (message) {
		case 0:
			cout << "Main | Starting application" << std::endl;
			break;
		case 1:
			cout << "\tApplication | Start() | Starting Application" << std::endl;
			break;
		case 2:
			cout << "\tApplication | Start() | SDL systems Initalized" << std::endl;
			break;
		case 3:
			cout << "\tApplication | Start() | Initalizing all Systems." << std::endl;
			break;
		case 4:
			cout << "\tApplication | Start() | Systems Passed Into Loop System" << std::endl;
			break;
		case 5:
			cout << "\tApplication | Start() | Starting Engine Loop" << std::endl;
			break;
		case 6:
			cout << "\t\tSystem_Manager | InitializeSystems() | Setting each System's 'State' value equal to the State value and initalizing systems" << std::endl;
			break;
		case 7:
			cout << "\t\tSystem_Manager | InitializeSystems() | Initalization success" << std::endl;
			break;
		case 8:
			cout << "\t\tSystem_Manager | ReturnLoop() | Returning 'System_Loop'" << std::endl;
			break;
		case 9:
			cout << "\t\tSystem_Manager | ReturnSystems() | Returning 'Systems'" << std::endl;
			break;
		case 10:
			cout << "\t\tSystem_EventManager | Initialize() | 'System_EventManager Initalizing" << std::endl;
			break;
		case 11:
			cout << "\t\tSystem_EventManager | Update() | 'Checking for Updates" << std::endl;
			break;
		case 12:
			cout << "\t\tSystem_EventManager | CheckEvents() | SDL_QUIT | Ending loop" << std::endl;
			break;
		case 13:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_WINDOWEVENT | Windows event Triggered" << std::endl;
			break;
		case 14:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_SYSWMEVENT | System Event Triggered" << std::endl;
			break;
		case 15:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_KEYDOWN | Key Pressed Event" << std::endl;
			break;
		case 16:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_KEYUP | Key Released Event" << std::endl;
			break;
		case 17:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_TEXTEDITING | Text being edited" << std::endl;
			break;
		case 18:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_TEXTINPUT | Text being input" << std::endl;
			break;
		case 19:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_MOUSEMOTION | Mouse move event" << std::endl;
			break;
		case 20:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_MOUSEBUTTONDOWN | Mousebutton down" << std::endl;
			break;
		case 21:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_MOUSEBUTTONUP | MouseButton up " << std::endl;
			break;
		case 22:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_MOUSEWHEEL | Mouse wheel" << std::endl;
			break;
		case 23:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_RENDER_TARGETS_RESET | Render Target Reset" << std::endl;
			break;
		case 24:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | SDL_RENDER_DEVICE_RESET | Render Divice Reset" << std::endl;
			break;
		case 25:
			std::cout << "\t\tSystem_EventManager | CheckEvents() | 'Event Unidentified' \t\t<--ERROR: Stopping Loop to fix-->" << std::endl;
			break;
		case 26:
			std::cout << "\t\tSystem_Graphics | Initialize() | 'Initializing System_Graphics' " << std::endl;
			break;
		case 27:
			std::cout << "\t\tSystem_Graphics | Update() | 'Updating System_Graphics' " << std::endl;
			break;
		case 28:
			std::cout << "\t\tSystem_Graphics | DrawWindow() | 'Drawing Window' " << std::endl;
			break;
		case 29:
			std::cout << "\t\tSystem_Graphics | DrawFrame() | 'Drawing Frame' " << std::endl;
			break;
		case 30:
			std::cout << "\t\tSystem_Graphics | ProcessLayers() | 'Clearing Renderer, rendering objects, presenting render' " << std::endl;
			break;
		case 31:
			std::cout << "\t\tSystem_Graphics | InitializeRenderer() | 'Initializing Renderer' " << std::endl;
			break;
		case 32:
			std::cout << "\t\tSystem_Input | InitializeRenderer() | 'Initializing Renderer' " << std::endl;
			break;
		case 31:
			std::cout << "\t\tSystem_Graphics | InitializeRenderer() | 'Initializing Renderer' " << std::endl;
			break;
		case 31:
			std::cout << "\t\tSystem_Graphics | InitializeRenderer() | 'Initializing Renderer' " << std::endl;
			break;
		case 31:
			std::cout << "\t\tSystem_Graphics | InitializeRenderer() | 'Initializing Renderer' " << std::endl;
			break;
		case 31:
			std::cout << "\t\tSystem_Graphics | InitializeRenderer() | 'Initializing Renderer' " << std::endl;
			break;
		case 31:
			std::cout << "\t\tSystem_Graphics | InitializeRenderer() | 'Initializing Renderer' " << std::endl;
			break;
		case 31:
			std::cout << "\t\tSystem_Graphics | InitializeRenderer() | 'Initializing Renderer' " << std::endl;
			break;
		case 31:
			std::cout << "\t\tSystem_Graphics | InitializeRenderer() | 'Initializing Renderer' " << std::endl;
			break;
		case 31:
			std::cout << "\t\tSystem_Graphics | InitializeRenderer() | 'Initializing Renderer' " << std::endl;
			break;
		case 31:
			std::cout << "\t\tSystem_Graphics | InitializeRenderer() | 'Initializing Renderer' " << std::endl;
			break;
		case 31:
			std::cout << "\t\tSystem_Graphics | InitializeRenderer() | 'Initializing Renderer' " << std::endl;
			break;
		case 31:
			std::cout << "\t\tSystem_Graphics | InitializeRenderer() | 'Initializing Renderer' " << std::endl;
			break;
		case 31:
			std::cout << "\t\tSystem_Graphics | InitializeRenderer() | 'Initializing Renderer' " << std::endl;
			break;
		case 31:
			std::cout << "\t\tSystem_Graphics | InitializeRenderer() | 'Initializing Renderer' " << std::endl;
			break;
		}

	}

}
