#include <iostream>
using namespace std;
#include <math.h>
void squareStars()
{
	cout << "********" << std::endl;
	cout << "********" << std::endl;
	cout << "********" << std::endl;
	cout << "********" << std::endl;
}
void displayCardInfo()
{
	cout << "*******************************" << endl;
	cout << "Name: Abdullah Morsy EL-said\n";
	cout << "age : 22 Years\n";
	cout << "city: Cairo\n";
	cout << "Country: Egypt\n";
	cout << "*******************************" << endl;
}
void H_Star()
{
	cout << "*   *" << endl;
	cout << "*   *" << endl;
	cout << "*****" << endl;
	cout << "*   *" << endl;
	cout << "*   *" << endl;
}
void I_love_programming()
{
	cout << "I love programming\n"
		 << endl;
	cout << "I promise to be the best developer Ever\n"
		 << endl;
	cout << "I know it will take some time to practice, but I will achieve my goal!\n"
		 << endl;
	cout << "Best Regards!\nAbdUllah Morsy---Godzilla" << endl;
}
string Godzilla()
{
	return "\n*************************\nGodzilla\n*************************\n\n";
}
float sum();
int main()
{
	// displayCardInfo();
	// squareStars();
	// I_love_programming();
	// H_Star();
	// cout << Godzilla();
	cout << ceil(sum()) << endl;
	return 0;
}
float sum()
{
	float x = 10.25 ,y = 34.12;
	return x * y;
}