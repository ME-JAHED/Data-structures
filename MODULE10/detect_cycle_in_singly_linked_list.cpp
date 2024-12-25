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
int main()
{
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* tail=c;


     head->next=a;
     
     a->next=b;
     
     b->next=c;
     c->next=head;

     Node* slow=head;
     Node* fast=head;
     bool flag=false;
     while(fast!=NULL&&fast->next!=NULL)//o(n);
     {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            flag=true;
            break;
        }
     }
     if(flag==true)
     {
        cout<<"cycle"<<endl;
     }
     else
     {
        cout<<"not cycle"<<endl;
     }
    return 0;
}