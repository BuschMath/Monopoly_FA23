#include "Board.h"

Board::Board()
{
}

Board::~Board()
{
}

void Board::addSpace(Space* space)
{
	spaces.push_back(space);
}

Space* Board::getSpace(int index)
{
	return spaces[index];
}
