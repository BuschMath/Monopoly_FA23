#ifndef SPECIAL_SPACE_H
#define SPECIAL_SPACE_H

#include "Space.h"

class SpecialSpace : public Space
{
public:
	SpecialSpace(std::string name, std::string type, 
		std::string action);

private:
	std::string name;
	std::string type;
	std::string action;
};

#endif // !SPECIAL_SPACE_H
