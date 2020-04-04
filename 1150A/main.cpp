#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,r;
    cin>>n>>m>>r;
    int s[n],b;
    for(int i=0;i<n;++i)
        cin>>s[i];
    int maxsell=0;
    for(int i=0;i<m;++i)
    {
        cin>>b;
        if(b>maxsell)
            maxsell=b;
    }
    sort(s,s+n);
    int buy=0;
    for(int i=0;i<n && s[i]<maxsell;++i)
    {
        if(r>=s[i])
        {
            buy+=(r/s[i]);
            r-= buy*s[i];
        }
        else
            break;
    }
    cout<< r+buy*maxsell;
    return 0;
}
