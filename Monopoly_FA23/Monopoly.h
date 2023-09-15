#ifndef MONOPOLY_H
#define MONOPOLY_H

#include <nlohmann/json.hpp>
#include <fstream>
#include <string>
#include <vector>

#include "Deed.h"

const std::string JSON_FILE = "data.json";

class Monopoly
{
public:
	Monopoly();
	~Monopoly();

private:
	void loadJSON();
	std::vector<Deed*> deeds;
};

#endif // !MONOPOLY_H
