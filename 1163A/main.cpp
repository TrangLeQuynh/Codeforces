#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;cin>>n>>m;
    if(m==0)
        cout<<1;
    else if(n==m)
        cout<<0;
    else
    {
        int MAX=n/2;
        if(m==MAX)
           cout<<MAX;
        else if(m<MAX)
            cout<<m;
        else
            cout<<(n-m)%n;
    }
    return 0;
}
