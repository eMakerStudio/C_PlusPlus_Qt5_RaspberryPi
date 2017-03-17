#include "Inventory.h"

#include <iostream>

using namespace std;

Inventory::Inventory() :
	Grapes(10),
	Blueberries(3),
	Strawberries(0),
	Raspberries(0)
{
	Money = 25.00;
}

void Inventory::Print()
{
	cout << "Inventory:" << endl;
	cout << "\t$" << Money << endl;
	cout << "\tGrapes:       " << Grapes.GetQuantity() << endl;
	cout << "\tBlueberries:  " << Blueberries.GetQuantity() << endl;
	cout << "\tStrawberries: " << Strawberries.GetQuantity() << endl;
	cout << "\tRaspberries:  " << Raspberries.GetQuantity() << endl;
}

Fruit Inventory::Buy(Fruit item, int quantity, double price)
{
	if(price * quantity <= Money)
	{
		Money -= price * quantity;
		item.Buy(quantity);
	}
	else
	{
		cout << "You don't have enough money." << endl;
	}

	return item;
}

Fruit Inventory::Sell(Fruit item, int quantity, double price)
{
	if(item.GetQuantity() >= quantity)
	{
		Money += price * quantity;
		item.Sell(quantity);
	}
	else
	{
		cout << "You don't have enough product." << endl;
	}

	return item;
}