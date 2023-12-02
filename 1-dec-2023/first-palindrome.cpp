#include <iostream>
using namespace std;
/* given a function you've to return first string which is palindrom in array of string

string s[] = {"abc" , "abab" , "bab" , "abcba" , "bab"}
s2 = {"aba" , "abcda" , "aca"}
s3 = {"ad" , "abd" , "abcd"}
*/
int firstPlindrom(string str[], int size)
{
    // {"abc", "abab", "bab", "abcba", "bab"}

    for (int i = 0; i < size; i++)
    {
        bool isPalindrom = true;
        int start = 0;
        int end = str[i].length() - 1;
        while (start < end)
        {
            if (str[i][start] != str[i][end])
            {
                isPalindrom = false;
                break;
            }
            start++;
            end--;
        }
        if (isPalindrom)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    string s[] = {"abc", "ababs", "nayan", "abcba", "bab"};
    string s2[] = {"nayanw", "nitinw", "aba"};
    int size = sizeof(s2) / sizeof(s2[0]);
    // int n;
    // int arr[n];
    // for(int i=0; i<n; i++)
    // {
    //     cin>>arr[i];
    // }
    cout << firstPlindrom(s2, size);
}