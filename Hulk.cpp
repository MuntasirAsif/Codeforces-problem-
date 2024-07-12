#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%2!=0 && i==1 && n==i){
            cout<<"I hate it ";
        }
        else if(i%2!=0 && i==1){
            cout<<"I hate ";
        }
        else if(i%2!=0 && n==i){
            cout<<"that I hate it";
        }
        else if(i%2!=0 && i!=1){
            cout<<"that I hate ";
        }
        else if(i%2==0 && n==i){
            cout<<"that I love it";
        }
        else{
            cout<<"that I love ";
        }
    }
}