#include "MouseMath.h"

uint32_t Mouse_Math::OriginMouseOffset(uint32_t OldMouseCord, uint32_t NewMouseCord, uint32_t LocationCord)
{
	if (OldMouseCord >= NewMouseCord) {
		NewMouseCord * -1;
	}
	uint32_t results = LocationCord + (OldMouseCord + NewMouseCord);
	return results;
}

