#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,sr;
    cin>>s;
    cin>>sr;

    transform(s.begin(), s.end(), s.begin(), :: toupper);//upper case
   
    transform(sr.begin(), sr.end(), sr.begin(), :: toupper);//lower case
    
    if(s==sr)
    {
        cout<<"0"<<endl;
    }
    else if(s<sr)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<"1"<<endl;
    }
}