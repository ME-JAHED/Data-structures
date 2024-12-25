#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* input_tree()
{
    int val;
    cin>>val;
    Node* root;
    if(val==-1) root=NULL;
    else root=new Node(val);
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();
        int l,r;
        cin>>l>>r;
        Node* myLeft;
        Node* myRight;
        if(l==-1) myLeft=NULL;
        else myLeft=new Node(l);
        if(r==-1) myRight=NULL;
        else myRight=new Node(r);

        p->left=myLeft;
        p->right=myRight;

        if(p->left)
        {
            q.push(p->left);
        }
        if(p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}
void levelNode(Node *root,int val)
{
    bool flag=false;
    queue<pair<Node*,int>> q;
    if(root) q.push({root,0});
    while(!q.empty())
    {
        pair<Node*,int> f= q.front();
        q.pop();
        Node* p=f.first;
        int level=f.second;
        if(val==level)
        {
            cout<<p->val<<" "; 
            flag=true;   
        } 
        
        if(p->left) q.push({p->left,level+1});
        if(p->right) q.push({p->right,level+1});
    }
    if(flag==false)
    {
        cout<<"Invalid"<<endl;
    }
    
}
int main()
{
    Node* root=input_tree();
    int n;
    cin>>n;
    levelNode(root,n);
    return 0;
}
