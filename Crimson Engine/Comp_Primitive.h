#pragma once
#include "Component.h"
#include "Comp_Position2D.h"
#include "Comp_Position3D.h"
#include "Comp_LocalVertices2D.h"
#include "Comp_LocalVertices3D.h"
#include <vector>
struct Comp_Primitive : public Component
{
	std::vector <float> PrimativeOrigin;
	std::vector <Comp_LocalVertices2D*> Primative;

	//Line Primitive Constructor
	Comp_Primitive(Comp_LocalVertices2D* position1, Comp_LocalVertices2D* position2)
	{
		Primative = { position1, position2 };
		PrimativeOrigin = { (position1->x + position2->x)/2,
							(position1->y + position2->y) / 2 };
	}

	//Triangle Primitive Constructor
	Comp_Primitive(Comp_LocalVertices2D* position1, Comp_LocalVertices2D* position2, Comp_LocalVertices2D* position3)
	{
		Primative = { position1, position2, position3 };
		PrimativeOrigin = { (position1->x + position2->x + position3->x ) / 3,
							(position1->y + position2->y + position3->y ) / 3 };
	}
};