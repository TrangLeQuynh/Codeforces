#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,s;cin>>n>>s;
    int a[n],b[n];
    bool res=false;
    for(int i=0;i<n;++i)
        cin>>a[i];
    if(a[s-1]==1)
        res=true;
    for(int i=0;i<n;++i)
        {
        cin>>b[i];
        if(b[i]==1 && i>=s)
        {
            if(a[i]==1)
                res=true;
        }
    }
    if(a[0]==0 || (a[s-1]==0 && b[s-1]==0))
        res=false;
    if(res)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
