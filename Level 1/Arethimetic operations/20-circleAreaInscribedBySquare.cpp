#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int A;
	float area;
	const float pi = 3.14;
	cout << "enter A\n";
	cin >> A;
	int temp;
	temp = A / 2;
	area = pi * (pow(temp, 2));
	cout << "area is " << area << endl;
	return 0;
}