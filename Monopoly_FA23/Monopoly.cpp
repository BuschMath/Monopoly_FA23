#include "Monopoly.h"

Monopoly::Monopoly(int noOfPlayers)
{
	loadJSON();
    buildBoard();
    buildPlayers(noOfPlayers);
    buildDice();
}

Monopoly::~Monopoly()
{
}

void Monopoly::play()
{
int currentPlayer = 0;
	bool gameOver = false;

	while (!gameOver)
	{
		std::cout << players[currentPlayer]->getName() << "'s turn" << std::endl;
		std::cout << "Press enter to roll the dice" << std::endl;
		std::cin.ignore();
        dice.rollDice();
        std::vector<int> diceValues = dice.getDiceValues();
        int roll = 0;
		
        for (int i = 0; i < noOfDice; i++)
        {
            roll += diceValues[i];
        }

		std::cout << "You rolled a " << roll << std::endl;
		players[currentPlayer]->move(roll);
		std::cout << players[currentPlayer]->getName() << " is now on " << board.getSpace(players[currentPlayer]->getLocation())->getName() << std::endl;
		board.getSpace(players[currentPlayer]->getLocation())->action(players[currentPlayer]);
		std::cout << players[currentPlayer]->getName() << " has $" << players[currentPlayer]->getBalance() << std::endl;
		currentPlayer++;
		if (currentPlayer == noOfPlayers)
		{
			currentPlayer = 0;
		}
	}
}

void Monopoly::loadJSON()
{
	std::ifstream infile(JSON_FILE);
	nlohmann::json j;
	infile >> j;

    for (auto& element : j["monopolyProperties"]) {
        Deed* deed = new Deed(
            element["name"],
            element["price"],
            element["rent"],
            element["houseCost"],
            element["hotelCost"],
            element["mortgageValue"],
            element["house1"],
            element["house2"],
            element["house3"],
            element["house4"],
            element["hotel"],
            element["groupID"],
            element["deedID"]
        );
        deeds.push_back(deed);
    }

    infile.close();

    infile.open(JSON_SPECIAL_SPACES);
    infile >> j;

    for (auto& element : j["monopolySpecialSpaces"]) {
        SpecialSpace* specialSpace = new SpecialSpace(
			element["name"],
			element["type"],
			element["action"],
			element["spaceID"]
		);
		specialSpaces.push_back(specialSpace);
	}
}

void Monopoly::buildBoard()
{
    int deedCount = 0;
    int specialSpaceCount = 0;

    for (int i = 0; i < totalSpaces - 1; i++)
    {
        if (deeds[deedCount]->getDeedID() <
            specialSpaces[specialSpaceCount]->getSpaceID())
        {
            Property* prop = new Property();
            prop->setDeedID(deeds[deedCount]->getDeedID());
            prop->setName(deeds[deedCount]->getName());
            board.addSpace(prop);
            deedCount++;
        }
        else
        {
            board.addSpace(specialSpaces[specialSpaceCount]);
            specialSpaceCount++;
        }
    }

    Property* prop = new Property();
    prop->setDeedID(deeds[deedCount]->getDeedID());
    prop->setName(deeds[deedCount]->getName());
    board.addSpace(prop);
}

void Monopoly::buildPlayers(int noOfPlayers)
{
    this->noOfPlayers = noOfPlayers;

    for (int i = 0; i < noOfPlayers; i++)
    {
        std::cout << "Enter player " << i + 1 << "'s name: ";
        std::string name;
        std::cin >> name;
        Player* player = new Player(name, i + 1);
        players.push_back(player);
    }
}

void Monopoly::buildDice()
{
    for (int i = 0; i < noOfDice; i++)
    {
        Die* temp = new Die(noOfSidesOnDice);
        dice.addDie(*temp);
    }
}
