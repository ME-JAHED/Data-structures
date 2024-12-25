#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==i&&j+i==n+1)
            {
                cout<<"x";
            }
            else if(j==i)
            {
                cout<<"\\";
            }
            else if(j+i==n+1)
            {
                cout<<"/";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    } 
    return 0;
}