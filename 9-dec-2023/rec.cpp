#include <iostream>
using namespace std;
int fun(int v)
{
    if (v == 0)
        return 1;
    cout << v;
    cout << endl;
    fun(v - 1);
}
int factorial(int n)
{
}
int main()
{
    // fun(10);
    
}