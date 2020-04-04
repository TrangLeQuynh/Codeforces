#include <bits/stdc++.h>

using namespace std;

int main()
{
    /*
    use bitmask
    n&(1<<i) --> check bit i-th ==1?
    */
    int n;cin>>n;
    int res=0;
    for(int i=0;(1<<i)<=n;++i)
        if((n&(1<<i))!=0)
            res++;
    cout<<res;
    return 0;
}
