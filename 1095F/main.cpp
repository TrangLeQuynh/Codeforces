#include <bits/stdc++.h>

using namespace std;

struct edge
{
    long long u,v,w;
    bool operator< (const edge& a) const{
        return w<a.w;
    }
};

vector<int> Parent;
vector<edge> A;


int FindParent (int v)
{
    if(Parent[v]==v)
        return v;
    return FindParent(Parent[v]);
}


int main()
{
    //input
    int n,m;cin>>n>>m;
    int a[n];
    edge tmp;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];Parent.push_back(i);
        tmp.v=i;
        for(int j=0;j<i;++j)
        {
            tmp.u=j;
            tmp.w=a[i]+a[j];
            A.push_back(tmp);
        }
    }

    for(int i=0;i<m;++i)
    {
        cin>>tmp.u>>tmp.v>>tmp.w;
        tmp.u--;
        tmp.v--;
        A.push_back(tmp);
    }

    sort(A.begin(),A.end());
    //cout<<endl<<"output"<<endl;
    //process
    int Ver=0;
    int res=0;
    for(int i=0;i<A.size();++i)
    {
        int root1=FindParent(A[i].u);
        int root2=FindParent(A[i].v);
        if(root1!=root2)
        {
            //cout<<A[i].u<<" "<<A[i].v<<"==>"<<A[i].w<<endl;
            res+=A[i].w;
            Parent[root2]=root1;
            Ver++;
            if(Ver==n-1)
                break;
        }
    }
    cout<<res;
    return 0;
}
