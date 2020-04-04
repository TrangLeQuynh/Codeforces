#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,l;cin>>n>>l;
    int a[n];
    for(int i=0;i<n;++i)
        cin>>a[i];
    sort(a,a+n);
    float MAX=0;
    for(int i=0;i<n-1;++i)
        if(a[i+1]-a[i]>MAX)
            MAX=a[i+1]-a[i];
    MAX/=2;
    if(a[0]!=0 && MAX<a[0])
        MAX=a[0];
    if(a[n-1]!=l && MAX<l-a[n-1])
        MAX=l-a[n-1];
    cout<<fixed<<setprecision(9)<<MAX;
    return 0;
}
