#include <iostream>
#include "Header.h"

using namespace std;
using namespace Godzilla;

int main()
{
    int x = readValidatePositive("Please Enter A number!");
    printLetterPattern(x);
    printReversedLetterPattern(x);
    return 0;
}