#pragma once
#include <SDL2/SDL.h>
class Scale_To{
public:
	Scale_To(SDL_Rect* ShapeToScale, char AxisToScale, int ScalePoint) 
	{
		if (AxisToScale == 'X') 
		{
			ShapeToScale->w = ShapeToScale->w * ScalePoint;
		}
		if (AxisToScale == 'Y')
		{
			ShapeToScale->h = ShapeToScale->w * ScalePoint;
		}
		if (AxisToScale == 'Z')
		{
			//ShapeToScale->d = ShapeToScale->w * ScalePoint;
		}
	}
	Scale_To(SDL_Rect* ShapeToScale, int ScalePointX, int ScalePointY)
	{
		ShapeToScale->w = ShapeToScale->w * ScalePointX;
		ShapeToScale->w = ShapeToScale->w * ScalePointY;
	}
	//Scale_To(SDL_Rect* ShapeToScale, int ScalePointX, int ScalePointY, int ScalePointZ);
	// have a single method that is (x,Ay) A being a number between 0.0 and 10 let all numbers 
	// less that 1 (0.999999999) be the compression side of the algorithm. so with 0.0 - 10 that leaves 
	// this method open to reducing the value to 0, while having the ability to scale up 10x fold. 

	//return the shape with new values. &SDL_Rect
};