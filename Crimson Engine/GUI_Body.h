#pragma once
#include <vector>
#include <optional>
#include "GUI_Element.h"
#include "GUI_Element_Color.h"
#include "GUI_Element_Size.h"
#include "GUI_Element_Location.h"
#include "GUI_Element_Shape.h"
#include "GUI_Element_Visibility.h"


struct GUI_Body
{
	GUI_Body() = default;
	std::optional<GUI_Element_Color> Color;
	std::optional<GUI_Element_Size> Size;
	std::optional<GUI_Element_Location> Location;
	std::optional<GUI_Element_Shape> Shape;
	std::optional<GUI_Element_Visibility> Visibility;

};