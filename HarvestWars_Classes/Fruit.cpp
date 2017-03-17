#include "Fruit.h"

Fruit::Fruit(int initialQuantity)
{
	Quantity = initialQuantity;
}

int Fruit::GetQuantity()
{
	return Quantity;
}

void Fruit::Buy(int quantity)
{
	Quantity += quantity;
}

void Fruit::Sell(int quantity)
{
	Quantity -= quantity;
}