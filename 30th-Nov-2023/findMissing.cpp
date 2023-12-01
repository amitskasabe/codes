#include <iostream>
using namespace std;
int main()
{
    int array[] = {1, 2, 3, 5};
    int actual = 0;
    int eastimateSum = 0;
    int n = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < n; i++)
    {
        actual += array[i];
    }

    for (int j = 1; j <= n+1; j++)
    {
        eastimateSum += j;
    }
    cout<<eastimateSum<<endl;
    cout<<actual<<endl;
    cout<< eastimateSum - actual;
    return 0;
}