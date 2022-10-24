#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int rezultat = 0;

	for (int i = 0; i < n; i++)
	{
		int number;
		cin >> number;

		if (number % 2 == 0)
		{
			do
			{
					rezultat = number * 2;
					cout << rezultat << endl;
			} 
			while (number % 2 != 0);
		}
	}
	
}
