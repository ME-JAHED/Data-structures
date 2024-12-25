#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    //string s;
    for(int i=0;i<t;i++)
    {
        string s;
        cin>>s;
        stack<char> ch;
        for(char c:s)
        {

          if(ch.empty()==true)
          {
            ch.push(c);
          }
          else
          {
             if(c=='A'&&ch.top()=='B')
           {
             ch.pop();
             
           }
           else if(c=='B'&&ch.top()=='A')
           {
            ch.pop();
            
           }
           else
           {
            ch.push(c);
           }
          }
           
        }
        if(!ch.empty())
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}