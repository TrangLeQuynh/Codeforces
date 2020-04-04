#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;++i)
        cin>>A[i];
    int A1=0;
    for(int i=0;i<n;++i)
        if(A[i]==1)
            A1++;
        else
            break;

    //process
    int MAX=A1;
    int a1=0;
    for(int i=0;i<n;++i)
    {
        if(A[i]==0)
            a1=0;
        else
        {
            a1++;
            if(i==n-1)
                a1+=A1;
            if(a1>MAX)
                MAX=a1;
        }
    }
    cout<<MAX;
    return 0;
}
