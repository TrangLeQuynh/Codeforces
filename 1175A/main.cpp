#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;cin>>t;
    long long n,k;
    long long step;
    for(int i=0;i<t;++i)
    {
        step=0;
        cin>>n>>k;
        while(n!=0)
        {
            if(n%k==0)
            {
                step++;
                n/=k;
                continue;
            }
            step+=n%k;
            n-=n%k;
        }
        cout<<step<<endl;
    }
    return 0;
}
