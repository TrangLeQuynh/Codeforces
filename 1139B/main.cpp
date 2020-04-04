#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
        cin>>a[i];
    long long res=a[n-1];
    long long Ar=res;
    for(int i=n-2;i>=0 && Ar>0;--i)
    {
        if(a[i]<Ar)
        {
            Ar=a[i];
        }
        else if(a[i]>=Ar)
            Ar--;
        res+=Ar;
    }
    cout<<res;
    return 0;
}
