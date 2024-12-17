#include <iostream>
#include "Header.h"

using namespace std;
using namespace Godzilla;

int main()
{
    int number = readValidatePositive("Please enter the main number?");
    short digit = readValidatePositive("Please enter one digit to check?");
    cout << "the frequency of  digit " << digit << " in " << number << " = " << countDigitFrequency(number, digit);
    cout << endl;
    cout << endl;
    return 0;
}