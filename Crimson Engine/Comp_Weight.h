#include "Component.h"
struct Comp_Weight : public Component
{
	// a weight value to be added to an entity. 
	// the "unit" of this weight will be set as KG.
	float weight = 1.0f;//kg
};