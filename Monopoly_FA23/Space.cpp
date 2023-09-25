#include "Space.h"

Space::Space()
{
	name = "";
}

Space::~Space()
{
}

void Space::setName(std::string name_)
{
	name = name_;
}
std::string Space::getName() const
{
	return name;
}

void Space::setSpaceID(int spaceID_)
{
	spaceID = spaceID_;
}

int Space::getSpaceID() const
{
	return spaceID;
}

void Space::action(Player* player)
{
}
