#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <math.h>

using namespace std;

struct Inventory
{
	double Money;

	int GrapesCount;
	int BlueberriesCount;
	int StrawberriesCount;
	int RaspberriesCount;
}mine;

struct PriceList
{
	double GrapesPrice;
	double BlueberriesPrice;
	double StrawberriesPrice;
	double RaspberriesPrice;
};

void print(Inventory inventory)
{
	cout << "Inventory:" << endl;
	cout << "\t$" << inventory.Money << endl;
	cout << "\tGrapes:       " << inventory.GrapesCount << endl;
	cout << "\tBlueberries:  " << inventory.BlueberriesCount << endl;
	cout << "\tStrawberries: " << inventory.StrawberriesCount << endl;
	cout << "\tRaspberries:  " << inventory.RaspberriesCount << endl;
}

const double MinGrapesPrice       =  1.25;
const double MaxGrapesPrice       = 10.00;
const double MinBlueberriesPrice  =  8.75;
const double MaxBlueberriesPrice  = 26.25;
const double MinStrawberriesPrice = 22.50;
const double MaxStrawberriesPrice = 47.50;
const double MinRaspberriesPrice  = 40.00;
const double MaxRaspberriesPrice  = 77.50;

PriceList GetPrices()
{
	PriceList prices;

	int grapesRange = (int)floor((MaxGrapesPrice - MinGrapesPrice)/0.25 + 0.5);
	prices.GrapesPrice = MinGrapesPrice + (rand() % grapesRange) * 0.25;
	int blueberriesRange = (int)floor((MaxBlueberriesPrice - MinBlueberriesPrice)/0.25 + 0.5);
	prices.BlueberriesPrice = MinBlueberriesPrice + (rand() % blueberriesRange) * 0.25;
	int strawberriesRange = (int)floor((MaxStrawberriesPrice - MinStrawberriesPrice)/0.25 + 0.5);
	prices.StrawberriesPrice = MinStrawberriesPrice + (rand() % strawberriesRange) * 0.25;
	int raspberriesRange = (int)floor((MaxRaspberriesPrice - MinRaspberriesPrice)/0.25 + 0.5);
	prices.RaspberriesPrice = MinRaspberriesPrice + (rand() % raspberriesRange) * 0.25;

	return prices;
}

void print(PriceList prices)
{
	cout << "Prices:" << endl;
	cout << "\tGrapes:       $" << prices.GrapesPrice << endl;
	cout << "\tBlueberries:  $" << prices.BlueberriesPrice << endl;
	cout << "\tStrawberries: $" << prices.StrawberriesPrice << endl;
	cout << "\tRaspberries:  $" << prices.RaspberriesPrice << endl;
}

int main()
{
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);

//	Inventory mine;
	mine.Money = 50.00;
	mine.GrapesCount = 20;
	mine.BlueberriesCount = 5;
	mine.StrawberriesCount = 0;
	mine.RaspberriesCount = 0;

	while(mine.RaspberriesCount < 5)
	{
		PriceList prices = GetPrices();

		char choice = ' ';
		while(choice != 'm')
		{
			print(mine);
			print(prices);

			choice = ' ';
			while (choice != 'g' && choice != 'b' && choice != 's' && choice != 'r' && choice != 'm' && choice != 'q')
			{
				cout << "g = grapes, b = blueberries, s = strawberries, r = raspberries, m = move to next fruit stand, q = quit" << endl;
				cout << "Which would you like: ";
				cin >> choice;
			}

			if(choice == 'g' || choice == 'b' || choice == 's' || choice == 'r')
			{
				double price = 0.0;
				if (choice == 'g')
				{
					price = prices.GrapesPrice;
				}
				else if (choice == 'b')
				{
					price = prices.BlueberriesPrice;
				}
				else if (choice == 's')
				{
					price = prices.StrawberriesPrice;
				}
				else
				{
					price = prices.RaspberriesPrice;
				}

				char buysell = ' ';
				while (buysell != 'b' && buysell != 's')
				{
					cout << "b = buy, s = sell" << endl;
					cout << "Buy/Sell: ";
					cin >> buysell;
				}

				int quantity = -1;
				while (quantity < 0)
				{
					cout << "How many: ";
					cin >> quantity;
				}

				if (buysell == 'b')
				{
					if (price * quantity <= mine.Money)
					{
						mine.Money -= price * quantity;

						if (choice == 'g')
						{
							mine.GrapesCount += quantity;
						}
						else if (choice == 'b')
						{
							mine.BlueberriesCount += quantity;
						}
						else if (choice == 's')
						{
							mine.StrawberriesCount += quantity;
						}
						else
						{
							mine.RaspberriesCount += quantity;
						}
					}
					else
					{
						cout << "You don't have enough money." << endl;
					}
				}
				else
				{
					if (choice == 'g')
					{
						if(mine.GrapesCount >= quantity)
						{
							mine.GrapesCount -= quantity;
							mine.Money += quantity * price;
						}
						else
						{
							cout << "You don't have enough grapes." << endl;
						}
					}
					else if (choice == 'b')
					{
						if(mine.BlueberriesCount >= quantity)
						{
							mine.BlueberriesCount -= quantity;
							mine.Money += quantity * price;
						}
						else
						{
							cout << "You don't have enough blueberries." << endl;
						}
					}
					else if (choice == 's')
					{
						if(mine.StrawberriesCount >= quantity)
						{
							mine.StrawberriesCount -= quantity;
							mine.Money += quantity * price;
						}
						else
						{
							cout << "You don't have enough strawberries." << endl;
						}
					}
					else
					{
						if(mine.RaspberriesCount >= quantity)
						{
							mine.RaspberriesCount -= quantity;
							mine.Money += quantity * price;
						}
						else
						{
							cout << "You don't have enough raspberries." << endl;
						}
					}
				}
			}

			if (choice == 'q')
			{
				return 0;
			}

			cout << endl;
		}
	}

	cout << "Congratulations, you were able to get 5 raspberries!" << endl;

	return 0;
}
