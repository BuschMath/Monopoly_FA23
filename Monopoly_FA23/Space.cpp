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