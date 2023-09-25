#ifndef SPACE_H
#define SPACE_H

#include <string>
#include "Player.h"

class Space
{
public:
	Space();
	~Space();

	void setName(std::string name_);
	std::string getName() const;

	void setSpaceID(int spaceID_);
	int getSpaceID() const;

	void action(Player* player);

private:
	std::string name;
	int spaceID;
};

#endif // !SPACE_H
