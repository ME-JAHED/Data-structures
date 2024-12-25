#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,4,4,5,4};
    replace(v.begin(),v.end(),4,100);
    for(int c:v)
    {
        cout<<c<<" ";
    } 
    return 0;
}