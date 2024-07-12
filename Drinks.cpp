#include<bits/stdc++.h>
using namespace std;
int main(){
    float n,k,r=0;
    cin>>n;
    int m=n;
    while(n--){
        cin>>k;
        r=r+k;
    }
    cout<<r/m;
}