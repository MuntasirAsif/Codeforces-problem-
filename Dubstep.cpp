#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int sp =0;
    getline(cin, s);
    for(int i=0; i<s.size();i++){
        if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B'){
            i+=2;
            if(sp!=0){
                cout<<' ';
            }
        }else{
            cout<<s[i];
            sp++;
        }
    }
    return 0;
}