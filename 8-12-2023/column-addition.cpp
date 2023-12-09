#include <iostream>

using namespace std;

int findSum(int x[][4], int rows, int cols)
{

    for (int i = 0; i < cols; i++)
    {
        int count = 0;
        for (int j = 0; j < rows; j++)
        {
            count += x[i][j];
        }

        cout << "Addition of " << rows + 1 << " : " << count << endl;
    }
    return 0;
}

int main()
{
    int a[3][4] = {{1, 2, 3, 4}, {10, 11, 12, 13}, {14, 15, 16, 17}};
    findSum(a, 3, 4);

    return 0;
}
