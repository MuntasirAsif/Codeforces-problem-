#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n,c=0;
        cin>>n;
        string s,s1;
        cin>>s;
        for(int i=0; i<n-1; i++){
            string rem = s.substr(i,2);
            string k =  rem;
            size_t found = s.find(k);
            if (found = string::npos && s[i]!=s[i+1]){
                s1=s1+rem;
                c++;
            }
        }
        cout<<c+1<<endl;
    }
    
}