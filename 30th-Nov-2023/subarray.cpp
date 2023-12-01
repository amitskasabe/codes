#include <iostream>
using namespace std;
int main()
{
    int arr[] = {-1, 4, 7, 2};

    int end = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < end; i++)
    {
        for (int j = i; j < end; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}