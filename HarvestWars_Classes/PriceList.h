#ifndef PRICELIST_H
#define PRICELIST_H

class PriceList
{
private:
	static const double MinGrapesPrice;
	static const double MaxGrapesPrice;
	static const double MinBlueberriesPrice;
	static const double MaxBlueberriesPrice;
	static const double MinStrawberriesPrice;
	static const double MaxStrawberriesPrice;
	static const double MinRaspberriesPrice;
	static const double MaxRaspberriesPrice;

	void GeneratePrices();

public:
	double GrapesPrice;
	double BlueberriesPrice;
	double StrawberriesPrice;
	double RaspberriesPrice;

	PriceList();

	void Print();
};

#endif