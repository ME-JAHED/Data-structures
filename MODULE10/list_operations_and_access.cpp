#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>mylist={30,20,40,10,10};
    mylist.remove(10);
    mylist.sort();
    mylist.sort(greater<int>());
    mylist.unique();
    mylist.reverse();
    for(int val:mylist)
    {
        cout<<val<<endl;
    } 
    
    return 0;
}