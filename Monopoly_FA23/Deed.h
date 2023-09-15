#ifndef DEED_H
#define DEED_H

#include <string>

class Deed
{
public:
	Deed();
	Deed(std::string name, int price, int rent, int houseCost,
		int hotelCost, int mortgageValue, int house1, int house2,
		int house3, int house4, int hotel, int groupID, int deedID);
	~Deed();

	std::string getName();
	int getPrice();
	int getRent();
	int getHouseCost();
	int getHotelCost();
	int getMortgageValue();
	int getHouse1();
	int getHouse2();
	int getHouse3();
	int getHouse4();
	int getHotel();
	int getGroupID();
	int getDeedID();

	void setName(std::string name);
	void setPrice(int price);
	void setRent(int rent);
	void setHouseCost(int houseCost);
	void setHotelCost(int hotelCost);
	void setMortgageValue(int mortgageValue);
	void setHouse1(int house1);
	void setHouse2(int house2);
	void setHouse3(int house3);
	void setHouse4(int house4);
	void setHotel(int hotel);
	void setGroupID(int groupID);
	void setDeedID(int deedID);

private:
	std::string name;
	int price;
	int rent;
	int houseCost;
	int hotelCost;
	int mortgageValue;
	int house1;
	int house2;
	int house3;
	int house4;
	int hotel;
	int groupID;
	int deedID;
};

#endif // !DEED_H
