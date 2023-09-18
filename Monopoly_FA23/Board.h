#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include "Space.h"

class Board
{
public:
	Board();
	~Board();

	void addSpace(Space* space);

private:
	std::vector<Space*> spaces;
};

#endif // !BOARD_H
