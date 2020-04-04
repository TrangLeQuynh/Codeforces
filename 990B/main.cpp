#include <bits/stdc++.h>

using namespace std;

map <int,int> MAP;

int main()
{
    int n,k;cin>>n>>k;
    int a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        MAP[a[i]]++;
    }
    sort(a,a+n);
    int res=0,tmp;
    for(int i=0;i<n;)
    {
        tmp=i+MAP[a[i]];
        if(tmp>=n)
            break;
        if(a[tmp]-a[i]<=k && a[tmp]>a[i])
        {
            res+=MAP[a[i]];
            i=tmp;
        }
        else
            ++i;
    }
    cout<<n-res;
    return 0;
}
