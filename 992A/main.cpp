#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    set<int> Arr;
    int a;
    for(int i=0;i<n;++i)
    {
        cin>>a;
        if(a!=0)
            Arr.insert(a);
    }
    cout<<Arr.size();
    return 0;
}
