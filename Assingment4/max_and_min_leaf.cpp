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
void maxLeaf(Node* root,int* mx)
{
    if(root==NULL) return;
    if(root->left==NULL&&root->right==NULL)
    {
        *mx=max(*mx,root->val);
       
    }
     maxLeaf(root->left,mx);
     maxLeaf(root->right,mx);
}
void minLeaf(Node* root,int* mn)
{
    if(root==NULL) return;
    if(root->left==NULL&&root->right==NULL)
    {
        *mn=min(*mn,root->val);
    }
    minLeaf(root->left,mn);
    minLeaf(root->right,mn);
    
}
int main()
{
    int mx=INT_MIN;
    int mn=INT_MAX;
    Node* root=input_tree();
    maxLeaf(root,&mx); 
    minLeaf(root,&mn);

    cout<<mx<<" "<<mn;
    return 0;
}