#include <iostream>
#include <string>
using namespace std;
int main()
{
	string fullName, str2, str3;
	cout << "Please Enter string1 ?\n";
	getline(cin, fullName);
	cout << "Please Enter string2 ?\n";
	cin >> str2;
	cout << "Please Enter string3 ?\n";
	cin >> str3;
	cout << "***********************************************\n";
	cout << "The length of string 1 is: " << fullName.length() << endl;
	cout << "Charachters of 0,2,4,7 are: " << fullName[0] << " " << fullName[2] << " " << fullName[4] << " " << fullName[7] << endl;
	string Concat = str2 + str3;
	cout << "Concatenating string2 & string3 is: " << Concat << endl;
	int res = stoi(str2) * stoi(str3);
	cout << str2 << " * " << str3 << " = " << res << endl;
	return 0;
}
