#include <iostream>
#include <string>
using namespace std;

struct Band
{
	string		MemberName;
	string		MemberInstrument;
	double		MemberWeight; //in kg
	int			MemberAge;
}BandMember;

// function prototypes
void PrintInfo();
void GetBand();

int main()
{
	GetBand();
	PrintInfo();
	return 0;
}
// function declaration
void PrintInfo()
{
	cout << endl;
	cout << "Name: \t \t" << BandMember.MemberName << endl;
	cout << "Instrument: \t" << BandMember.MemberInstrument << endl;
	cout << "Weight: \t" << BandMember.MemberWeight << " kg" << endl;
	cout << "Age: \t\t" << BandMember.MemberAge << endl;
}
// function declaration 
void GetBand()
{
	cout << "Enter Name:  ";
	cin >> BandMember.MemberName;
	cout << "Enter Instrument: ";
	cin >> BandMember.MemberInstrument;
	cout << "Enter Weight: ";
	cin >> BandMember.MemberWeight;
	cout << "Enter Age: ";
	cin >> BandMember.MemberAge;
}
