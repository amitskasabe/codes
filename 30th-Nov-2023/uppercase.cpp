#include <iostream>
#include <cctype>
using namespace std;
void nextUpper(string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        str[0] = toupper(str[0]);
        if (str[i] == '.')
        {
            str[i + 1] = toupper(str[i + 1]);
        }
    }
    cout<<str<<endl;
    return;
}
int main()
{

    /*

    This is amit.i am the founder at.codeseed

    */
    // char x = toupper('x');
    // cout<<x;
    string str = "this is amit.i am the founder at.codeseed";
    string str1 = ".this is amit.i am founder";
    // you should capitalize every single sentence
    nextUpper(str);
    nextUpper(str1);
    
    return 0;
}