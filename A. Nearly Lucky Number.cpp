#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int c,b;
    cin>>str;
    for(int i=0; i<str.size(); i++)
    {
        if(str[i]=='4' || str[i]=='7')
        {
            c++;
        }
    }
    if(c==0)
        {
            cout<<"NO";
            return 0;
        }
    while(c>0)
        {
            b=c%10;
            if(b != 4 && b != 7 )
            {
                cout<<"NO";
                return 0;
            }
            else
                c/=10;
        }
        
    cout<<"YES";
    return 0;
}