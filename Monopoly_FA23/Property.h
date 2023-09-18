#ifndef PROPERTY_H
#define PROPERTY_H

#include "Space.h"

class Property : public Space
{
public:
	Property();
	~Property();

	void setDeedID(int deedID);

private:
	int deedID;
};

#endif // !PROPERTY_H
