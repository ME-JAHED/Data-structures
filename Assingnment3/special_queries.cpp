#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<string> name;
     int q;
     cin>>q;
    for(int i=0;i<q;i++)
    {
        int x;
       cin>>x;
       if(x==0)
       {
        string s;
        cin>>s;
        name.push(s);
       }
       else if(x==1)
       {
        if(!name.empty())
        {
            cout<<name.front()<<endl;
            name.pop();
        }
        else
        {
            cout<<"Invalid"<<endl;
        }
       }
    }
    return 0;
}