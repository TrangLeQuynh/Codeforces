#include <bits/stdc++.h>

using namespace std;

struct road
{
    int u,v,l;
};

map<int,bool> Storage;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector <road> a[n+1];
    road x;
    for(int i=0;i<m;++i)
    {
        cin>>x.u>>x.v>>x.l;
        a[x.u].push_back(x);
        swap(x.u,x.v);
        a[x.u].push_back(x);
    }
    int s[k];
    int Min=1000000001;
    bool check=false;
    for(int i=0;i<k;++i)
    {
        cin>>s[i];
        Storage[s[i]]=true;
    }
    for(int i=0;i<k;++i)
    {
        for(int j=0;j<a[s[i]].size();++j)
        {
            if(!Storage[a[s[i]][j].v])
            {
                if(a[s[i]][j].l<Min)
                {
                    check=true;
                    Min=a[s[i]][j].l;
                }
            }
        }
    }
    if(!check)
        cout<<-1;
    else
        cout<<Min;
    return 0;
}
