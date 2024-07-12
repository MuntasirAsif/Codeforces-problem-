#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cap=0,max=0;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        cap=cap-a+b;
        if(cap>max){
            max=cap;
        }
    }
    cout<<max;
}