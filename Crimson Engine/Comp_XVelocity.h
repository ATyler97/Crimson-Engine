#include "Component.h"
#include <cstdint>
struct Comp_XVelocity : public Component
{
	int64_t XVelocity;
	Comp_XVelocity(int XStartPos, int xEndPos, std::int64_t Time) 
	{
		XVelocity = (xEndPos - XStartPos) / Time;
	}
		
};