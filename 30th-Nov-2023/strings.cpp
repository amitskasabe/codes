#include <iostream>
using namespace std;
string removeSpaces(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            s[i] = '-';
        }
    }
    return s;
}
int main()
{
    /*
    string is collection of characters
    */
    /*

    there's a string in which you've a message , you are awesome
    your task is to replace space with dash

    your output should look like you-are-awesome

    case 1: amit is founder
    op - amit-is-founder

    case 2: roses are red
    op - roses-are-red

    */
    string str[] = {"you are awesome" , "amit is founder" , "roses are red",  "we are codeseed"};
    int size = sizeof(str) / sizeof(str[0]);
    for(int i = 0; i < size; i++)
    {
        cout<<removeSpaces(str[i]);
        cout<<endl;
    }
    
    return 0;
}