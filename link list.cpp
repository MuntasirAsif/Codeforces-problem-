#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node* next;
};
int main()
{
    node* head=new node;
    node* first=new node;
    node* second=new node;
    head->next=first;
    first->next=second;
    second->next=NULL;
    head->data=1;
    first->data=2;
    second->data=3;
    cout<<first->data;
    cout<<second->data;
    cout<<head->data;
    return 0;
}