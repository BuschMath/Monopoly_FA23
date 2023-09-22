#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
public:
	Player();
	Player(std::string name, int playerID);
	~Player();

	std::string getName();

private:
	std::string name;
	int playerID;
	int location;
	int money;
	int jailCards;
	int jailTurns;
	bool inJail;
};

#endif // !PLAYER_H

