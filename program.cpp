#include <iostream>
using namespace std;
int main()
{

    /*
    
    from one to 100 print only those numbers in which if we add 4 so their addition should be an even number , else don't do anything and also print count of such numbers.
    
    */
    int count = 0;
    for(int i=1; i<=100; i++)
    {
        if((i+3) % 2 == 0)
        {
            cout<<i;
            count++;
        }
    }
    cout<<count;
    return 0;
}