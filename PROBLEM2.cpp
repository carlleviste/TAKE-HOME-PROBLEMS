
//  Write a program that computes a customer’s water bill. The bill includes a P35 water demand
// charge plus a consumption(use) charge of P1.10 for every gallon used. Consumption is figured from meter
// readings in gallons taken recently and during the previous month. If the customer’s unpaid balance is
// greater than 0, a P20 late charge is assessed as well.

#include <iostream>
#include <conio.h>

 using namespace std;

 int main()
 {
	double g , b ;
	cout << "How many gallons were used this month? "; cin >> g;
	cout << " " << endl;
	cout << "How much is your unpaid balance? P "; cin >> b;
	cout << " " << endl;

if (g > 0)
	cout << "Your total water bill is: P " << 55 + (1.10 * g);
else
	cout << "Your total water bill is: P " << 35 + (1.10 * g);


	getch ();
	return 0;
 }