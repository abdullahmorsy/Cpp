#include <iostream>
#include "Header.h"
#include <string>
#include <cstdlib>
using namespace std;
using namespace Godzilla;

enum enCharType
{
    Upper = 1,
    Lower = 2,
    Digit = 3,
    Special = 4
};

char GetRandomCharacter(enCharType charType)
{
    switch (charType)
    {
    case enCharType::Upper:
        return char(randomNumber(65, 90));
        break;
    case enCharType::Lower:
        return char(randomNumber(97, 122));
        break;
    case enCharType::Special:
        return char(randomNumber(33, 47));
        break;
    case enCharType::Digit:
        return char(randomNumber(49, 57));
        break;
    default:
        char(randomNumber(65, 90));
        break;
    }
}

int main()
{x
    cout << "Random Genrator\n";
    srand((unsigned)time(NULL));

    cout << "the Random Upper is : " << GetRandomCharacter(enCharType::Upper) << endl;
    cout << "the Random Lower is : " << GetRandomCharacter(enCharType::Lower) << endl;
    cout << "the Random special is : " << GetRandomCharacter(enCharType::Special) << endl;
    cout << "the Random digit is : " << GetRandomCharacter(enCharType::Digit) << endl;
    system("pause");
    return 0;
}
