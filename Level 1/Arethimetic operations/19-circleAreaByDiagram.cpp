#include <iostream>
using namespace std;

int main()
{
	int D;
	float area;
	const float pi = 3.14;
	cout << "enter D\n";
	cin >> D;
	area = (pi * D * D) / 4;
	cout << "area is " << area << endl;
	return 0;
}