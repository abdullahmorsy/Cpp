#include <iostream>
using namespace std;

void ReadNumber(int &n)
{
	cout << "Enter your number ";
	cin >> n;
}

void loopFunc(int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << i << endl;
	}
}

int main()
{
	int n;
	ReadNumber(n);
	loopFunc(n);
}