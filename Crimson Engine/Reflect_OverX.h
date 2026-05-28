#pragma once
#include <SDL2/SDL.h>
class Reflect_Over_Axis {
public:
	Reflect_Over_Axis(SDL_Rect* ShapeToMove, char Axis)
	{
		if (Axis == 'X') 
		{
			ShapeToMove->y = ShapeToMove->y * -1;
		}
		if (Axis == 'Y') 
		{
			ShapeToMove->x = ShapeToMove->x * -1;
		}
		if (Axis == 'Z')
		{
			//ShapeToMove->z = ShapeToMove->z * -1;
		}
	}
};