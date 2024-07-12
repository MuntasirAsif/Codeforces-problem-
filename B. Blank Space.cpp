#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n--)
    {
        int s,c=0,m=0;
        cin>>s;
        int a[s];
        for(int i=0; i<s; i++){
            cin>>a[i];
        }
        for(int i=0; i<s; i++){
            if(a[i]==0){
                c++;
            }
            else{
                c=0;
            }
            m=max(m,c);
        }
        cout<<m<<endl;
        
    }
    
}