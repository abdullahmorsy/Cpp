#pragma once
#include <iostream>
#include <limits>
#include <string>
using namespace std;

namespace Godzilla
{
	int readPositiveNumber(string message)
	{
		int number = 0;
		do
		{
			cout << message << endl;
			cin >> number;
		} while (number <= 0);
		return number;
	}

	int readValidatePositive(string message)
	{
		int number = 0;
		cout << message << "\n";
		cin >> number;
		while (cin.fail() || number <= 0)
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "enter A Valid Number!\n";
			cin >> number;
		}
		return number;
	}

	bool isPerectNumber(int number)
	{
		int sum = 0;
		for (int i = 1; i < number; i++)
		{
			if (number % i == 0)
			{
				sum += i;
			}
		}
		return number == sum;
	}

	void printPerfectNumberFrom1ToN(int number)
	{
		for (int i = 1; i <= number; i++)
		{
			if (isPerectNumber(i))
				cout << i << " is perfect Number!\n";
		}
	}

	void PrintDigitsBackward(int number)
	{
		int remainder = 0;
		while (number > 0)
		{
			remainder = number % 10;
			number = number / 10;
			cout << remainder << endl;
		}
	}

	void PrintSumOfDigits(int number)
	{
		int original_number = number;
		int sum = 0;
		int remainder = 0;
		while (number > 0)
		{
			remainder = number % 10;
			sum += remainder;
			number = number / 10;
		}
		cout << "the sum of " << original_number << " digits = " << sum;
	}

	int reverseNumber(int number)
	{
		int original_number = number;
		int remainder = 0;
		int reversed = 0;
		while (number > 0)
		{
			remainder = number % 10;
			reversed = reversed * 10 + remainder;
			number = number / 10;
		}
		return reversed;
	}

	int countDigitFrequency(int number, short digit)
	{
		int remainder = 0;
		int freq = 0;
		while (number > 0)
		{
			remainder = number % 10;
			number = number / 10;
			if (digit == remainder)
			{
				freq++;
			}
		}
		return freq;
	}

	void PrintAllDigitsFrequencey(int number)
	{
		short i = 0;
		short DigitFrequency = 0;
		for (i = 0; i < 10; i++)
		{
			DigitFrequency = countDigitFrequency(number, i);
			if (DigitFrequency > 0)
				cout << "the frequency of  digit " << i << " in " << number << " = " << DigitFrequency << endl;
		}
	}

	void PalindromeNumber(int number)
	{
		int reversed = reverseNumber(number);
		(reversed == number) ? cout << "it's Palindrome Number!!" : cout << "it isn't Palindrome Number!";
	}

	void PrintInvertedNumberPattern(int number)
	{
		cout << "----------------\n";
		for (int i = number; i > 0; i--)
		{
			for (int j = 1; j <= i; j++)
			{
				if (i < 10)
				{
					cout << i;
				}
				else
				{
					cout << i << ",";
				}
			}
			cout << endl;
		}
	}

	void printNumberPattern(int number)
	{
		cout << "----------------------------\n";
		for (int i = 1; i <= number; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				if (i < 10)
				{
					cout << i;
				}
				else
				{
					cout << i << ",";
				}
			}
			cout << endl;
		}
	}

	void printReversedLetterPattern(int number)
	{
		cout << "----------------------\n";
		for (char i = number + 64; i >= 65; i--)
		{
			for (int j = 1; j <= i - 64; j++)
			{
				cout << i;
			}
			cout << endl;
		}
	}

	void printLetterPattern(int number)
	{
		cout << "-------------------------------\n";

		for (int i = 65; i <= number + 64; i++)
		{
			for (int j = 1; j <= i - 64; j++)
			{
				cout << char(i);
			}
			cout << endl;
		}

		// for (int i = 1; i <= number; i++)
		// {
		// 	for (int j = 1; j <= i; j++)
		// 	{
		// 		char k = i + 64;
		// 		cout << k;
		// 	}
		// 	cout << endl;
		// 	}
	}

	void PrintWordsFromAAAtoZZZ()
	{
		cout << "\n";
		string word = "";
		for (char i = 65; i <= 90; i++)
		{
			for (char j = 65; j <= 90; j++)
			{
				for (char k = 65; k <= 90; k++)
				{
					word = word + i;
					word = word + j;
					word = word + k;
					cout << word << endl;
					word = "";
				}
			}
		}
	}

	string readPaasword()
	{
		string password;
		cout << "Please enter a 3-Letter Password (all capital)?\n";
		cin >> password;
		return password;
	}

	bool guessPassword(string originalPassword)
	{
		int Counter = 0;
		string word = "";
		for (int i = 65; i <= 90; i++)
		{
			for (int j = 65; j <= 90; j++)
			{
				for (int k = 65; k <= 90; k++)
				{
					word = word + char(i);
					word = word + char(j);
					word = word + char(k);
					Counter++;
					cout << "Trial [" << Counter << "] : ";
					cout << word << endl;
					if (word == originalPassword)
					{
						cout << "\n-----------------------------\n";
						cout << "Password is " << word << "\n";
						cout << "Found after " << Counter << " Trial(s)\n\n";
						return true;
					}
					word = "";
				}
			}
		}
		return false;
	}

	string readText()
	{
		string text;
		cout << "Please enter Text!\n";
		// cin.ignore(1, '\n');
		getline(cin, text);
		return text;
	}

	string EncryptText(string text, short encryptionkey)
	{
		for (int i = 0; i <= text.length(); i++)
		{
			text[i] = char((int)text[i] + encryptionkey);
		}
		return text;
	}

	string decryptText(string text, short encryptionkey)
	{
		for (int i = 0; i <= text.length(); i++)
		{
			text[i] = char((int)text[i] - encryptionkey);
		}
		return text;
	}

	int VaildateSeondNumber(string message, int first)
	{

		int number = 0;
		cout << message << "\n";
		cin >> number;
		while (cin.fail() || number <= 0 || number < first)
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "enter A positive number Bigger than the starting Number!\n";
			cin >> number;
		}
		return number;
	}

	int randomNumber(int from, int to)
	{
		int random = rand() % (to - from + 1) + from;
		return random;
	}

	void randomKey(int count)
	{
		for (int i = 1; i <= count; i++)
		{
			printf("key[%d] : ", i);
			for (int k = 1; k <= 4; k++)
			{
				for (int j = 1; j <= 4; j++)
				{
					cout << char(randomNumber(65, 90));
				}
				if (k < 4)
					cout << "-";
				else
					cout << endl;
			}
		}
	}

	void printNumberFromNtoM(int n, int m)
	{
		if (n <= m)
		{
			cout << n << endl;
			printNumberFromNtoM(n + 1, m);
		}
	}

	int sum2Num(int x, int y)
	{
		return x + y;
	}

	void shortIF()
	{
		int Num;
		cout << "Enter Number\n";
		cin >> Num;
		(Num == 0) ? cout << "it's zero!" : (Num > 0) ? cout << "it's positive!"
													  : cout << "it's negative!";
		cout << endl;
	}

	int validateNumber()
	{
		int number;
		cout << "Enter your Number\n";
		cin >> number;
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "enter A Valid Number!";
			cin >> number;
		}
		return number;
	}
}