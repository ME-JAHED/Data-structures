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
int size(Node* head)
{
    Node* tmp=head;
    int cout=0;
    while(tmp!=NULL)
    {
        cout++;
        tmp=tmp->next;
    }
    return cout;
}
int main()
{
    Node* head1=NULL;
    Node* tail1=NULL;
    Node* head2=NULL;
    Node* tail2=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head1,tail1,val);
    }
    while(true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head2,tail2,val);
    }
    int length1=size(head1);
    int length2=size(head2);
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
    if(length1==length2)
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