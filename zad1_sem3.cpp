#include <iostream>
using namespace std;

int main()
{
   unsigned int number;
   cin >> number;

   int numberyear = 0;
   int year;
   for (int i = 0; i < number; i++)
   {
	  
	   cin >> year;

	   if ((((year % 4) == 0) && ((year % 100) != 0) || ((year % 400) == 0)))
	   {

		   numberyear++;

	   }
   }


   cout << numberyear;
}
