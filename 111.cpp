#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b,d=0;
        cin>>n>>b;
        if(b!=2 && (n-b)>=0 )
        {
            if((n-b)<=3 && (n-b)>0 && (n-b)%2 !=0)
                {
                    cout<<"NO"<<endl;
                }
            else
            {
                 cout<<"Yes"<<endl;
            }
           
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}