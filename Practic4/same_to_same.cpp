#include<bits/stdc++.h>
using namespace std;

class myStack
{
    public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
      l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
       return l.size();
    }
    bool empty()
    {
       if(l.size()==0)return true;
       else return false;
    }
};
int main()
{
    int n;
    cin>>n;
    myStack a;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push(x);
    } 
    int m;
    cin>>m;
    myStack b;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        b.push(x);
    }
    bool flag=true;
    if(a.size()==b.size())
    {
        while(!a.empty()&&!b.empty())
        {
           if(a.top()!=b.top())
           {
            flag=false;
           }
           a.pop();
           b.pop(); 
        }
        if(flag==true) 
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}