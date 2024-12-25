#include<bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    stack<char> st;
    for(char c:s)
    {
        if(c=='A'||c=='B')
        {
            st.push(c);
        }
        else
        {
            if(st.empty())
            {
                return false;
            }
            else
            {
                if(c=='A'&&st.top()=='B')
                {
                    st.pop();
                }
                else if(c=='B'&&st.top()=='A')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }
    if(!st.empty()) return false;
    else return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    string s;
    cin>>s;
    bool str=isValid(s); 
    cout<<str;
    }
    return 0;
}