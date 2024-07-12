#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    //cout<<s<<endl;
    int si=s.size();
    for(int i=0; i<si; i++)
    {
        if(s[i]=='+')
        {
            s.erase(i,1);
            i--;
        }
    }
    //cout<<s;
    si=s.size();
    for(int i=1; i<si*2-1; i+=2)
    {
         s.insert(i,"+");
    }
    cout<<s;
    
}