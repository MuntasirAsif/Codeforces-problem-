#include<bits/stdc++.h>
using namespace std;
int way(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return way(n-1)+way(n-2);
}
int main(){
    cout<<way(8);
}