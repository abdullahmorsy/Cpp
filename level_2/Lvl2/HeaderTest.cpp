#include <iostream>
#include "Header.h"
#include <string>
#include <cstdlib>
using namespace std;
using namespace Godzilla;

int main()
{
	cout << "\n\n----------------------------------\n";
	cout << "       Random Key Genrator\n";
	cout << "----------------------------------\n";

	srand((unsigned)time(NULL));
	int x = readValidatePositive("Please Enter number of Keys you like to Generate");
	cout << endl;
	randomKey(x);
	// system("pause");
	return 0;
}
