#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2,s3;
    cin>>s1>>s2;
    for(int i=0; i<s1.size(); i++){
        if(s1[i]==s2[i]){
            s3.append("0");
        }
        else{
            s3.append("1");
        }
    }
    cout<<s3;
}