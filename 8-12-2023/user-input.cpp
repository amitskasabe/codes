#include <iostream>
using namespace std;
int main()
{

    int a[2][2];
    cout << " Enter your only element";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << " The element you entered was:";
    cout << a[0][0];
    cout << a[0][1]; 
    cout << a[1][0];
    cout << a[1][1];
    return 0;
}