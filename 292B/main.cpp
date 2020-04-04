#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> a(n,0);
    int a1,a2;
    for(int i=0;i<m;++i)
    {
        cin>>a1>>a2;
        a[a1-1]++;
        a[a2-1]++;
        cout<<a[a1-1]<<endl;
    }
    int A1,A2;
    A1=A2=0;
    for(int i=0;i<n;++i)
    {
        if(a[i]==2)
            A2++;
        else if(a[i]==1)
            A1++;
    }
    if(A2==n)
        cout<<"ring topology";
    else if(A2==n-2 && A1==2)
        cout<<"bus topology"
    else if(A1==n-1)
        cout<<"star topology";
    else
        cout<<"unknown topology";
    return 0;
}
