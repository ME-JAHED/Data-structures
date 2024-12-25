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
int main()
{
    Node *head =NULL;
    cout<<"option 1 : insert tail"<<endl;
    int op;
    cin>>op;
    if(op==1)
    {
        int v;
        cin>>v;
        insert_at_tail(head,v);
    }
    print_link_list(head);
    return 0;
}