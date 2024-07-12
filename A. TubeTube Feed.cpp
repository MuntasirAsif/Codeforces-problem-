#include<bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin>>q;
    while(q--){
        int n,t,k=0,m=0,c=0;
        cin>>n>>t;
        int a[n],e[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>e[i];
        }
        for(int i=0; i<n; i++){
            if(a[i]<=t){
                 if(k<e[i]){
                    k=e[i];
                    m=i;
                    c++;
                 }
            }
            t--;
        }
        if(c>0){
            cout<<m+1<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}