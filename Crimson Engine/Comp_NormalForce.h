#pragma once
#include "Component.h"
#include "Comp_Gravity.h"
#include "Comp_Weight.h"
struct Comp_NormalForce
{
	float normalForce;
	Comp_NormalForce(const Comp_Gravity& gravity, const Comp_Weight& weight) 
	{
		normalForce = gravity.gravity * weight.weight;
	};
};	