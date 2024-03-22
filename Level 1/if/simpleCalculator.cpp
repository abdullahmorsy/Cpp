#include <iostream>
using namespace std;

int main()
{
	float n1, n2, result;
	char operation;

	cout << "enter the first number: ";
	cin >> n1;
	cout << "Enter the operator (+, -, *, /): ";
	cin >> operation;
	cout << "enter the second number: ";
	cin >> n2;
	cout << "*************************************\n";

	switch (operation)
	{
	case '+':
		result = n1 + n2;
		cout << "result is " << n1 << " + " << n2 << " = " << result << endl;
		break;
	case '-':
		result = n1 - n2;
		cout << "result is " << n1 << " - " << n2 << " = " << result << endl;
		break;
	case '*':
		result = n1 * n2;
		cout << "result is " << n1 << " * " << n2 << " = " << result << endl;
		break;
	case '/':
		if (n2 == 0)
		{
			cout << "Error: Division by zero is not allowed\n";
		}
		else
		{
			result = n1 / n2;
			cout << "result is " << n1 << " / " << n2 << " = " << result << endl;
			break;
		}
	default:
		cout << "Invalid operator. Please use +, -, *, or /.\n";
		break;
	}
	return 0;
}