#include <iostream>
using namespace std;
int main()
{
	float grade[3];
	cout << "enter grade1!\n";
	cin >> grade[0];
	cout << "enter grade2!\n";
	cin >> grade[1];
	cout << "enter grade3!\n";
	cin >> grade[2];
	cout << "*****************************\n";
	float avg = (grade[0] + grade[1] + grade[2]) / 3;
	cout << "the average of grades is " << avg << endl;
	return 0;
}