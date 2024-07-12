#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s=0,r=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
            s=s+arr[i];
        }
        for(int i=0; i<n; i++){
            r=r+arr[i];
            int l=r-arr[i];
            int R=s-r;
            if(l==R){
                cout<<i<<endl;
                break;
            }
            if(i==n-1){
                cout<<-1<<endl;
            }
        }
    }
}