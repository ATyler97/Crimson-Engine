#include "Component.h"
#include <cstdint>
struct Comp_YVelocity : public Component
{
	int64_t YVelocity;
	Comp_YVelocity(int YStartPos, int YEndPos, std::int64_t Time)
	{
		YVelocity = (YEndPos - YStartPos) / Time;
	}

};