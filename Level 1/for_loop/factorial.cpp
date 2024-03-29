#include <iostream>
using namespace std;

int ReadPositiveNumber(int &n)
{
	do
	{
		cout << "Enter Positive number ";
		cin >> n;
	} while (n <= 0);
	return n;
}

int Factorial(int n)
{
	int f = 1;
	for (int counter = 1; counter <= n; counter++)
	{
		f = f * counter;
	}
	return f;
}

int main()
{
	int n;
	ReadPositiveNumber(n);
	cout << "the Factorial of " << n << " is " << Factorial(n) << endl;

	return 0;
}