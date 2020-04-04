#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    int a[n];
    int res=1e9+1;
    for(int i=0;i<n;++i)
        cin>>a[i];
    int tmp;
    int d1,d2;
    for(int i=0;i<n;++i)
    {
        d1=i;
        d2=n-1-i;
        if(d1!=0)
        {
            tmp=min(a[0],a[i])/d1;
            if(tmp<res)
                res=tmp;
        }
        if(d2!=0)
        {
            tmp=min(a[n-1],a[i])/d2;
            if(tmp<res)
                res=tmp;
        }
    }
    cout<<res;
    return 0;
}
