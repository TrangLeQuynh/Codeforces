#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,h;
    cin>>n>>m>>h;
    int a[m],b[n];
    for(int i=0;i<m;++i)
        cin>>a[i];
    for(int i=0;i<n;++i)
        cin>>b[i];
    int x;
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<m;++j)
        {
            cin>>x;
            if(x==0)
                cout<<0<<" ";
            else
                cout<<min(a[j],b[i])<<" ";
        }
        cout<<endl;
    }
    return 0;
}
