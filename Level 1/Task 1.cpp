#include <iostream>
using namespace std;

enum status
{
	single,
	married
};
enum gender
{
	male,
	female
};

int main()
{
	string Name;
	unsigned short Age;
	string City;
	string Country;
	float MonthlySalary;
	gender myGender;
	status myStatus;

	cout << "Enter ur name\n";
	cin >> Name;
	cout << "Enter ur Age\n";
	cin >> Age;
	cout << "Enter ur City\n";
	cin >> City;
	cout << "Enter ur Country\n";
	cin >> Country;
	cout << "Enter ur mounthly Salary\n";
	cin >> MonthlySalary;
	cout << "Are u or M\n";
	cin >> myGender;
	cout << "are U Married\n";
	cin >> myStatus;

	cout << "******************************\n";
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "Fter 5 years U will be: " << Age + 5 << endl;
	cout << "city: " << City << endl;
	cout << "Country: " << Country << endl;
	cout << "MonthlySalary: " << MonthlySalary << endl;
	cout << "YearlySalary: " << MonthlySalary * 12 << endl;
	cout << "Gender: " << myGender << endl;
	cout << "Married: " << myStatus << endl;
	cout << "******************************\n";

	return 0;
}