#include <iostream>
using namespace std; 

int main()
{
    int number, palindrom, num;
   
    cin >> number;
    palindrom = 0;
    num = number;
   
    
    do 
    {
            palindrom = palindrom * 10 + num % 10; 
            num = num / 10;    
            
    }
    while (num > 0); 
        
    if (palindrom == number)
    { 
        cout << 1 << endl;
    }
        
    else
    {
        cout << 0 << endl;
                
    }
}
