#ifndef SPACE_H
#define SPACE_H

#include <string>

class Space
{
public:
	Space();
	~Space();

	void setName(std::string name_);
	std::string getName() const;

private:
	std::string name;
	int spaceID;
};

#endif // !SPACE_H
