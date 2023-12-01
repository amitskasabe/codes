#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 2, 1, 2, 0, 2, 2, 1, 1, 0, 0};
    int N = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << arr[i];
    }
    return 0;
}