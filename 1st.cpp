#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[2]={10,20};

    int *a;
    int *b;
    a=&arr[0];
    b=&arr[1];
    int c = b-a;
    cout<<c;
}