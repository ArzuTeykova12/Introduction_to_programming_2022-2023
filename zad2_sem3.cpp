#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    unsigned int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        
        bool simpleNumber = true;
        int divider = 2;
        int maxDivider = sqrt(i);

        while (divider <= maxDivider)
        {
            if (i % divider == 0)
            {
                simpleNumber = false;
                break;
            }
            divider++;
        }

        if (simpleNumber && i != 1)
        {
           cout << i << " ";
        }
    }


}
