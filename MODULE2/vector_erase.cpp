#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    //v.erase(v.begin()+2);
    v.erase(v.begin()+2,v.begin()+5);
    for(int c:v)
    {
        cout<<c<<" ";
    }
    return 0;
}