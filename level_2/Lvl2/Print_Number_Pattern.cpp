#include <iostream>
#include "Header.h"

using namespace std;
using namespace Godzilla;

int main()
{
    int x = readValidatePositive("Please Enter A number!");
    printNumberPattern(x);
    PrintInvertedNumberPattern(x);
    return 0;
}