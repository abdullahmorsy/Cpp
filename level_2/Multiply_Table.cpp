#include <iostream>
using namespace std;

void printTableHeader()
{
    cout << ("\n\n\t\t\tMultiplication table from 1 to 10\n\n");
    cout << ("\t");
    for (int i = 1; i <= 10; i++)
    {
        cout << i << ("\t");
    }
    cout << ("\n___________________________________________________________________________________\n");
}

int main()
{
    printTableHeader();
    return 0;
}