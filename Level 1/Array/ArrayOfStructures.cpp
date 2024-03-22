#include <iostream>
using namespace std;

struct strInfo
{
	string firstName;
	string LastName;
	int age;
	string phone;
};

void readInfo(strInfo &personInfo)
{
	cout << "Please enter your first name!\n";
	cin >> personInfo.firstName;
	cout << "Please enter your Last name!\n";
	cin >> personInfo.LastName;
	cout << "Please enter your Age!\n";
	cin >> personInfo.age;
	cout << "Please enter your Phone!\n";
	cin >> personInfo.phone;
}

void printInfo(strInfo &personInfo)
{
	cout << "*****************************\n";
	cout << "First name: " << personInfo.firstName << endl;
	cout << "Last name: " << personInfo.LastName << endl;
	cout << "Age: " << personInfo.age << endl;
	cout << "phone: " << personInfo.phone << endl;
	cout << "*****************************\n";
}

void readPersonsInfo(strInfo persons[2])
{
	readInfo(persons[0]);
	readInfo(persons[1]);
}

void printPersonsInfo(strInfo persons[2])
{
	printInfo(persons[0]);
	printInfo(persons[1]);
}

int main()
{
	strInfo persons[2];
	readPersonsInfo(persons);
	printPersonsInfo(persons);

	return 0;
}