#include<bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    cout<<"Enter string"<<endl;
    string s;
    getline(cin, s);
    cout<<s<<endl;
    cout<<s.size()<<endl;

    for(int i=s.size(); i>-1;i--)
    {
        cout<<s[i];
    }

    return 0;
}

