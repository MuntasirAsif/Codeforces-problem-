#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, h,c=0;
    cin>>n>>h;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        if(a[i]>h)
        {
            c+=2;
        }
        else
            c++;
    }
        cout<<c;

}