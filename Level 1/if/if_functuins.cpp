#include <iostream>
using namespace std;
#include <string>
void readInfo(int &yourAge, string &license)
{
	cout << "Enter your Age\n";
	cin >> yourAge;
	cout << "do you have License\n";
	cin >> license;
	cout << "***********************************\n";
}
string checkInfo(int yourAge, string license)
{
	string result;
	if (yourAge > 21 && license == "yes")
	{
		result = "Accepted!\n";
	}
	else
	{
		result = "rejected\n";
	}
	return result;
}
int main()
{
	int age;
	string lics;
	readInfo(age, lics);
	cout << checkInfo(age, lics);
	return 0;
}