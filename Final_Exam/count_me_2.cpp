#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int> mp;
        int max=INT_MIN;
        int max2=INT_MIN;
        int b;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            mp[a]++;
            if(mp[a]>max)
            {
                max=mp[a];
                b=a;
            }
            else if(mp[a]==max&&a>b)
            {
                b=a;
            }
        }
       // int max=INT_MIN;
        //int b;
        //for(auto i:mp)
        //{
          //  if(i.second>max)
            //{
              //  max=i.second;
                //b=i.first;
            //}
        //}
        cout<<b<<" "<<max<<endl;
    } 
    return 0;
}