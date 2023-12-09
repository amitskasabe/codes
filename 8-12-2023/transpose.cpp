#include <iostream>
using namespace std;
int main()
{
    // there is a 2d array
    /*
    1 2 3
    4 5 6
    7 8 9
    ------
    1 4 7
    2 5 8
    3 6 9

    A[n][m] ={{1 2 3},{4 5 6},{7 8 9}
    B[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            B[i][j] = A[j][i];
        }
    }


    */
    int n, m;
    cin >> n >> m;
    int A[n][m];
    int B[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    /*
    1 2 3
    4 5 6
    7 8 9
    */
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            B[i][j] = A[j][i];
            // B[0][1] = A[1][0]
        }
    }
    cout << " Transposed Matrix" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
/*


2 11 8
9 23 1
1 22 2



*/