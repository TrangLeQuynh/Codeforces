#include <bits/stdc++.h>

using namespace std;
map<int,int> MAP;

int main()
{
    int n;cin>>n;
    string s;cin>>s;
    int id;
    for(int i=0;i<n;++i)
    {
        id=-(int)s[i];
        if(MAP[id]==0)
            MAP[id]=i+1;
    }
    for(map<int,int> ::iterator it=MAP.begin();it!=MAP.end();++it)
    {
        id=it->second;
        if(id<n)
        {
            for(int j=id;j<n;++j)
                if(s[j]<(-(it->first)))
                {
                cout<<"YES"<<endl;
                cout<<id<<" "<<j+1;
                return 0;
                }
        }
    }
    cout<<"NO";
    return 0;
}
