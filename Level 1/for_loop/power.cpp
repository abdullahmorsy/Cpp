#include <iostream>
using namespace std;

int ReadNumber()
{
	int number;

	cout << "Enter the Number! ";
	cin >> number;

	return number;
}

int ReadPower()
{
	int number;

	cout << "Enter the  power! ";
	cin >> number;

	return number;
}

int powerOfM(int M, int number)
{
	if (M == 0)
	{
		return 1;
	}
	int p = 1;
	for (int counter = 0; counter < M; counter++)
	{
		p = p * number;
	}

	return p;
}

int main()
{
	int Number = ReadNumber();
	int M = ReadPower();
	cout << Number << " ^ " << M << " = " << powerOfM(M, Number) << endl;
	return 0;
}