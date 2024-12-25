#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
    if(tail==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    newNode->prev=tail;
    tail=tail->next;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head,tail,val);
    } 
    Node *i=head;
    Node* j=tail;
    bool flag=false;
    while (i!=j&&i->next!=j)
    {
        if(i->val!=j->val)
        {
            flag=true;
        }
        i=i->next;
        j=j->prev;
    }
    if(i->val!=j->val)
    {
        cout<<"NO"<<endl;
    }
    else if(flag==true)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    
    return 0;
}