#include<iostream>
#include<math.h>

using namespace std;

int main()
{

    cout<<"Enter an integer: "<<endl;
    unsigned n;
    cin>>n;
    int flag = -1;
        if(n==1)
        cout<<"Its a prime number"<<endl;
    for(unsigned i=2; i<= static_cast<unsigned>(sqrt(n)); i++)     // static_cast<type>() is used to truncate the decimal value & gives integer value.
    {
        if(n%i==0)
        {
            flag = 1;
            break;
        }
    }
    if(flag==-1)
        cout<<"Its a prime number. "<<endl;
    if(flag==1)
        cout<<"Its not a prime number. "<<endl;
return 0;
}

