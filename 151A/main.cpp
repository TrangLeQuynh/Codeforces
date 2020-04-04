#include <bits/stdc++.h>

using namespace std;

int MIN (int a,int b,int c,int Friend)
{
    if(a<=b && a<=c)
        return a/Friend;
    else if(b<=a &&b<=c)
        return b/Friend;
    return c/Friend;
}

int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int numWater =k*l/nl;
    int numToasts= d*c;
    int numSalts = p/np;
    cout<<MIN(numWater,numToasts,numSalts,n);
    return 0;
}
