#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t2;
    cin>>s;
    cin>>t2;
    reverse(s.begin(), s.end());
    int i= s.compare(t2);
    if(i==0)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
}