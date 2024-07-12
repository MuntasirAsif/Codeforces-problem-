#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int ln=1;
    sort(s.begin(), s.end());
    //cout<<s<<endl;
    for(int i=1; i<s.length(); i++)
    {
        if(s[i]!=s[i-1])
        {
            ln++;
        }
    }
    
    if(ln%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }
}