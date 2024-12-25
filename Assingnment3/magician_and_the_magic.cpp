#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char> st;
        for(char c:s)
        {
            if(st.empty()==true)
            {
                st.push(c);
            }
            else
            {
            if(c=='R'&&st.top()=='B')
            {
                st.pop();
                if(st.top()=='P')
                {
                    st.pop();
                }
                else
                {
                    st.push('P');
                }
            }
            else if(c=='B'&&st.top()=='A')
            {
                st.pop();
                if(st.top()=='P')
                {
                    st.pop();
                }
                else
                {
                    st.push('P');
                }
            }
            else if(c=='G'&&st.top()=='B')
            {
                st.pop();
                if(st.top()=='C')
                {
                    st.pop();
                }
                else
                {
                    st.push('C');
                }
            }
            else if(c=='B'&&st.top()=='G')
            {
                st.pop();
                if(st.top()=='C')
                {
                    st.pop();
                }
                else
                {
                    st.push('C');
                }
            }
            else if(c=='R'&&st.top()=='G')
            {
                st.pop();
                if(st.top()=='Y')
                {
                    st.pop();
                }
                else
                {
                    st.push('Y');
                }
            }
            else if(c=='G'&&st.top()=='R')
            {
                st.pop();
                if(st.top()=='Y')
                {
                    st.pop();
                }
                else
                {
                    st.push('Y');
                }
            }
            else 
            {
                st.push(c);
            }
            //cout<<st.top();
            }
        }
        cout<<st.top()<<endl;
    }
    return 0;
}