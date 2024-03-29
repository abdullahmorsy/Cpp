#include <iostream>
using namespace std;

enum enOddOrEven
{
	odd = 1,
	even = 2
};
int readNumber()
{
	int number;
	cout << "Enter your number ";
	cin >> number;
	return number;
}

enOddOrEven checkOddOrEven(int number)
{
	if (number % 2 == 0)
		return enOddOrEven::even;
	else
		return enOddOrEven::odd;
}

int sumOddNumbersFrom1ToN(int n)
{
	int sum = 0;
	cout << "The sum of odd numbers from 1 to " << n << " is: ";
	for (int counter = 1; counter <= n; counter++)
	{
		if (checkOddOrEven(counter) == enOddOrEven::odd)
		{
			sum = sum + counter;
		}
	}
	return sum;
}

int main()
{
	int n = readNumber();
	cout << sumOddNumbersFrom1ToN(n) << endl;
}