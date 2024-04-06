#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "--------------------------------\n";

    for (int x = 10; x >= 1; x--)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << y << " ";
        }
        cout << endl;
    }

    for (char a = 'A'; a <= 'Z'; a++)
    {
        for (char b = 'A'; b <= a; b++)
            cout << b << " ";
        cout << endl;
    }

    cout << "--------------------------------\n";

    for (int k = 1; k <= 10; k++)
    {
        for (int l = k; l <= 10; l++)
        {
            cout << l << " ";
        }
        cout << endl;
    }
    return 0;
}