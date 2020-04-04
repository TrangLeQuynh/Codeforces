#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    int a[n];
    int left=0,right=0;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        if(a[i]==0)
            left++;
        else
            right++;
    }
    int xLeft=0,xRight=0,i;
    for( i=0;i<n ;++i)
    {
        if(a[i]==0)
            xLeft++;
        else
            xRight++;
        if(xLeft==left|| xRight==right)
            break;
    }
    cout<<i+1;
    return 0;
}
