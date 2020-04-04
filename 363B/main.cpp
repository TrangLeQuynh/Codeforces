#include <bits/stdc++.h>

using namespace std;

map<int,int> MAP;

int main()
{
    //input
    int n,k;    cin>>n>>k;
    int height[n];
    int Sum[n+1];
    Sum[0]=0;
    for(int i=0;i<n;++i)
    {
        cin>>height[i];
        Sum[i+1]=Sum[i]+height[i];
    }
    for(int i=1;i+k-1<=n;++i)
        MAP[Sum[i+k-1]-Sum[i-1]]=i;
    map<int,int>::iterator it=MAP.begin();
    cout<<it->second;
    return 0;
}
