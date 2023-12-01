#include <iostream>
using namespace std;

bool isSored(int ar[], int n)
{
    // int a[] = {0,0,0,1};
    bool sor = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (ar[i] > ar[j])
            {
                sor = false;
            }
        }
    }

    return sor;
}

bool duplicates(int a[], int n)
{
    bool duplicate = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                duplicate = true;
            }
        }
    }
    return duplicate;
}
void twoSum(int a[], int target, int n)
{
    /*
    thre's an array in which there are 10 elements , you've to print all the elements whose addition is divisible by evenly by 2, if you don't find such elements , don't do anything else

arr = {1,2,-1,20,-100 , 2 , 3 , 4 , 9 , 10};
    */
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] + a[j] % 2 == 0)
            {
                cout << a[i] << "+" << a[j] << " =" << target << endl;
                return;
            }
        }
    }
    /*
    /*





2 . sort an array


*/
}
int main()
{

    int fav[] = {7, 15, 3, 18, 6, 12, 8, 5, 10, 14};
    int n = sizeof(fav) / sizeof(fav[0]);
    twoSum(fav, 25, n);

    return 0;
}