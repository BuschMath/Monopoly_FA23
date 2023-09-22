#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player
{
public:
	Player();
	~Player();

private:
	std::string name;
	int location;
	int money;
	int jailCards;
	int jailTurns;
};

#endif // !PLAYER_H

