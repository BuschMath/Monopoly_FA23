#include "SpecialSpace.h"

SpecialSpace::SpecialSpace(std::string name, std::string type, std::string action, int spaceID)
{
	this->name = name;
	this->type = type;
	this->action = action;
	this->spaceID = spaceID;
}

SpecialSpace::~SpecialSpace()
{
}

int SpecialSpace::getSpaceID()
{
	return spaceID;
}
