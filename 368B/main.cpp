#include <bits/stdc++.h>

using namespace std;

set<int> distinct;
map<int,int> MAP;

int main()
{
    //input
    int n,m;    cin>>n>>m;
    int a[n],l[m];
    for(int i=0;i<n;++i)
        cin>>a[i];
    for(int i=0;i<m;++i)
        cin>>l[i];
    //process
    for(int i=n-1;i>=0;--i)
    {
        distinct.insert(a[i]);
        MAP[i]=distinct.size();
    }
    for(int i=0;i<m;++i)
        cout<<MAP[l[i]-1]<<endl;
    return 0;
}
