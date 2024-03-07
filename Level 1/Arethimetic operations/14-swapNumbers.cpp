#include <iostream>
using namespace std;
int main()
{
	int n1, n2, temp;
	cout << "enter n1 \n";
	cin >> n1;
	cout << "enter n2 \n";
	cin >> n2;

	cout << "\n\n" << n1 << endl;
	cout << n2 << "\n\n";

	temp = n1;
	n1 = n2;
	n2 = temp;

	cout << n1 << endl;
	cout << n2 << "\n\n";
	return 0;
}