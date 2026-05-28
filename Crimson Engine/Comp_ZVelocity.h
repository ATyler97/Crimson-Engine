#include "Component.h"
#include <cstdint>
struct Comp_ZVelocity : public Component
{
	int64_t ZVelocity;
	Comp_ZVelocity(int ZStartPos, int ZEndPos, std::int64_t Time)
	{
		ZVelocity = (ZEndPos - ZStartPos) / Time;
	}

};