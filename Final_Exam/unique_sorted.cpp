#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        set<int> s;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            s.insert(a);
        }
        stack<int> st;
        for(auto it=s.begin();it!=s.end();it++)
        {
            st.push(*it);
        }
        while(!st.empty())
        {
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<endl;
    } 
    return 0;
}