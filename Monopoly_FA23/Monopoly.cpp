#include "Monopoly.h"

Monopoly::Monopoly()
{
	loadJSON();
    buildBoard();
}

Monopoly::~Monopoly()
{
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

    for (int i = 0; i < totalSpaces; i++)
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
}
