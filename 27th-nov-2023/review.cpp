#include <iostream>
using namespace std;
int main()
{
    string userNames[] = {"pratiksha", "sanika", "abhishek"};
    int ratings[] = {5, 5, 5};
    string review[] = {"best", "worst", "average"};
    int size = sizeof(userNames) / sizeof(userNames[0]);
    for (int i = 0; i < size; i++)
    {
        cout << userNames[i] << " " << ratings[i] << " " << review[i] << " " << endl;
    }
}