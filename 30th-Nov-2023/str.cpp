#include <iostream>

using namespace std;
int main()
{
    /*string s = "Hello World! ";
    cout << s.length() << endl;
    cout << s.size() << endl;
    cout << s.substr(0, 3) << endl;
    cout << s.find("World") << endl;
    cout << s.replace(0, 5, "java");

    cout << s.append("World") << endl;
    string s2 = " Hello, ";
    s2 = s2.append("Amit");
    cout << s2 << endl;

    cout << s.compare(s2);

    string num = "21";
    int age = stoi(num);
    cout << endl;
    cout << sizeof(age) << endl;*/

    string phrase = ".this.is";
    cout << phrase.length() << endl;
    string newStr = "";

    for (int i = phrase.length(); i >= 0; i--)
    {
        if (phrase[i] == '.')
        {
            newStr = newStr.append(phrase.substr(i + 1, phrase.length()));
        } 
    }

    cout << newStr << endl;

    return 0;
}