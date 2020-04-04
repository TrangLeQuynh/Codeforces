#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,p,k;
    cin>>n>>p>>k;
    int res=0;
    long long a[n];
    for(int i=0;i<n;++i)
        cin>>a[i];
    for(int i=0;i<n;++i)
        for(int j=i+1;j<n;++j)
            if(((a[i]+a[j])*(a[i]*a[i]+a[j]*a[j]))%p-k==0)
                res++;
    cout<<res;
    return 0;
}
