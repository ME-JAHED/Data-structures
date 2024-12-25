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
        this->next=next;
    }
};
void delete_head(Node* &head)//o(1)
{
    Node* deletehead=head;
    head=head->next;
    delete deletehead;
}
void deletefromlinklist(Node *head,int pos)//o(n)
{
    Node *tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    Node* deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
}
int main()
{
     
    return 0;
}