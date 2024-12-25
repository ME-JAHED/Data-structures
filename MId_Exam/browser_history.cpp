#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    string val;
    Node* next;
    Node* prev;
    Node(string val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_at_tail(Node* &head,Node* &tail,string val)
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
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    string address;
    while(true)
    {
       cin>>address;
       if(address=="end") break;
       insert_at_tail(head,tail,address);
    }
    int q;
    cin>>q;
    
    Node* curr;
    
    for(int i=0;i<q;i++)
    {
        string commend;
        cin>>commend;
        string add;
        if(commend=="visit")
        {
            Node* tmp=head;
            cin>>add;
          while(tmp!=NULL)
          {
            if(tmp->val==add)
            {
                curr=tmp;
                cout<<curr->val<<endl;   
            } 
            else{
                cout<<"not av"<<endl;
            }  
            tmp=tmp->next;
          } 
        }
        
    }
        
    return 0;
}