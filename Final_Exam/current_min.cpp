#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        pq.push(a);
    } 
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        if(x==0)
        {
            int num;
            cin>>num;
            pq.push(num);
            if(pq.empty())
            {
                cout<<"Empty";
            }
            else
            {
                cout<<pq.top();
            }
        }
        else if(x==1)
        {
           if(pq.empty())
            {
                cout<<"Empty";
            }
            else
            {
                cout<<pq.top();
            }
        }
        else if(x==2)
        {
            if(!pq.empty())
            {
                pq.pop();
            }
            if(pq.empty())
            {
                cout<<"Empty";
            }
            else
            {
                cout<<pq.top();
            }
        }
        cout<<endl;
    }
    return 0;
}