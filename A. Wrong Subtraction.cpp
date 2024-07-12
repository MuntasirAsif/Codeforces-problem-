#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n;
    cin>>a>>n;
    while(n--)
    {
        if(a%10 != 0)
        {
            a-=1;
        }
        else
        {
            a/=10;
        }
    }
    cout<<a<<endl;
}