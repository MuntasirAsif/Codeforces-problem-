#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=0,c=0;
    string w;
    cin>>w;
    for(int i=0; i<w.size(); i++){
        if(w[i]<='Z' && w[i]>='A'){
            c++;
        }
        else
        a++;
    }
    if(a<c)
    {
        transform(w.begin(), w.end(), w.begin(), :: toupper);
        cout<<w<<endl;
    }
    if(a>=c)
    {
        transform(w.begin(), w.end(), w.begin(), :: tolower);
        cout<<w<<endl;
    }
}