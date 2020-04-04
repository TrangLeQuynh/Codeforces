#include <bits/stdc++.h>

using namespace std;

bool check(string str)
{
    for(int i=1;i<str.length();++i)
        if(str[i]!=str[i-1])
            return 0;
    return 1;
}

int main()
{
    int n,m;cin>>n>>m;
    string str;
    vector<string> Arr;
    for(int i=0;i<n;++i)
    {
        cin>>str;
        Arr.push_back(str);
    }
    bool test=true;
    test=check(Arr[0]);
    for(int i=1;i<n && test;++i)
    {
        test=check(Arr[i]);
        if(Arr[i]==Arr[i-1])
            test=false;
    }
    if(test)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
