#include <iostream>
using namespace std;
void tranpose(int a[], int x, int y)
{
}
int main()
{
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            B[i][j] = A[j][i];
        }
    }
    cout << endl;
    cout << " Original" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << " Transposed" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            B[i][j] = A[j][i];
        }
    }

    for(int i=0; i < n; i++)
    {
        for(int j=0; j < m; j++)
        {
            cout<<B[i][j]<<" ";
        } cout<<endl;
    }

    return 0;
}