#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=INT_MAX,d=INT_MAX,e=INT_MAX;
        cin>>n;
        while(n--){
            int k=0;
            cin>>k;
            string s;            
            cin>>s;
            if(s[0]=='1' && s[1]=='1'){
                c=min(k,c);
            }
            if(s[0]=='1' && s[1]=='0'){
                d=min(k,d);
            }
            if(s[0]=='0' && s[1]=='1'){
                e=min(k,e);
            }
        }
        int l=d+e;
        if((l)<=0){
            l=INT_MAX;
        }
        int o=min(c,(l));
        if(o==INT_MAX){
            cout<<"-1"<<endl;
        }
        else{
            cout<<o<<endl;
        }
        
    }
}