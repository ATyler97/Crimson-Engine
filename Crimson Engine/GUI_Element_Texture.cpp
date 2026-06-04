#pragma once
#include <cstdint>
#include <SDL2/SDL.h>
 
struct GUI_Element_Texture
{
	SDL_Renderer* Renderer;
	int32_t Height;
	int32_t Width;
};