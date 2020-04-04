#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,m;cin>>n>>m;
    int a[n],b[m];
    int odd=0,even=0,res=0;
    for(int i=0;i<n;++i)   {
        cin>>a[i];
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    for(int i=0;i<m;++i)
    {
        cin>>b[i];
        if(b[i]%2==0 && odd>0)
        {
            res++;
            odd--;
        }
        else if(b[i]%2!=0 && even>0)
        {
            res++;
            even--;
        }
    }
    cout<<res;
    return 0;
}
