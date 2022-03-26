#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{

    vector<int> a;
    int n,ele,hcf;
    int mul=1;
    cout<<"*****---LCM---****"<<endl;
    cout<<"Enter size: "<<endl;
    cin>>n;
    cout<<"Enter elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>ele;
        mul = mul*ele;
        a.push_back(ele);
    }
    int small = a[0];
    for(int i=0; i<n; i++)
    {
        if(small>a[i])
        {
            small= a[i];
        }
    }
    int flag = 0;
    while(true)
    {
        for(int i=0; i<a.size(); i++)
        {
            if(a[i]%small == 0)
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
        {
          hcf = small;
          break;
        }
        else
        {
          small--;
          continue;
        }
    }
    int lcm = mul/hcf;
    cout<<" The LCM is: "<<lcm<<endl;
return 0;
}
