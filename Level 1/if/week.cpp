#include <iostream>
using namespace std;

enum enWeekDay
{
	Sun = 1,
	Mon = 2,
	Tue = 3,
	Wed = 4,
	Thu = 5,
	Fri = 6,
	Sat = 7
};

void showWeekMenu()
{
	cout << "************************" << endl;
	cout << "       Week Days        " << endl;
	cout << "************************" << endl;
	cout << "1: Sunday" << endl;
	cout << "2: Monday" << endl;
	cout << "3: Tuesday" << endl;
	cout << "4: Wednesday" << endl;
	cout << "5: Thursday" << endl;
	cout << "6: Friday" << endl;
	cout << "7: Saturday" << endl;
	cout << "************************" << endl;
	cout << "Please enter the number of day?" << endl;
}

enWeekDay ReadWeekDay()
{
	int wd;
	cin >> wd;
	return (enWeekDay)wd;
}

string getWeekDayName(enWeekDay WeekDay)
{
	switch (WeekDay)
	{

	case enWeekDay::Sun:
		return "today is Sunday";
		break;
	case enWeekDay::Mon:
		return "today is Monday";
		break;
	case enWeekDay::Tue:
		return "today is Tuesday";
		break;
	case enWeekDay::Wed:
		return "today is Wednesday";
		break;
	case enWeekDay::Thu:
		return "today is Thursday";
		break;
	case enWeekDay::Fri:
		return "today is Friday";
		break;
	case enWeekDay::Sat:
		return "today is Saturday";
		break;
	default:
		return "today is Not a week day!\n";
	}
}

int main()
{
	showWeekMenu();
	cout << getWeekDayName(ReadWeekDay()) << endl;
	return 0;
}