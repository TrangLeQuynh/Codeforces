#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int A[n],Min=k;
    for(int i=0;i<n;++i)
        cin>>A[i];
    for(int i=n-1;i>=0;--i)
        if(k%A[i]==0 && k/A[i]<Min)
        {
            Min=k/A[i];
        }
    cout<<Min;
    return 0;
}
