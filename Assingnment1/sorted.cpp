#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     for(int test=0;test<t;test++)
     {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int flag=false;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    flag=true;  
                }
            }
            
            
        }
        
        if(flag==true)
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