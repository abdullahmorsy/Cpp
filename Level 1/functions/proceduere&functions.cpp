#include <iostream>
using namespace std;
void mySum()
{
	float n1, n2, res;

	cout << "Enter Number1!\n";
	cin >> n1;

	cout << "Enter Number2!\n";
	cin >> n2;

	res = n1 + n2;
	cout << "********************\n";
	cout << res << endl;
}

float mySum2()
{
	float n1, n2, res;
	cout << "Enter Number1!\n";
	cin >> n1;
	cout << "Enter Number2!\n";
	cin >> n2;
	res = n1 + n2;
	cout << "********************\n";
	return res;
}
int main()
{
	mySum();
	cout << mySum2() << endl;
	return 0;
}