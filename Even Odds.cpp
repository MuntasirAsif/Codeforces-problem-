#include<bits/stdc++.h>
using namespace std;
int main(){
    int mood;
    ofstream file;
    int n,j=0,pos;
    cin>>n>>pos;
    int a[n];
    if(mood==2){
        for(int i=2; i<=n; i+=2){
            a[j]=i;
            j++;
        }
        if(pos>=n/2){
            pos=(n/2)-1;
        }
    }
    else{
        for(int i=1; i<=n; i+=2){
            a[j]=i;
            j++;
        }
    }
    if(mood==1){
        mood=2;
        ofstream out("Even-odd.txt");
        out<<mood;
        file.close();
    }
    else{
        mood=1;
        ofstream out("Even-odd.txt");
        out<<mood;
        file.close();
    }
    cout<<a[pos-1]<<endl;
}