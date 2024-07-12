#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,c=0;
    cin>>d;
    while(d>0)
    {
        if(d>=5)
        {
            d=d-(5);
        }
        else if(d>=4)
        {
            d=d-(4);
        }
        else if(d>=3)
        {
            d=d-(3);
        }
        else if(d>=2)
        {
            d=d-(2);
        }
        else
        {
            d=d-(1);
        }
        c++;
    }
    cout<<c;
}