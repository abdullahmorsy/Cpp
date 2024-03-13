#include <iostream>
#include <string>
using namespace std;

int main()
{
	/*
	int num_1;
	double num_2 = 18.99;
	// implicit conversion from double to int

	num_1 = num_2;
	num_1 = (int)num_2; // explicit conversion
	num_1 = int(num_2); // explicit conversion
	cout << num_1 << endl;
	*/

	/*
	string str = "123.456";
	// convert from string to int
	int num_int = stoi(str);
	// convert from string to float
	float num_float = stof(str);
	// convert from string to double
	double num_double = stod(str);
	cout << "num_int = " << num_int << endl;
	cout << "num_float = " << num_float << endl;
	cout << "num_double = " << num_double << endl;
	*/

	/*convert numbers to strings*/
	int num1 = 123;
	double num2 = 18.99;
	string str1, str2;

	str1 = to_string(num1);
	str2 = to_string(num2);

	cout << str1 << endl;
	cout << str2 << endl;
	return 0;
}
