#include <bits/stdc++.h>

using namespace std;

map<int,bool> MAP1,MAP2;

int main()
{
    int n;cin>>n;
    int a,b,c;
    int A=0,sum=0;
    for(int i=0;i<n;++i)
    {
        cin>>a>>b>>c;
        sum+=c;
        if(!MAP1[a])
        {
            if(!MAP2[b])
            {
                A+=c;
                MAP1[a]=true;
                MAP2[b]=true;
            }
            else
                MAP2[a]=true;
        }
        else
            MAP1[b]=true;
    }
    if(A>sum-A)
        A=sum-A;
    cout<<A;
    return 0;
}
