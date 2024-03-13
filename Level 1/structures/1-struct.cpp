#include <iostream>
using namespace std;

struct stAddress
{
	string country;
	string city;
};

struct owners
{
	string Name;
	string phone;
	stAddress address;
};

struct myCars
{
	string brand;
	string model;
	int year;
	owners owner;
};

int main()
{
	myCars car1, car2;
	car1.brand = "BMW";
	car1.model = "x6";
	car1.year = 2024;
	car1.owner.Name = "Abdullah Morsy";
	car1.owner.phone = "441205105102105";
	car1.owner.address.country = "Egypt";
	car1.owner.address.city = "cairo";

	car2.brand = "Ford";
	car2.model = "Mustang";
	car2.year = 2023;
	car2.owner.Name = "Mohamed Morsy";
	car2.owner.phone = "05411044054";
	car2.owner.address.country = "Egypt";
	car2.owner.address.city = "cairo";

	cout << car1.brand << " " << car1.model << " " << car1.year << endl;
	cout << "Owner name: " << car1.owner.Name << endl;
	cout << "Owner phone: " << car1.owner.phone << endl;
	cout << "Owner Country: " << car1.owner.address.country << endl;
	cout << "Owner City: " << car1.owner.address.city << endl;

	cout << car2.brand << " " << car2.model << " " << car2.year << endl;
	cout << "Owner name: " << car2.owner.Name << endl;
	cout << "Owner phone: " << car2.owner.phone << endl;
	cout << "Owner Country: " << car2.owner.address.country << endl;
	cout << "Owner City: " << car2.owner.address.city << endl;
	return 0;
}