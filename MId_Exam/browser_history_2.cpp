#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<string> address;
    string val;
    while(true)
    {
        cin>>val;
        if(val=="end") break;
        address.push_back(val);
    } 
    list<string>::iterator current;
    int q;
    cin>>q;
    string comm;
    while(q--)
    {
        cin>>comm;
        string addre;
        if(comm=="visit")
        {
            cin>>addre;
            auto it=find(address.begin(),address.end(),addre);
            if(it!=address.end())
            {
                current=it;
                cout<<*current<<endl;
                
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }
         if(comm=="next")
        {
            if(current!=address.end()&&current==address.begin())
            {
                current=next(current,1);
                cout<<*current<<endl;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }
          if(comm=="prev")
        {
            if(current!=address.begin())
            {
                current=next(current,-1);
                cout<<*current<<endl;
            }
            else
            {
                cout<<"Not Available"<<endl;
            }
        }
        
    }    
    return 0;
}