#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    cin>>n;
    cin>>s;
    int ln=0;
    
    //cout<<s<<endl;
    for(int i=1; i<n; i++)
    {
        if(s[i]==s[i-1])
        {
            ln++;
        }
    }
    cout<<ln;
}