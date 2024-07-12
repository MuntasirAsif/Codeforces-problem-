#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << fixed << setprecision(25);
    int t;
    cin>>t;
    while(t--){
        long long n,m=0,c=0;
        cin>>n;
        long long a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            if(a[i]==0){
                continue;
            }
            for(int j=0; j<n; j++){
                if(i==j){
                    continue;
                }
                if((a[i]*a[j])>m){
                m=a[i]*a[j];
            }
            }
        }
        cout<<m<<endl;
    }
}