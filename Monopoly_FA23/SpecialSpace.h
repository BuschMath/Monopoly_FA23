#ifndef SPECIAL_SPACE_H
#define SPECIAL_SPACE_H

#include "Space.h"

class SpecialSpace : public Space
{
public:
	SpecialSpace(std::string name, std::string type, 
		std::string action, int spaceID);
	~SpecialSpace();

	int getSpaceID();

private:
	std::string name;
	std::string type;
	std::string action;
	int spaceID;
};

#endif // !SPECIAL_SPACE_H
