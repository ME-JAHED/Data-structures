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
void Insert_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}
void insert_at_head(Node* &head,int v)
{
    Node* new_head=new Node(v);
    new_head->next=head;
    head=new_head;
}
int main()
{
    int q;
    cin>>q;
    Node* head=NULL;
    Node* tail=NULL;
    for(int i=0;i<q;i++)
    {
        int x,v;
        cin>>x>>v;
       if(x==0)
       {
        insert_at_head(head,v);
        if(tail==NULL)
        {
            tail=head;
        }
       }
       else if(x==1)
       {
        Insert_tail(head,tail,v);
       }
       cout<<head->val<<" "<<tail->val<<endl;
    } 
    return 0;
}