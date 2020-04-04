#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m;cin>>n>>m;
    long long Min=0,Max=n;
    if(m*2<n)
        Min=n-2*m;
    long long edge=0;
    for(long long i=2;edge<m;++i)
    {
        edge+=(i-1);
        Max=n-i;
    }
    cout<<Min<<" "<<Max;
    return 0;
}
