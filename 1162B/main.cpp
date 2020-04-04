#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    int a[n][m],b[n][m];
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
            cin>>a[i][j];
    for(int i=0;i<n;++i)
        for(int j=0;j<m;++j)
        {
            cin>>b[i][j];
            if(a[i][j]>b[i][j])
                swap(a[i][j],b[i][j]);
        }
    for(int i=0;i<n-1;++i)
        for(int j=0;j<m-1;++j)
            if(a[i][j]>=a[i+1][j]||a[i][j]>=a[i][j+1]||b[i][j]>=b[i+1][j]||b[i][j]>=b[i][j+1])
            {
                cout<<"Impossible";
                return 0;
            }
    for(int j=0;j<m-1;++j)
        if(a[n-1][j]>=a[n-1][j+1]||b[n-1][j]>=b[n-1][j+1])
        {
                cout<<"Impossible";
                return 0;
        }
    for(int j=0;j<n-1;++j)
        if(a[j][m-1]>=a[j+1][m-1]||b[j][m-1]>=b[j+1][m-1])
        {
                cout<<"Impossible";
                return 0;
        }
    cout<<"Possible";
    return 0;
}
