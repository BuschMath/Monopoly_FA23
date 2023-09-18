#ifndef MONOPOLY_H
#define MONOPOLY_H

#include <nlohmann/json.hpp>
#include <fstream>
#include <string>
#include <vector>

#include "Deed.h"
#include "Board.h"
#include "SpecialSpace.h"
#include "Property.h"

const std::string JSON_FILE = "data.json";
const std::string JSON_SPECIAL_SPACES = "special.json";
const int totalSpaces = 40;

class Monopoly
{
public:
	Monopoly();
	~Monopoly();

private:
	void loadJSON();
	void buildBoard();
	std::vector<Deed*> deeds;
	std::vector<SpecialSpace*> specialSpaces;
	Board board;
};

#endif // !MONOPOLY_H
