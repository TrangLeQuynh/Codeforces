#include <bits/stdc++.h>

using namespace std;
int MAP[128];

int main()
{
    int n;cin>>n;
    string name;
    for(int i=0;i<n;++i)
    {
        cin>>name;
        MAP[name[0]]++;

    }
    int res=0;
    int x1,x2;
    for(int i='a';i<='z';++i)
    {
        x1=MAP[i]/2;
        x2=MAP[i]-x1;
        res+=((x1-1)*x1/2)+((x2-1)*x2/2);
    }
    cout<<res;
    return 0;
}
