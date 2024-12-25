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
int maxleaf(Node* root)
{
    
    if(root==NULL) return 0;
   
    if(root->left==NULL&&root->right==NULL)
    {
        return root->val;
    }
    else
    {
        int l=maxleaf(root->left);
        int r=maxleaf(root->right);
        return max(l,r);
    }
   
}
void minleaf(Node* root,int& mn)
{
    if(root==NULL) return ;
    if(root->left==NULL&&root->right==NULL)
    {
       mn=min(mn,root->val);
    }
    
       minleaf(root->left,mn);
       minleaf(root->right,mn);
    
}
int main()
{
    int max=INT_MIN;
    int mn=INT_MAX;
    Node* root=input_tree(); 
    minleaf(root,mn);
    cout<<maxleaf(root)<<" "<<mn;
    return 0;
}