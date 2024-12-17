#include <iostream>
#include <limits>
#include <string>
#include "header.h"

using namespace std;
// using namespace Godzilla;

int main()
{
    int number = readValidatePositive("Please enter the main number?");
    PalindromeNumber(number);
    cout << endl;
    cout << endl;
    system("pause");
    return 0;
}