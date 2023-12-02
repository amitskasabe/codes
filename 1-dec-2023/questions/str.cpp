#include <iostream>
using namespace std;
int main()
{
    string s1 = "code";
    string s2 = "seed";
    // codeseed
    // s.substr(start , how)
    string s3 = s1 + s2;
    // cout<<s3.length()<<endl;
    for (int i = 0; i < s3.length(); i++)
    {
        // cout << s3[i];
    }
    cout << s3.substr(5, 3);

    // s3 -  ee
    /*
    
    codeseed 

    // you are an awesome person 

    // you , an , son , some 

    /*  javascript /*

    thepersonwasoutsidebar
    / son 
    was 

    
    */
    return 0;
}