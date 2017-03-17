#ifndef FRUIT_H
#define FRUIT_H

class Fruit
{
private:
	int Quantity;

public:
	Fruit(int initialQuantity);

	int GetQuantity();
	void Buy(int quantity);
	void Sell(int quantity);
};

#endif