#include <bits/stdc++.h>

using namespace std;

int res (int n)
{
    if(n==0)
        return 1;
    if(n<10)
        return n;
    int X1=9*res(n/10 -1);
    int X2=(n%10)*res(n/10);
    return X1>X2?X1:X2;
}

int main()
{
    int n;cin>>n;
    cout<<res(n);
    return 0;
}
