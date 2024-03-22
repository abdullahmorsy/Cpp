
#include <iostream>
using namespace std;
// Global variable ::x to use it in any function
int x = 300;

void Godzilla()
{
	int x = 2002;
	cout << "the value of x inside function is: " << x << endl;
}
int main()
{
	Godzilla();
	// x is local variable here
	int x = 20;
	cout << "the Local value of x inside Main is: " << x << endl;
	cout << "the Global value of x is: " << ::x << endl;
	return 0;
}
