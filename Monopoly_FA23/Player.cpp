#include "Player.h"

Player::Player()
{
	name = "Player";
	playerID = -1;
	location = 0;
	money = 1500;
	jailCards = 0;
	jailTurns = 0;
	inJail = false;
}

Player::Player(std::string name, int playerID)
{
	this->name = name;
	this->playerID = playerID;
	location = 0;
	money = 1500;
	jailCards = 0;
	jailTurns = 0;
	inJail = false;
}

Player::~Player()
{
}

std::string Player::getName()
{
	return name;
}
