#include <iostream>
#include "Header.h"
#include <string>
#include <cstdlib>
using namespace std;
using namespace Godzilla;

int main()
{
    cout << "3 Random Number Genrator\n";
    int from = readValidatePositive("Please enter the starting number Number");
    int to = VaildateSeondNumber("Please enter the ending number Number", from);

    srand((unsigned)time(NULL));

    cout << "the first number is : " << randomNumber(from, to) << endl;
    cout << "the second number is : " << randomNumber(from, to) << endl;
    cout << "the third number is : " << randomNumber(from, to) << endl;
    // system("pause");
    return 0;
}