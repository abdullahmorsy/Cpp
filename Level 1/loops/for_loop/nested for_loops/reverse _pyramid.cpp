#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (char j = 10; j >= i; j--)
            cout << "*";
        cout << endl;
    }
    return 0;
}