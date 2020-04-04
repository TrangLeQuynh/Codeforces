#include <bits/stdc++.h>

using namespace std;

int main()
{
    int b,k;
    cin>>b>>k;
    int a[k];
    for(int i=0;i<k;++i)
        cin>>a[i];
    long long n=a[k-1];
    long long Pow=1;
    for(int i=k-2;i>=0;--i)
    {
        Pow*=b;
        n+=a[i]*Pow;
    }
    if(n%2==0)
        cout<<endl<<"even";
    else
        cout<<endl<<"odd";
    return 0;
}
