#include <iostream>
using namespace std;
int main()
{
    int a[3][5] = {{1, 2, 3, 5, 5}, {4, 5, 6, 5, 5}, {7, 8, 9, 5, 5}};
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            count += a[i][j];
        }
        cout << endl;
    }

    int a2[5][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}, {12, 13, 14}};
    for(int i=0; i<5; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout<<a2[i][j]<<" ";
        } cout<<endl;

    }
    return 0;
}