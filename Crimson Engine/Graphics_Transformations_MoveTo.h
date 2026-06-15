#include "Body_Window.h"
#include <vector>
class Move_To {
	public:
		Move_To(GUI_Body Body, int32_t NewXLoc, int32_t NewYLoc)
		{
			Body.Location->X = NewXLoc;
			Body.Location->Y = NewYLoc;
		};
		Move_To(std::vector<GUI_Body> Body, int32_t NewXLoc, int32_t NewYLoc)
		{
			for (int i = 0; i < Body.size(); i++) 
			{
				Body[i].Location->X = NewXLoc;
				Body[i].Location->Y = NewYLoc;
			}
		}
};