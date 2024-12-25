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
void InsertElement(Node* &head,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node* tmp=head;
    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=newNode;
}
int main()
{
    int v;
    Node*head=NULL;
    int cnt=0;
    while(true)
    {
        cin>>v;
        if(v==-1) break;
        InsertElement(head,v);
        if(v>-1)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl; 
    return 0;
}