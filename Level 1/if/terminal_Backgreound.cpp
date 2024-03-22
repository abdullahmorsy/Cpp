#include <iostream>
using namespace std;

enum enScreenColor
{
	red = 1,
	blue = 2,
	green = 3,
	yellow = 4
};
void chooseColor(int &userColor)
{
	cout << "*******************************\n";
	cout << "please choose the number of your color?\n";
	cout << "(1) Red!\n";
	cout << "(2) blue!\n";
	cout << "(3) green!\n";
	cout << "(4) yellow!\n";
	cout << "*******************************\n";
	cout << "Your choice? ";
	cin >> userColor;
}

void applyColor(enScreenColor color)
{
	string colorCode;
	if (color == enScreenColor::red)
	{
		colorCode = "\033[41m";
	}
	else if (color == enScreenColor::blue)
	{
		colorCode = "\033[44m"; // Blue text
	}
	else if (color == enScreenColor::green)
	{
		colorCode = "\033[42m"; // Green text
	}
	else if (color == enScreenColor::yellow)
	{
		colorCode = "\033[43m"; // Yellow text
	}
	else
	{
		colorCode = "\[\033[0;107m\]";
	}
	cout << colorCode;
}

int main()
{
	int c;
	enScreenColor color;
	chooseColor(c);
	color = (enScreenColor)c;
	applyColor(color);
	return 0;
}