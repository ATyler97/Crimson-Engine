#pragma once
#include "GUI_Shape_Rectangle.h"
#include "GUI_Base_Window.h"
#include "GUI_Button.h"
#include <SDL2/SDL.h>
#include "GUI_Element.h"
#include "GUI_Color.h"
#include <vector>

SDL_Renderer* Render;

	GUI_Base_Window::GUI_Base_Window(SDL_Renderer* Renderer)