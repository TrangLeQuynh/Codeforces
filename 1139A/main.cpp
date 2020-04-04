#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    string str;cin>>str;
    int res=0;
    for(int i=0;i<n;++i)
        if((int)(str[i]-'0')%2==0)
            res+=i+1;
    cout<<res;
    return 0;
}
