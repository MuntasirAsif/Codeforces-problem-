#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    cin>>n;
    string s1,s2;
    while(n--){
        cin>>s1;
        if(s1!=s2){
            c++;
        }
        s2=s1;
    }
    cout<<c;
}