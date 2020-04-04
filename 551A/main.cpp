#include <bits/stdc++.h>

using namespace std;
map<int,int> Count,Res;

int main()
{
    int n;cin>>n;
    int a[n],s[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        s[i]=a[i];
        Count[s[i]]++;
    }
    sort(s,s+n);
    Res[s[n-1]]=1;
    for(int i=n-2;i>=0;--i)
    {
        if(Res[s[i]]==0)
            Res[s[i]]=Res[s[i+1]]+Count[s[i+1]];
    }
    for(int i=0;i<n;++i)
        cout<<Res[a[i]]<<" ";
    return 0;
}
