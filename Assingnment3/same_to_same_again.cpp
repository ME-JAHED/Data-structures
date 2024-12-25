#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> a;
    queue<int> b;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push(x);
    }
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        b.push(x);
    }
    bool flag=true;
    if(a.size()==b.size())
    {
        while(!a.empty())
        {
            if(a.top()!=b.front())
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