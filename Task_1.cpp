#include <iostream>
using namespace std;

struct strInfo
{
	string Name;
	unsigned short Age;
	string City;
	string Country;
	float MonthlySalary;
	bool myGender;
	bool myStatus;
};
void ReadData(strInfo &PersonInfo)
{
	cout << "Enter ur name\n";
	cin.ignore(1, '\n');
	getline(cin, PersonInfo.Name);
	cout << "Enter ur Age\n";
	cin >> PersonInfo.Age;
	cout << "Enter ur City\n";
	cin >> PersonInfo.City;
	cout << "Enter ur Country\n";
	cin >> PersonInfo.Country;
	cout << "Enter ur mounthly Salary\n";
	cin >> PersonInfo.MonthlySalary;
	cout << "Are u Female or Male\n";
	cin >> PersonInfo.myGender;
	cin.ignore(1, '\n');
	cout << "are U Married\n";
	cin >> PersonInfo.myStatus;
}
void printData(strInfo PersonInfo)
{
	cout << "******************************\n";
	cout << "Name: " << PersonInfo.Name << endl;
	cout << "Age: " << PersonInfo.Age << endl;
	cout << "Fter 5 years U will be: " << PersonInfo.Age + 5 << endl;
	cout << "city: " << PersonInfo.City << endl;
	cout << "Country: " << PersonInfo.Country << endl;
	cout << "MonthlySalary: " << PersonInfo.MonthlySalary << endl;
	cout << "YearlySalary: " << PersonInfo.MonthlySalary * 12 << endl;
	cout << "Gender: " << PersonInfo.myGender << endl;
	cout << "Married: " << PersonInfo.myStatus << endl;
	cout << "******************************\n";
}
int main()
{
	strInfo Godzilla;
	ReadData(Godzilla);
	printData(Godzilla);
	return 0;
}