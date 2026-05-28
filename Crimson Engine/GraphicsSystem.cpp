#include "GraphicsSystem.h"
#include <SDL2/SDL.h>
#include "Settings.h"
#include <iostream>

int WindowWidth = 800;
int WindowHeight = 600;
const char* Title = "Default Title";
SDL_Window* window;
SDL_Renderer* renderer;
void GraphicsSystem::Initialize(Settings* gameSettings)
{
	std::cout << "\t\tGraphics System | Initialize() | 'Initializing Graphics system' " << std::endl;
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

	window = SDL_CreateWindow(Title , WindowWidth, WindowHeight, 800, 600, SDL_WINDOW_SHOWN);
	if (window == NULL) {
		// Handle error
	}
}
void GraphicsSystem::DrawFrame() {
	std::cout << "\t\tGraphics System | DrawFrame() | 'Drawing Frame' " << std::endl;	
	SDL_RenderClear(renderer);

	// this methood will have alot of shit to do when it comes to what to draw. 
	ProcessLayers();
	
}
void GraphicsSystem::ProcessLayers() {

}
void GraphicsSystem::InitializeRenderer()
{
	std::cout << "\t\tGraphics System | InitializeRenderer() | 'Initializing Renderer' " << std::endl;
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	SDL_RenderClear(renderer);
	SDL_SetRenderDrawColor(renderer, 30, 30, 30, 256);
}