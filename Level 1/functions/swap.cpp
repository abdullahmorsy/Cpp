#include <iostream>
using namespace std;

void swap(int &A, int &B)
{
	int temp;
	temp = A;
	A = B;
	B = temp;
	cout << "after swap inside Swap function A= " << A << ", B= " << B << endl;
}
int main()
{
	int A, B;
	cout << "Enter A\n";
	cin >> A;
	cout << "Enter B\n";
	cin >> B;
	cout << "Before swap  A= " << A << ", B= " << B << endl;
	swap(A, B);
	cout << "after swap inside Main function A= " << A << ", B= " << B << endl;
	return 0;
}
