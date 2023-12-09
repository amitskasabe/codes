#include<iostream>
using namespace std;

// {11,2,1,-99,-134,11,100}
// { }
int smallest(int a[] , int size)
{
    // int size = sizeof(a)/sizeof(a[0]);
    int min = a[0];
    for(int i = 0; i < size; i++)
    {
        if(a[i] < min) 
        {
          min = a[i];
        }
    }
    return min;
}

int main()
{
    int ar[] = {11,2,1,-99,-134,11,100};
    int size = sizeof(ar)/sizeof(ar[0]);
    cout<<smallest(ar , size)<<endl;
    return 0;
}