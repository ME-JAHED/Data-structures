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
void print_normal(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}
void print_reverse(Node* tail)
{
    Node* tmp=tail;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}
void insert_at_head(Node* &head,Node* &tail,int val)//o(1)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}
void insert_at_tail(Node* &head,Node* &tail,int val)//o(1)
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
int size(Node* head)
{
    Node* tmp=head;
    int cnt=0;
    while(tmp!=NULL)
    {
        cnt++;
        tmp=tmp->next;
    }
    return cnt;
}
void delete_element(Node* head,int pos)//o(n)
{
    Node* tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    Node* deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete deleteNode;
}
void delete_tail(Node* &head,Node* &tail)//o(1)
{
    Node* deleteNode=tail;
    tail=tail->prev;
    delete deleteNode;
    if(tail==NULL)
    {
        head==NULL;
        return;
    }
    tail->next=NULL;
}
void delete_head(Node* &head,Node* &tail)//o(1)
{
    Node* deleteNode=head;
    head=head->next;
    delete deleteNode;
    if(head==NULL)
    {
        tail=NULL;
        return;
    }
    head->prev=NULL;
}
int main()
{
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* tail=c;


     head->next=a;
     a->prev=head;
     a->next=b;
     b->prev=a;
     b->next=c;
     c->prev=b;
     
     int pos,val;
     cin>>pos>>val;
     
     if(pos>size(head))
     {
        cout<<"Invalid"<<endl;
     }
     else if(pos==0)
     {
        insert_at_head(head,tail,val);
     }
     else if(pos==size(head))
     {
        insert_at_tail(head,tail,val);
     }

     //for delete
     if(pos>=size(head))
     {
        cout<<"Invalide"<<endl;
     }
     else if(pos==0)
     {
        delete_head(head,tail);
     }
     else if(pos==size(head)-1)
     {
        delete_tail(head,tail);
     }
     else
     {
        delete_element(head,pos);
     }

     print_normal(head);
     print_reverse(tail);
    return 0;
}