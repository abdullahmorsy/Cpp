#include "header.h"
#include <iostream>
#include <limits>
#include <string>

using namespace std;

void PalindromeNumber(int number)
{
    int reversed = reverseNumber(number);
    (reversed == number) ? cout << "it's Palindrome Number!!" : cout << "it isn't Palindrome Number!";
}

int sum2Num(int x, int y)
{
    return x + y;
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

int reverseNumber(int number){
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