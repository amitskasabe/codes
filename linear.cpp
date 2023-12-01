#include <iostream>
using namespace std;
int add(int a, int b)
{
    int c = a + b;
    // cout << c;
    return c;
}
int main()
{

    int a, b;
    for (int i = 1; i < 3; i++)
    {
        cin >> a >> b;
        cout<<add(a, b);
        // cout<<addition<<endl;
    }

    return 0;
}