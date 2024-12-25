#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_tail(Node *&head,int v)
{
    Node* newnode=new Node(v);
     if(head==NULL)
    {
        head=newnode;
        return;
    }
    Node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
}
void print_link_list(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
void insert_at_position(Node* head,int pos,int v)
{
    Node* new_node=new Node(v);
    Node* tmp=head;
    for(int i=0;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    new_node->next=tmp->next;
    tmp->next=new_node;
}
void insert_at_head(Node* head,int v)
{
    Node* new_head=new Node(v);
    new_head->next=head;
    head=new_head;
}
void deleteHead(Node* &head)
{
    Node* Deletehead=head;
    head=head->next;
    delete Deletehead;
}
int main()
{
    Node *head =NULL;
    cout<<"option 1 : insert tail"<<endl;
   while(true)
   {
     int op;
    cin>>op;
    if(op==1)
    {
        int v;
        cin>>v;
        insert_at_tail(head,v);
    }
    else if(op==2)
    {
        print_link_list(head);
    }
    else if(op==3)
    {
        int pos,v;
        cin>>pos>>v;
        insert_at_position(head,pos,v);
    }
    else if(op==0)
    {
        int v;
        cin>>v;
        insert_at_head(head,v);
    }
    else if(op==4)
    {
        break;
    }
    else if(op==5)
    {
        deleteHead(head);
    }
   }
    return 0;
}