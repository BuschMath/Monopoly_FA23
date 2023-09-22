#include "Dice.h"

Dice::Dice()
{
}

Dice::Dice(std::vector<Die> dice_)
{
	dice = dice_;
	diceValues.resize(dice.size());
}

Dice::~Dice()
{
}

void Dice::addDie(Die die)
{
	dice.push_back(die);
	diceValues.resize(dice.size());
}

void Dice::rollDice()
{
for (int i = 0; i < dice.size(); i++)
	{
		diceValues[i] = dice[i].roll();
	}
}

std::vector<int> Dice::getDiceValues() const
{
	return diceValues;
}
