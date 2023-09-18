#include "Property.h"

Property::Property()
{
	deedID = -1;
	setSpaceID(deedID);
}

Property::~Property()
{
}

void Property::setDeedID(int deedID)
{
	this->deedID = deedID;
	setSpaceID(deedID);
}
