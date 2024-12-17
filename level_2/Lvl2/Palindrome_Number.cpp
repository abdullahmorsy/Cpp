#include <iostream>
#include "Header.h"

using namespace std;
using namespace Godzilla;

int main()
{
    int number = readValidatePositive("Please enter the main number?");
    PrintDigitsBackward(reverseNumber(number));
    cout << endl;
    cout << endl;
    return 0;
}