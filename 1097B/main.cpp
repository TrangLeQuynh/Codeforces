#include <bits/stdc++.h>

using namespace std;
int n;
int A[15];

bool lock (int i1,int i2,int Sum)
{
    if(i1==n)
       return (Sum%360==0)?true:false;
    Sum+= A[i1]*i2;
    return lock(i1+1,1,Sum) | lock(i1+1,-1,Sum);
}

int main()
{
    //input data
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>A[i];
    //process
    if(lock(0,1,0))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
