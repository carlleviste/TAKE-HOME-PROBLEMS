// Create a program that will “count” numbers, separated by commas, up to 10. When it
// reaches 10, count by 2s until you reach 30. See the sample output below:
#include <iostream>
#include <conio.h>


using namespace std;

int main ()
{
 int count;
 cout << "Counting...";
 for(count=1; count <=10; count++)
	{
	cout << count << ",";
	}
 for(count > 10; count <=30; count++)
	{
 if (count % 2 == 0)
 cout << count << ",";
	}
cout << endl;

_getch();
return 0;
}