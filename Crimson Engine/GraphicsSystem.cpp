#include "GraphicsSystem.h"
#include "Comp_UI_BaseWindow.h"
#include <SDL2/SDL.h>
#include "Settings.h"
#include <iostream>

int WindowWidth = 1920;
int WindowHeight = 1200;
const char* Title = "Default Title";
SDL_Window* window;
SDL_Renderer* RendererPtr;
void GraphicsSystem::Initialize(Settings* gameSettings)
{
	std::cout << "\t\tGraphics System | Initialize() | 'Initializing Graphics system' " << std::endl;
	int SDL_Init(SDL_INIT_EVERYTHING);
	Title = gameSettings->WindowTitle;
	WindowWidth = gameSettings->WindowWidth;
	WindowHeight = gameSettings->WindowHeight;
	DrawWindow();
	InitializeRenderer();
}
void GraphicsSystem::UpdateGraphicsSettings(Settings* gameSettings)
{
	std::cout << "\t\tGraphics System | Initialize() | 'Initializing Graphics system' " << std::endl;
	// Initialize the graphics system
}
void GraphicsSystem::Update()
{
	std::cout << "\t\tGraphics System | Update() | 'Updating Graphics system' " << std::endl;
	DrawFrame();
	// Update the graphics system
}
void GraphicsSystem::DrawWindow() {
	std::cout << "\t\tGraphics System | DrawWindow() | 'Drawing Window' " << std::endl;

	window = SDL_CreateWindow(Title , 800, 600, WindowWidth, WindowHeight, SDL_WINDOW_SHOWN);
	if (window == NULL) {
		// Handle error
	}
}
void GraphicsSystem::DrawFrame() {
	std::cout << "\t\tGraphics System | DrawFrame() | 'Drawing Frame' " << std::endl;	
	// this methood will have alot of shit to do when it comes to what to draw. 
	ProcessLayers();
	
}
void GraphicsSystem::ProcessLayers() 
{
	Comp_UI_BaseWindow Window = Comp_UI_BaseWindow(RendererPtr);
	SDL_RenderPresent(RendererPtr);
	//SDL_Delay(10000);
}
void GraphicsSystem::InitializeRenderer()
{
	std::cout << "\t\tGraphics System | InitializeRenderer() | 'Initializing Renderer' " << std::endl;
	RendererPtr = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	SDL_SetRenderDrawColor(RendererPtr, 0, 0, 0, 256);
	SDL_RenderClear(RendererPtr);
}
