#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                if(i==(n/2)){
                    cout<<"X";
                }else{
                    cout<<"\\";
                }
            }else if(((n-i)==j) ||((n-j)==i)){
                if(i!=(n/2)){
                    cout<<"/";
                }
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}