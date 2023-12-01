#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main()
{
    int a[] = {1, 8, 1, 1, 3, 4, 1, 1, 3, 3, 3, 3, 3, 4};
    int size = sizeof(a) / sizeof(a[0]);
    map<int, int> countMap;

    for (int i = 0; i < size; i++)
    {
        countMap[a[i]]++;
    }

    int maxElement = -1;
    int maxCount = -1;

    for (const auto &entry : countMap)
    {
        if (entry.second > maxCount)
        {
            maxElement = entry.first;
            maxCount = entry.second;
        }
    }

    cout << "Maximum occurred element: " << maxElement << " with count: " << maxCount << endl;

    return 0;
}
