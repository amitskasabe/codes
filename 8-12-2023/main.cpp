#include <iostream>
using namespace std;
int main()
{
    // data_type[r][c];
    // in case of 2 , 2
    // data_type[r][c] = {{ele1 , ele2} , {ele3,ele4}}
    int A[2][2] = {{1, 2}, {3, 4}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    int B[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    /*
    1 ,2 , 3,
    4, 5,  6,
    7, 8,  9
    */
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << B[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    //
    int m, n;
    cin >> m >> n;
    int C[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> C[i][j];
        }
    }
    cout << "\n"
         << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << C[i][j];
        }
        cout << endl;
    }

    return 0;
}