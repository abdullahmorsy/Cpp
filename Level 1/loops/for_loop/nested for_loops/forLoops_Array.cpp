#include <iostream>
using namespace std;

void readArrayData(int arr[100], int &length)
{
    cout << "how many numbers do you want to enter! From 1 to 100! ";
    cin >> length;

    for (int i = 0; i <= length - 1; i++)
    {
        cout << "Enter Number " << i + 1 << endl;
        cin >> arr[i];
    }
}

void printArrayData(int arr[100], int length)
{
    for (int i = 0; i <= length - 1; i++)
    {
        cout << "Number [" << i + 1 << "] : " << arr[i] << endl;
    }
}

int sumOfArray(int arr[100], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int arr[100], length = 0;
    readArrayData(arr, length);
    printArrayData(arr, length);
    int sum = sumOfArray(arr, length);
    cout << "***************************\n";
    cout << "sum = " << sum << endl;
    cout << "average = " << (float)sum / length << endl;
    return 0;
}
