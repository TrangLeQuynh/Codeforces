#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int res=0;
    string str;cin>>str;
    for(int i=0;i<n-1;++i)
        if(str[i]=='x'&&str[i+1]==str[i+2]&&str[i]==str[i+1])
            res++;
    cout<<res;
    return 0;
}
