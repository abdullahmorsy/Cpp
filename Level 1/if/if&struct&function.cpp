#include <iostream>
using namespace std;
#include <string>
struct strInfo
{
	int Age;
	string license;
};
void readInfo(strInfo &personInfo)
{
	cout << "Enter your Age\n";
	cin >> personInfo.Age;
	cout << "do you have License\n";
	cin >> personInfo.license;
	cout << "***********************************\n";
}
string checkInfo(strInfo personInfo)
{
	string result;
	if (personInfo.Age > 21 && personInfo.license == "yes")
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
	strInfo status;
	readInfo(status);
	cout << checkInfo(status);
	return 0;
}