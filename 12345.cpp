#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#ifdef LOKAL
#include "DEBUG_TEMPLATE.h"
#else
#define HERE
#define debug(args...)
#endif
const int N = 2e5 + 5;
typedef pair<int, int> pii;


void TEST_CASES()
{
    int n;cin>>n;
    int a,b;cin>>a>>b;
    vector<int>v(n);
    for(auto &i:v)cin>>i;
    int cnt=0;
    int i,j,k;
    sort(v.begin(),v.end());
    debug(v);
    for(i=0;i<v.size();i++){
        j=i+1;
        k=j;
        while(v[i]+v[j]<a){
            j++;
            k=j;
        }
        while(v[i]+v[j]<=b && j<n){
            j++;
        }
        debug(i,j,k);
        cnt+=j-k;
    }
    cout<<cnt<<endl;
}

int32_t main()
{
#ifndef LOKAL
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
#endif
    int t = 1;
     cin>>t;
    while (t--)
    {
        TEST_CASES();
    }
}