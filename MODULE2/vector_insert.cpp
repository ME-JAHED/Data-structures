#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    vector<int> v2={10,20,30,40,50};
    v.insert(v.begin()+2,90);
    //v.insert(v.begin()+2,v2.begin(),v2.end());
    for(int c:v)
    {
        cout<<c<<" ";
    } 
    return 0;
}