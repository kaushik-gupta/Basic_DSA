#include<iostream>
#include<string>

using namespace std;

int main()
{
    // Types of ways to declare strings:
   /* string s;
    cout<<"Enter string"<<endl;  // Space not allowed in string input. Input without space.
    cin>>s;
    cout<<"First string: "<<s<<endl;

    string s1(5, 'k');
    cout<<"Second string: "<<s1<<endl;
    */
    string s2;
    cout<<"Enter string:"<<endl;
    getline(cin, s2);   // Input with space.
    cout<<"Third string:"<<s2<<endl;

    // appending two strings:

    string s3, s4;
    s3 = "fam";
    s4 = "ily";
    s3.append(s4);
    cout<<"appended string:  "<<s3<<endl;
    return 0;
}
