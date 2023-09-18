#ifndef SPECIAL_SPACE_H
#define SPECIAL_SPACE_H

#include "Space.h"

class SpecialSpace : public Space
{
public:
	SpecialSpace(std::string name, std::string type, 
		std::string action, int spaceID);
	~SpecialSpace();

private:
	std::string type;
	std::string action;
};

#endif // !SPECIAL_SPACE_H
