#include <iostream>
#include "Header.h"

using namespace std;
using namespace Godzilla;

int main()
{
    int reversed = reverseNumber(readValidatePositive("Please enter the main number"));
    cout << "the reverse is " << reversed;
    cout << endl;
    return 0;
}