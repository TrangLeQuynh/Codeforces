#include <bits/stdc++.h>

using namespace std;

set<int> SET;

int main()
{
    int n;
    cin>>n;
    int q[n],p[n+1];
    p[0]=q[0]=0;
    int Min=0,Max=0;
    for(int i=1;i<=n;++i)
    {
        if(i<n)
            cin>>q[i];
        p[i]=p[i-1]+q[i-1];
        if(p[i]<Min)
            Min=p[i];
    }

    if(Min<=0)
        Min=1-Min;
    else
        Min=0;

    for(int i=1;i<=n;++i)
    {
        p[i]+=Min;
        if(p[i]<=0 || p[i]>n)
        {
            cout<<-1;
            return 0;
        }
        SET.insert(p[i]);
    }
    if(SET.size()<n)
        cout<<-1;
    else
        for(int i=1;i<=n;++i)
            cout<<p[i]<<" ";
    return 0;
}
