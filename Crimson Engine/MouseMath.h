#pragma once
#include <stdint.h>
class Mouse_Math {
	public:

		static uint32_t OriginMouseOffset(uint32_t OldMouseCord, uint32_t NewMouseCord, uint32_t LocationCord);
};