#ifndef INVENTORY_H
#define INVENTORY_H

#include "Fruit.h"

class Inventory
{
public:
	double Money;
	Fruit Grapes;
	Fruit Blueberries;
	Fruit Strawberries;
	Fruit Raspberries;

	Inventory();

	void Print();

	Fruit Buy(Fruit item, int quantity, double price);
	Fruit Sell(Fruit item, int quantity, double price);
};

#endif