#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a[n];
    int u,v;
    vector<bool> visit(n,false);
    for(int i=0;i<m;++i)
    {
        cin>>u>>v;
        a[u-1].push_back(v-1);
        a[v-1].push_back(u-1);
    }
    //process
    int MAX=0,imax=0;
    for(int i=0;i<n;++i)
        if(a[i].size()>MAX)
        {
            MAX=a[i].size();
            imax=i;
        }
    queue<int> q;
    q.push(imax);
    int tmp;
    while(!q.empty())
    {
        tmp=q.front();
        q.pop();
        for(int j=0;j<a[tmp].size();++j)
            if(!visit[a[tmp][j]])
            {
                cout<<tmp+1<<" "<<a[tmp][j]+1<<endl;
                q.push(a[tmp][j]);
                visit[a[tmp][j]]=true;
            }
        visit[tmp]=true;
    }
    return 0;
}
