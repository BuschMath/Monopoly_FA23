#include "SpecialSpace.h"

SpecialSpace::SpecialSpace(std::string name, std::string type, std::string action, int spaceID)
{
	setName(name);
	this->type = type;
	this->action = action;
	setSpaceID(spaceID);
}

SpecialSpace::~SpecialSpace()
{
}
