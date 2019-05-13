// Write a C++ program that accepts two integers x and y from the kbd. Let z =2.5. Use a constant declaration
// for z and output V with 10 field width and two decimal places. Use switch statement for selection of x
// values.

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>


using namespace std;

int main ()
{
int x; int y;
const double z= 2.5;

cout << "Please input two integers x and y." << endl;
cout << "x:"; cin >> x;
cout << "y:"; cin >> y;

switch (x)
{
	 case '1': 
		if ( 1 < y < 5 )
	{
	 cout << setprecision(2);
 	 cout << setw (10);
	 cout << "V = " <<  (x*y*z);
	}
	 else 
	{
	 cout << setprecision(2);
	 cout << setw (10);
	 cout << "V = " << (x + (y/2.5));
	}
	 break;	
	 case '2':
		if ( y <= 5)
	{ 
	 cout << setprecision(2);
	 cout << setw (10);
	 cout << "V = " << abs((x-y)/z);
	}
	 else 
	{
	 cout << setprecision(2);
	 cout << setw (10);
	 cout << "V =  " << (x- sqrt( y + z));
	}
	 break;
	 default:
	 cout << setprecision(2);
	 cout << setw (10);
	 cout << "V = " << (x + z + y);
}
_getch ();
return 0;
}