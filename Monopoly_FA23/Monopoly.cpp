#include "Monopoly.h"

Monopoly::Monopoly()
{
	loadJSON();
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
}
