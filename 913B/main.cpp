#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> Node[n];
    int x;
    bool res=true;
    for(int i=1;i<n;++i)
    {
        cin>>x;
        Node[x-1].push_back(i);
    }
    for(int i=0;i<n;++i)
    {
        int Count=0;
        for(int j=0;j<Node[i].size()&&Count<3;++j)
        {
            if(Node[Node[i][j]].size()==0)
                Count++;
        }
        if(Count!=3 && Node[i].size()!=0)
        {
            res=false;
            break;
        }
    }
    if(res)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}
