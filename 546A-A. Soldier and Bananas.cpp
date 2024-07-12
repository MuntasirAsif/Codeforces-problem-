#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int k,n,w;
    std::cin>>k>>n>>w;
    int l=0;
    for(int i=1; i<=w; i++)
    {
        l=l+i*k;
    }
    l=l-n;
    if(l<=0)
    {
        cout<<"0";
    }
    else
         std::cout<<l;
}