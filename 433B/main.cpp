#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int n;  cin>>n;
    vector<ll> u(n+1,0);
    vector<ll> v(n+1,0);
    int x;
    for(int i=1;i<=n;++i)
    {
        cin>>x;
        v[i]=v[i-1]+x;
        u[i]=x;
    }
    sort(u.begin(),u.end());
    for(int i=1;i<=n;++i)
        u[i]+=u[i-1];
    int m;  cin>>m;
    ll Arr[m][3];
    for(int i=0;i<m;++i)
    {
        cin>>Arr[i][0]>>Arr[i][1]>>Arr[i][2];
        if(Arr[i][0]==1)
            cout<<v[Arr[i][2]]-v[Arr[i][1]-1]<<endl;
        else
            cout<<u[Arr[i][2]]-u[Arr[i][1]-1]<<endl;
    }
    return 0;
}
