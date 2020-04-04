#include <bits/stdc++.h>

using namespace std;

map<int,int> MAP;

int main()
{
    int n;cin>>n;
    int Arr[n];
    for(int i=0;i<n;++i)
        cin>>Arr[i];
    int x=1;
    MAP[-1]=0;
    for(int i=1;i<n;++i)
        if(Arr[i-1]<=Arr[i])
        {
            ++x;
            MAP[-x]++;
        }
        else
            x=1;
    map<int,int>::iterator it=MAP.begin();
    cout<<-(it->first);
    return 0;
}
