#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(),:: tolower);
    int si=s.size();
    for(int i=0; i<si; i++)
    {
        if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u' || s[i]=='y')
        {
            s.erase(i,1);
            i--;
        }
    }
    //transform(s.begin(), s.end(), s.begin(),:: tolower);
    si=s.size();
    for(int i=0; i<si*2-1; i+=2)
    {
         s.insert(i,".");
    }
    cout<<s;
    
}