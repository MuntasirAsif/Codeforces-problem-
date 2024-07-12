#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,c=0;
    cin>>num;
    num++;
    while(true){
        string s1;
        s1 = to_string(num);
        sort(s1.begin(), s1.end());
        for(int i=0; i<4; i++){
            if(s1[i]==s1[i-1]){
                num++;
                break;
            }
            else{
                c++;
            }
        }
        if(c==4){
            break;
        }
        else{
            c=0;
        }
        
    }
    cout<<num;
}