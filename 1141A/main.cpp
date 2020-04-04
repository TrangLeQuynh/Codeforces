#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    if(m%n!=0)
    {
        cout<<-1;
        return 0;
    }
    m/=n;
    int res=0;
    while(m%2==0)
    {
        m/=2;
        res++;
    }
    while(m%3==0)
    {
        m/=3;
        res++;
    }
    if(m==1)
        cout<<res;
    else
        cout<<-1;
    return 0;
}
