#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x;
	cout << "Enter a number! ";
	cin >> x;
	cout << "the square root of " << x << " is " << sqrt(x) << endl;
	cout << "the Round Value is " << round(sqrt(x)) << endl;
	cout << x << " power 2 is " << pow(x, 2) << endl;
	cout << "floor of (" << sqrt(x) << ") is" << floor(sqrt(x)) << endl;
	cout << "ceil of (" << sqrt(x) << ") is" << ceil(sqrt(x)) << endl;
	cout << "absolute Value of " << -1 * x << " is " << abs(-1 * x) << endl;
	return 0;
}