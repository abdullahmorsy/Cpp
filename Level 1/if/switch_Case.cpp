#include <iostream>
using namespace std;

enum enCountryChoice
{
	Egypt = 1,
	KSA = 2,
	UAE = 3,
	USA = 4
};

void chooseCountry(int &userCountry)
{
	cout << "*******************************\n";
	cout << "please choose the number of your ountry?\n";
	cout << "(1) Egypt!\n";
	cout << "(2) KSA!\n";
	cout << "(3) UAE!\n";
	cout << "(4) USA!\n";
	cout << "*******************************\n";
	cout << "Your choice? ";
	cin >> userCountry;
}
int main()
{
	int country;
	chooseCountry(country);
	country = enCountryChoice(country);
	switch (country)
	{
	case enCountryChoice::Egypt:
		cout << "Your Country is Egypt!!\n";
		break;
	case enCountryChoice::KSA:
		cout << "Your Country is KSA!!\n";
		break;
	case enCountryChoice::UAE:
		cout << "Your Country is UAE!!\n";
		break;
	case enCountryChoice::USA:
		cout << "Your Country is USA!!\n";
		break;
	default:
		cout << "your country is other?!?!?\n";
	}
	return 0;
}