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
void insert_at_tail(Node* &head,Node* &tail,int val)
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
int size(Node* head)
{
    Node* tmp=head;
    int count=0;
    while(tmp!=NULL)
    {
        count++;
        tmp=tmp->next;
    }
    return count;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int v;
    while(true)
    {
        cin>>v;
        if(v==-1) break;
        insert_at_tail(head,tail,v);
    } 
    for(Node* i=head;i->next!=NULL;i=i->next)
    {
        for(Node* j=i->next;j!=NULL;j=j->next)
        {
            if(i->val<j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
    Node* tmp=head;
    int length=size(head);
    int mid=(length+1)/2;
    for(int i=0;i<mid-1;i++)
    {
        tmp=tmp->next;
    }
    if(length==1)
    {
        cout<<tmp->val<<endl;
    }
    else if(length%2==0)
    {
        cout<<tmp->val<<" "<<tmp->next->val<<endl; 
    }
    else
    {
        cout<<tmp->val<<endl;
    }
    return 0;
}