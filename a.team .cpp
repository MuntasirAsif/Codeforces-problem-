#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s=0;
    cin>>n;
    while (n--)
    {
        int a[3];
        int c=0;
        for(int i=0; i<3; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<3; i++){
            if(a[i]==1){
                c++;
            }
        }
        if(c>=2){
            s++;
        }
    }
    cout<<s<<endl;
    
}