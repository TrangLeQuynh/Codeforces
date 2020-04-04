#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int f0=1,f1=0;
    for(int i=0;i<=n;++i)
    {
        int fm=f0+f1;
        f0=f1;
        f1=fm;
    }
    cout<<f1;

    return 0;
}
