#include<bits/stdc++.h>
using namespace std;
bool myCompare(pair<int,int>p1, pair<int,int>p2){
    return p1.first<p2.first;
}
int main(){
    vector<pair<int,int>>v;
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        v.push_back(make_pair(x,i));
    }
    sort(v.begin(), v.end(),myCompare);

    for(int i=0; i<n; i++){
        cout<<v[i].second+1<<" ";
    }
}