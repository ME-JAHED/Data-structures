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
class myQueue
{
    public:
    list<int> l;
    void push(int val)
    {
       l.push_back(val);
    }
    void pop()
    {
       l.pop_front();
    }
    int front()
    {
        l.front();
    }
    int size()
    {
        l.size();
    }
    bool empty()
    {
        l.empty();
    }
};
int main()
{
    myQueue q;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        q.push(x); 
    } 
    while (!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
    if(!q.empty())
    {
        cout<<q.front()<<endl;
    }
    return 0;
}