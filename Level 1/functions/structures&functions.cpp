#include <iostream>
using namespace std;

struct strInfo
{
	string FirstName;
	string LastName;
	int Age;
	string Phone;
};

void ReadInfo(strInfo &personInfo)
{
	cout << "Enter your First name\n";
	cin >> personInfo.FirstName;
	cout << "Enter your Last name\n";
	cin >> personInfo.LastName;
	cout << "Enter your age\n";
	cin >> personInfo.Age;
	cout << "Enter your Phone\n";
	cin >> personInfo.Phone;
}

void PrintInfo(strInfo personInfo)
{
	cout << "**********************\n";
	cout << "FirstName: " << personInfo.FirstName << endl;
	cout << "LastName: " << personInfo.LastName << endl;
	cout << "Age: " << personInfo.Age << endl;
	cout << "Phone: " << personInfo.Phone << endl;
	cout << "**********************\n";
}

int main()
{
	strInfo Person1Info;
	ReadInfo(Person1Info);
	PrintInfo(Person1Info);
}