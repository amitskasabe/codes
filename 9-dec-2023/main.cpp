#include <iostream>
using namespace std;
int main()
{
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int count = 0;
    int c = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
            {
                // continue;
                c += A[i][j];
            }
        }
    }

    // cout << count << endl;
    cout << c;
}
/*

1 2 3 = 1 : 6
4 5 6 = 2 : 15
7 8 9 = 3:24
12 15 18

*/