// Write a program that calculates a customer’s monthly bill. It should ask which package the customer has
// purchased and how many hours were used. It should then display the total amount due.

#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	char plan;
	int hours;

cout << "PLDT Monthly Bill Calculator" << endl;
cout << " " << endl;

cout << "Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr." << endl;
cout << "Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr." << endl;
cout << "Package C: For P1995/mo of unlimited access is provided."<< endl;
cout << " " << endl;

cout << "Please input your chosen internet subscription package." << endl; 
cout << "Package:       "; cin >> plan;
cout << "Please input the number of hours used." << endl;
cout << "Hours of Usage:"; cin >> hours;

switch (plan)
{
case 'A': case 'a':
     cout << "Your Monthly Internet bill is: " << (995 + ((hours-10)*20)) << "php";
break;

case 'B': case 'b':
	cout << "Your Monthly Internet bill is: " << (1495 + ((hours-20)*10)) << "php";
break;

case 'C': case 'c':
	cout << "Your Monthly Internet bill is: " << 1995 << "php";
break;

default:
	cout << "" << endl;
	cout << "Invalid input. Please enter A, B or C only for the Package Subscription.";

}
_getch();
return 0;
}