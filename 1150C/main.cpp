#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    int a,a1=0,a2=0;
    for(int i=0;i<n;++i)
    {
        cin>>a;
        if(a==1)
            a1++;
        else
            a2++;
    }
    if(a1>0 &&a2>0)
    {
        cout<<"2 1 ";
        a1--;
        a2--;
    }
    while(a2)
    {
        cout<<"2 ";
        a2--;
    }
    while(a1)
    {
        cout<<"1 ";
        a1--;
    }
    return 0;
}
