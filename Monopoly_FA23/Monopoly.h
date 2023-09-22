#ifndef MONOPOLY_H
#define MONOPOLY_H

#include <nlohmann/json.hpp>
#include <fstream>
#include <string>
#include <vector>
#include <iostream>

#include "Deed.h"
#include "Board.h"
#include "SpecialSpace.h"
#include "Property.h"
#include "Player.h"
#include "Dice.h"

const std::string JSON_FILE = "data.json";
const std::string JSON_SPECIAL_SPACES = "special.json";
const int totalSpaces = 40;
const int noOfSidesOnDice = 6;
const int noOfDice = 2;

class Monopoly
{
public:
	Monopoly(int noOfPlayers);
	~Monopoly();
	void play();

private:
	void loadJSON();
	void buildBoard();
	void buildPlayers(int noOfPlayers);
	void buildDice();
	std::vector<Deed*> deeds;
	std::vector<SpecialSpace*> specialSpaces;
	Board board;
	int noOfPlayers;
	std::vector<Player*> players;
	Dice dice;
};

#endif // !MONOPOLY_H
