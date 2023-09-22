#ifndef DICE_H
#define DICE_H

#include <vector>
#include "Die.h"

class Dice
{
public:
	Dice();
	Dice(std::vector<Die> dice_);
	~Dice();

	void addDie(Die die);
	void rollDice();

	std::vector<int> getDiceValues() const;

private:
	std::vector<Die> dice;
	std::vector<int> diceValues;
};

#endif // !DICE_H
