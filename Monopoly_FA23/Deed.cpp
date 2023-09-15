#include "Deed.h"

Deed::Deed()
{
	name = "";
	price = 0;
	rent = 0;
	houseCost = 0;
	hotelCost = 0;
	mortgageValue = 0;
	house1 = 0;
	house2 = 0;
	house3 = 0;
	house4 = 0;
	hotel = 0;
	groupID = 0;
	deedID = 0;
}

Deed::Deed(std::string name, int price, int rent, int houseCost, 
	int hotelCost, int mortgageValue, int house1, int house2, 
	int house3, int house4, int hotel, int groupID, int deedID)
{
	this->name = name;
	this->price = price;
	this->rent = rent;
	this->houseCost = houseCost;
	this->hotelCost = hotelCost;
	this->mortgageValue = mortgageValue;
	this->house1 = house1;
	this->house2 = house2;
	this->house3 = house3;
	this->house4 = house4;
	this->hotel = hotel;
	this->groupID = groupID;
	this->deedID = deedID;
}

Deed::~Deed()
{
}

std::string Deed::getName()
{
	return name;
}

int Deed::getPrice()
{
	return price;
}

int Deed::getRent()
{
	return rent;
}

int Deed::getHouseCost()
{
	return houseCost;
}

int Deed::getHotelCost()
{
	return hotelCost;
}

int Deed::getMortgageValue()
{
	return mortgageValue;
}

int Deed::getHouse1()
{
	return house1;
}

int Deed::getHouse2()
{
	return house2;
}

int Deed::getHouse3()
{
	return house3;
}

int Deed::getHouse4()
{
	return house4;
}

int Deed::getHotel()
{
	return hotel;
}

int Deed::getGroupID()
{
	return groupID;
}

int Deed::getDeedID()
{
	return deedID;
}

void Deed::setName(std::string name)
{
	this->name = name;
}

void Deed::setPrice(int price)
{
	this->price = price;
}

void Deed::setRent(int rent)
{
	this->rent = rent;
}

void Deed::setHouseCost(int houseCost)
{
	this->houseCost = houseCost;
}

void Deed::setHotelCost(int hotelCost)
{
	this->hotelCost = hotelCost;
}

void Deed::setMortgageValue(int mortgageValue)
{
	this->mortgageValue = mortgageValue;
}

void Deed::setHouse1(int house1)
{
	this->house1 = house1;
}

void Deed::setHouse2(int house2)
{
	this->house2 = house2;
}

void Deed::setHouse3(int house3)
{
	this->house3 = house3;
}

void Deed::setHouse4(int house4)
{
	this->house4 = house4;
}

void Deed::setHotel(int hotel)
{
	this->hotel = hotel;
}

void Deed::setGroupID(int groupID)
{
	this->groupID = groupID;
}

void Deed::setDeedID(int deedID)
{
	this->deedID = deedID;
}
