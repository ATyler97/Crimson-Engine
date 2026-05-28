#include <SDL2/SDL.h>
class Move_To {
	public:
		Move_To(SDL_Rect* ShapeToMove, int NewXLoc, int NewYLoc)
		{
			ShapeToMove->x = NewXLoc;
			ShapeToMove->y = NewYLoc;
		};
};