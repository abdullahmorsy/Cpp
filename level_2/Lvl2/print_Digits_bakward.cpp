#include <iostream>
#include "Header.h"

using namespace std;
using namespace Godzilla;

int main()
{
    PrintSumOfDigits(readValidatePositive("Please enter the main number"));
    cout << endl;
    return 0;
}