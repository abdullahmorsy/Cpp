#include <iostream>
using namespace std;

int readinputRange(int from, int to)
{
    int input;
    cout << "Enter Number from " << from << " to " << to << endl;
    cin >> input;
    while (input < from || input > to)
    {
        cout << "Wrong number please enter number from " << from << " to " << to << endl;
        cin >> input;
    }
    return input;
}

int main()
{
    int Number = readinputRange(10, 50);
    cout << "Your Number is " << Number << endl;
}