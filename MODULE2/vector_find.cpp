#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,4,3,2,2,5,2};

    auto it= find(v.begin(),v.end(),3);
    if(it==v.end())cout<<"NOT found";
    else cout<<"found";
    return 0;
}