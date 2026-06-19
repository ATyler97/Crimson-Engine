#include "GUI_Graphics_RenderTools.h"

void GUI_Graphics_RenderTools::DrawObjects(SDL_Renderer* rend, GUI_Body bod)
{
	SDL_SetRenderDrawColor(rend, bod.Color->Red, bod.Color->Green, bod.Color->Blue, bod.Visibility->Alpha);
	SDL_Rect temp = SDL_Rect();

	switch (bod.Shape->TypeOfShape)
	{
	case GUI_Element_Shape::Shape_Type::Line:
		SDL_RenderDrawLine(rend, bod.Location->X, bod.Location->Y, bod.Size->Width, bod.Size->Height);
		break;
	case GUI_Element_Shape::Shape_Type::Rectangle:
		temp.x = bod.Location->X;
		temp.y = bod.Location->Y;
		temp.w = bod.Size->Width;
		temp.h = bod.Size->Height;
		SDL_RenderDrawRect(rend, &temp);
		break;
	case GUI_Element_Shape::Shape_Type::Rectangle_Filled:
		temp.x = bod.Location->X;
		temp.y = bod.Location->Y;
		temp.w = bod.Size->Width;
		temp.h = bod.Size->Height;
		SDL_RenderFillRect(rend, &temp);
		break;
	case GUI_Element_Shape::Shape_Type::Point:
		SDL_RenderDrawPoint(rend, bod.Location->X, bod.Location->Y);
		break;
	default:
		break;
	}
}


