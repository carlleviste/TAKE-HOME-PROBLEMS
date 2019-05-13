// Create a program that will generate the sum of all whole numbers starting from 1 up to a
// given number. For example, given an input of 5, the summation is 1+2+3+4+5 = 15. Continue asking for
// input and calculating until the user enters 0 or a negative number.

#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
 int x; 
 int y; 
 int z;
	cout << "This program calculates the sum of all whole numbers starting from 1 up to a given number." << endl;
	cout << "Please enter a number:  "; cin >> x;
do
{
	z = 0;
	for (y=1; y <= x; ++y)
{
	z += y;
}
	cout << "The sum of all whole numbers from 1 to " << x << "= \t" << z << "\n" << endl;
	cout << "Please enter a number:   "; cin >> x;
} 
	while (x > 0);
	system ("pause");

_getch ();	
return 0;
}
	