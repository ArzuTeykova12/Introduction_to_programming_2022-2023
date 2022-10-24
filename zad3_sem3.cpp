#include <iostream>
using namespace std;

int main()
{
    unsigned a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        int n = i / 100;
        int m = i % 10;
        int z = i / 10;
        int p = z % 10;
        if (n != m && n != p && m != p)
        {
            cout << i << " ";
        }
    }
}
