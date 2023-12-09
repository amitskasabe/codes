#include <iostream>
using namespace std;
int main()
{
    int A[2][3] = {{10, 20, 30}, {4, 5, 6}};
    /*
    1 2 3 = 6
    4 5 6
    */
    int count = 0;
    int c = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i > 0)
            {
                break;
            }
            count += A[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                // continue;
                c += A[i][j];
            }
        }
    }

    // cout << count << endl;
    cout << c;
}