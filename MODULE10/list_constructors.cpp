#include<bits/stdc++.h>
using namespace std;
int main()
{
    //list<int> mylist(10,5);
   // list<int> list2={1,2,3,4,5};
    //list<int> mylist(list2);//o(n)
    //int a[5]={1,2,3,4,5};
    //list<int> mylist(a,a+5);
    vector<int> v={10,20,30};
    list<int> mylist(v.begin(),v.end());
   // for(auto it=mylist.begin();it!=mylist.end();it++)
    //{
      //  cout<<* it<<endl;
    //}
    for(int val:mylist)
    {
        cout<<val<<endl;
    } 
    return 0;
}