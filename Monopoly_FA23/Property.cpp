#include "Property.h"

Property::Property()
{
	deedID = -1;
}

Property::~Property()
{
}

void Property::setDeedID(int deedID)
{
	this->deedID = deedID;
}
