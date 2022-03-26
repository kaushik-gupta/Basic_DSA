#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n,ele;
    vector<int> arr;
    cout<<"Enter number of elements: "<<endl;
    cin>>n;
    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>ele;
        arr.push_back(ele);
    }
    int small = arr[0] ;
    for(int i=0; i<arr.size(); i++)
    {
        if(small>arr[i])
        {
            small = arr[i];
        }
    }
    int flag = 0;
    while(true)
    {
        for(int i=0; i<arr.size(); i++)
        {
            if(arr[i]%small==0)
            {
                flag=1;
            }
            else
            {
                flag = 0;
                 small--;
                 break;
            }
        }
        if(flag==1)
        {
            cout<<endl<<"The HCF is: "<<small;
            break;
        }
        else
        {
            continue;
        }

    }
return 0;
}
