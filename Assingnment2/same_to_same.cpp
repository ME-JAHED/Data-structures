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
    Node* head1=NULL;
    Node* tail1=NULL;
    Node* head2=NULL;
    Node* tail2=NULL; 
    int v;
    while(true)
    {
        cin>>v;
        if(v==-1) break;
        insert_at_tail(head1,tail1,v);
        
    }
    while(true)
    {
        cin>>v;
        if(v==-1) break;
        insert_at_tail(head2,tail2,v);
    }
    int size1=size(head1);
    int size2=size(head2);
    Node* tmp1=head1;
    Node* tmp2=head2;
    bool flag=false;
   while(tmp1!=NULL&&tmp2!=NULL)
   {
    if(tmp1->val!=tmp2->val)
    {
        flag=true;
    }
    tmp1=tmp1->next;
    tmp2=tmp2->next;
   }
    if(size1==size2)
    {
        if(flag==true)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}