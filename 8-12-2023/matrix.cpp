#include <iostream>
using namespace std;
int main()
{
    int a[2][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}};
    int count = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == 1 && j == 0)
            {
                break;
            }
            count += a[i][j];
        }
    }
    cout << count;
}