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
void print_link_list(Node* head)
{
    Node* tmp=head;
    while(tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
}
void reverse_print(Node* head)
{
    if(head==NULL) return;
    reverse_print(head->next);
    cout<<head->val<<" ";   
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
    reverse_print(head);
    cout<<endl;
    print_link_list(head);
    return 0;
}