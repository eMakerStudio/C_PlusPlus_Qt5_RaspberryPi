#include <iostream>

#include "Inventory.h"
#include "PriceList.h"

using namespace std;

int main()
{
	cout.setf(ios::fixed, ios::floatfield);
	cout.precision(2);

	Inventory inv;

	Inventory mine;
	while(mine.Raspberries.GetQuantity() < 5)
	{
		PriceList prices;

		char choice = ' ';
		while(choice != 'm')
		{
			mine.Print();
			prices.Print();

			choice = ' ';
			while (choice != 'g' && choice != 'b' && choice != 's' && choice != 'r' && choice != 'm' && choice != 'q')
			{
				cout << "g = grapes, b = blueberries, s = strawberries, r = raspberries, m = move to next fruit stand, q = quit" << endl;
				cout << "Which would you like: ";
				cin >> choice;
			}

			if(choice == 'g' || choice == 'b' || choice == 's' || choice == 'r')
			{
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
					if (choice == 'g')
					{
						mine.Grapes = mine.Buy(mine.Grapes, quantity, prices.GrapesPrice);
					}
					else if (choice == 'b')
					{
						mine.Blueberries = mine.Buy(mine.Blueberries, quantity, prices.BlueberriesPrice);
					}
					else if (choice == 's')
					{
						mine.Strawberries = mine.Buy(mine.Strawberries, quantity, prices.StrawberriesPrice);
					}
					else
					{
						mine.Raspberries = mine.Buy(mine.Raspberries, quantity, prices.RaspberriesPrice);
					}
				}
				else
				{
					if (choice == 'g')
					{
						mine.Grapes = mine.Sell(mine.Grapes, quantity, prices.GrapesPrice);
					}
					else if (choice == 'b')
					{
						mine.Blueberries = mine.Sell(mine.Blueberries, quantity, prices.BlueberriesPrice);
					}
					else if (choice == 's')
					{
						mine.Strawberries = mine.Sell(mine.Strawberries, quantity, prices.StrawberriesPrice);
					}
					else
					{
						mine.Raspberries = mine.Sell(mine.Raspberries, quantity, prices.RaspberriesPrice);
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