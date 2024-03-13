#include <iostream>
#include <string>
using namespace std;
int main()
{
	string myString = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	/*myString.length() :: find the length of the string*/
	cout << "the length of myString is: " << myString.length() << endl;
	cout << myString[25] << endl;
	string s1 = "10", s2 = "20";
	string stringSum = s1 + s2;
	cout << stringSum << endl;
	int sum = stoi(s1) + stoi(s2);
	cout << sum << endl;
	return 0;
}
