#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s.find("H")<s.size() || s.find("Q")<s.size() || s.find("9")<s.size()){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}