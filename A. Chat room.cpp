#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s2="asgkp";
    string s1="hello";
    cin>>s;
    int h=0,e=0,l=0,o=0,f=0,r=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='h')
        {
            h++;
        }
        if(s[i]=='e')
        {
            e++;
        }
        if(s[i]=='l')
        {
            l++;
        }
        if(s[i]=='o')
        {
            o++;
        }
    }
    if(h>=1 && e>=1 && l>=2 && o>=1) 
    {
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!='h' && s[i]!='e' && s[i]!='l' && s[i]!='o')
            {
                s.erase(i,1);
                i--;
            }
        }
    }
    r = s.find("h");
    s2[0]=s[r];
    s.erase(0,(r+1));

    r= s.find("e");
    s2[1]=s[r];
    s.erase(0,(r+1));


    r= s.find("l");
    s2[2]=s[r];
    s.erase(0,(r+1));


    r= s.find("l");
    s2[3]=s[r];
    s.erase(0,(r+1));


    r= s.find("o");
    s2[4]=s[r];
    s.erase(0,(r+1));

    int x = s2.compare(s1);

    if(x==0)
    {
        cout<<"YES";
    }
    else
        cout<<"NO";
    
}