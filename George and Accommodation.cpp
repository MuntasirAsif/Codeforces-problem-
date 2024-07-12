#include<bits/stdc++.h>
using namespace  std;
int main(){
    int n,c=0;
    cin>>n;
    while(n--){
        int p,q;
        cin>>p>>q;
        if(q-2>=p){
            c++;
        }
    }
    cout<<c;
}