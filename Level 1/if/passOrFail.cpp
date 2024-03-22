#include <iostream>
using namespace std;

void readGrade(float &grade1, float &grade2, float &grade3)
{
	cout << "Enter Mark1\n";
	cin >> grade1;
	cout << "Enter Mark2\n";
	cin >> grade2;
	cout << "Enter Mark3\n";
	cin >> grade3;
	cout << "***********************************\n";
}

float avg(float grade1, float grade2, float grade3)
{
	float res;
	return res = (grade1 + grade2 + grade3) / 3;
}

void checkGrade(float average)
{
	if (average >= 50)
	{
		cout << "Pass!\n";
	}
	else
	{
		cout << "Fail!\n";
	}
}

int main()
{
	float mark1, mark2, makr3;
	readGrade(mark1, mark2, makr3);
	cout << avg(mark1, mark2, makr3) << endl;
	checkGrade(avg(mark1, mark2, makr3));
	return 0;
}