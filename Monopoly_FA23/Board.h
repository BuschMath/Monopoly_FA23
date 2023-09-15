#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include "Space.h"

class Board
{
public:
	Board();
	~Board();

private:
	std::vector<Space> spaces;
};

#endif // !BOARD_H
