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
	cout << "Please enter the number ";
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

int sumOfEvenNumbersFrom1ToN(int n)
{
	int sum = 0;
	for (int counter = 1; counter <= n; counter++)
	{
		if (checkOddOrEven(counter) == enOddOrEven::even)
		{
			sum += counter;
		}
	}
	return sum;
}

int main()
{
	int n = readNumber();
	cout << sumOfEvenNumbersFrom1ToN(n) << endl;
}