#include <iostream>
using namespace std;

// & is for refrence but without it will take the value only
void myFunction(int &num)
{
	num = 7000;
	cout << "num inside Function became: " << num << endl;
}
int main()
{
	int num = 1000;
	myFunction(num);
	cout << "number after calling the function is " << num << endl;
	int x = 20;
	cout << "the value of x is: " << x << endl;
	cout << "the adress(refrence) of x is: " << &x << endl;
	return 0;
}