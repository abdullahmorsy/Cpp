#include <iostream>
using namespace std;
int main()
{
	int PIN, balance = 7500;

	cout << "Enter PIN code\n";
	cin >> PIN;

	if (PIN == 1234)
	{
		cout << "your balance is: " << balance << endl;
	}
	else
	{
		cout << "Wrong PIN!\n";
	}
	return 0;
}