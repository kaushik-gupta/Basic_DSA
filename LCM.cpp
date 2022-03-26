#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int a,b, lcm = 0;
    cout<<"Enter two integers: "<<endl;
    cin>>a>>b;
    if(a>b)
    {
        int i = a;
        while(true)
        {
            if(i%a==0)
            {
                if(i%b==0)
                {
                    lcm = i;
                    break;
                }
            }
           i++;
        }
    }

    if(a<b)
    {
        int i = b;
        while(true)
        {
            if(i%a==0)
            {
                if(i%b==0)
                {
                    lcm = i;
                    break;
                }
            }
           i++;
        }
    }
    cout<<endl<<"The LCM of two integers: "<<lcm;
    return 0;

}
