/**
* Title               : Convert Decimal to Roman Numeral
* Program Description : Write a C++ program to Convert Decimal Number to Roman Numeral.
* Author              : http://robustprogramming.com/convert-decimal-to-roman-numeral-cpp/
* Interface           : Console
*/

#include<iostream>

using namespace std;

int main()
{
	int decimalNumber;
	int j;   // Counter Variable
	int m;   // Numerical Value 1000
	int d;   // Numerical Value 500
	int c;   // Numerical Value 100
	int l;   // Numerical Value 50
	int x;   // Numerical Value 10
	int ix;  // Numerical Value 9
	int v;   // Numerical Value 5
	int iv;  // Numerical Value 4
	int i;   // Numerical Value 1

	cout << " C++ Program to Convert Decimal to Roman Numeral" << endl;
	cout << " Enter Decimal Number: ";
	cin >> decimalNumber;

	if (decimalNumber <= 0)
	{
		cout << " Error! Invalid number." << endl;
		cout << " Press enter to continue..." << endl;
		cin.ignore();
		cin.get();
		return 0;
	}
	m = decimalNumber / 1000;
	decimalNumber = decimalNumber % 1000;

	d = decimalNumber / 500;
	decimalNumber = decimalNumber % 500;

	c = decimalNumber / 100;
	decimalNumber = decimalNumber % 100;

	l = decimalNumber / 50;
	decimalNumber = decimalNumber % 50;

	x = decimalNumber / 10;
	decimalNumber = decimalNumber % 10;

	ix = decimalNumber / 9;
	decimalNumber = decimalNumber % 9;

	v = decimalNumber / 5;
	decimalNumber = decimalNumber % 5;

	iv = decimalNumber / 4;
	decimalNumber = decimalNumber % 4;

	i = decimalNumber;

	cout << " Roman Numeral = ";
	for (j = 1; j <= m; j++)
		cout << "M";

	for (j = 1; j <= d; j++)
		cout << "D";

	for (j = 1; j <= c; j++)
		cout << "C";

	for (j = 1; j <= l; j++)
		cout << "L";

	for (j = 1; j <= x; j++)
		cout << "X";

	for (j = 1; j <= ix; j++)
		cout << "IX";

	for (j = 1; j <= v; j++)
		cout << "V";

	for (j = 1; j <= iv; j++)
		cout << "IV";

	for (j = 1; j <= i; j++)
		cout << "I";

	cout << endl;

	cout << " Press enter to continue..." << endl;
	cin.ignore();
	cin.get();
	return 0;
}
