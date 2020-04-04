#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;cin>>t;
    int n;
    string str;
    int l,r;
    for(int i=0;i<t;++i)
    {
        cin>>n>>str;
        l=r=0;
        for(int i=0;i<n && str[i]=='<';++i)
            l++;
        for(int i=n-1;i&& str[i]=='>';--i )
            r++;
        if(l>r)
            cout<<r<<endl;
        else
            cout<<l<<endl;
    }
    return 0;
}
