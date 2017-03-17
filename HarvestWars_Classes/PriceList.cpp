#include "PriceList.h"
#include <cstdlib>
#include <iostream>
#include <math.h>

using namespace std;

const double PriceList::MinGrapesPrice       =  1.25;
const double PriceList::MaxGrapesPrice       = 10.00;
const double PriceList::MinBlueberriesPrice  =  8.75;
const double PriceList::MaxBlueberriesPrice  = 26.25;
const double PriceList::MinStrawberriesPrice = 22.50;
const double PriceList::MaxStrawberriesPrice = 47.50;
const double PriceList::MinRaspberriesPrice  = 40.00;
const double PriceList::MaxRaspberriesPrice  = 77.50;

void PriceList::GeneratePrices()
{
	int grapesRange = (int)floor((MaxGrapesPrice - MinGrapesPrice)/0.25 + 0.5);
	GrapesPrice = MinGrapesPrice + (rand() % grapesRange) * 0.25;

	int blueberriesRange = (int)floor((MaxBlueberriesPrice - MinBlueberriesPrice)/0.25 + 0.5);
	BlueberriesPrice = MinBlueberriesPrice + (rand() % blueberriesRange) * 0.25;

	int strawberriesRange = (int)floor((MaxStrawberriesPrice - MinStrawberriesPrice)/0.25 + 0.5);
	StrawberriesPrice = MinStrawberriesPrice + (rand() % strawberriesRange) * 0.25;

	int raspberriesRange = (int)floor((MaxRaspberriesPrice - MinRaspberriesPrice)/0.25 + 0.5);
	RaspberriesPrice = MinRaspberriesPrice + (rand() % raspberriesRange) * 0.25;
}

PriceList::PriceList()
{
	GeneratePrices();
}

void PriceList::Print()
{
	cout << "Prices:" << endl;
	cout << "\tGrapes:       $" << GrapesPrice << endl;
	cout << "\tBlueberries:  $" << BlueberriesPrice << endl;
	cout << "\tStrawberries: $" << StrawberriesPrice << endl;
	cout << "\tRaspberries:  $" << RaspberriesPrice << endl;
}
