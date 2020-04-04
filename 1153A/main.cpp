#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int res=0,timeFirst=1000000000;
    int s,d;
    float id;
    for(int i=0;i<n;++i)
    {
        cin>>s>>d;
        if(s<t)
        {
            id=(t-s*1.0)/d;
            if(id!=(int)id)
                id++;
            s=s+d*(int)id;
        }
        if(s<timeFirst)
        {
            timeFirst=s;
            res=i+1;
        }
    }
    cout<<res;
    return 0;
}
