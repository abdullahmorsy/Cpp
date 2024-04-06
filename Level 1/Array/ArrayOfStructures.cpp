#include <iostream>
using namespace std;

struct strInfo
{
	string firstName;
	string LastName;
	int age;
	string phone;
};

void readNoUsers(int &noUser)
{
	cout << "Enter the number of persons! ";
	cin >> noUser;
}

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
	cout << "First name: " << personInfo.firstName << endl;
	cout << "Last name: " << personInfo.LastName << endl;
	cout << "Age: " << personInfo.age << endl;
	cout << "phone: " << personInfo.phone << endl;
	cout << "*****************************\n";
}

void readPersonsInfo(strInfo persons[100], int noUsers)
{
	for (int i = 0; i < noUsers; i++)
	{
		cout << "please enter Person's " << i + 1 << " info!\n";
		readInfo(persons[i]);
		cout << endl;
	}
	cout << "*****************************\n";
}

void printPersonsInfo(strInfo persons[100], int noUsers)
{
	for (int i = 0; i < noUsers; i++)
	{
		printInfo(persons[0]);
	}
}

int main()
{
	strInfo persons[100];
	int noUser;
	readNoUsers(noUser);
	readPersonsInfo(persons, noUser);
	printPersonsInfo(persons, noUser);

	return 0;
}