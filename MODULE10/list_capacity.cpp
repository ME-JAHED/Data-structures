#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist={10,20,30,40};
    cout<<mylist.max_size()<<endl;
    //mylist.clear();
    mylist.resize(5);
    for(int val:mylist)
    {
        cout<<val<<endl;
    } 
    return 0;
}