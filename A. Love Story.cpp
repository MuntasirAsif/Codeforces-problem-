#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        string s;
        string s1="codeforces";
        int c=0;
        cin>>s;
        for(int i=0; i<s.size(); i++){
            if(s[i]!=s1[i]){
                c++;
            }
        }
        cout<<c<<endl;
    }
    
}