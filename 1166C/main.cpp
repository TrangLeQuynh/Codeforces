#include <bits/stdc++.h>

using namespace std;

int searchBinaryMax (int *a,int left, int right,int z)
{
    int mid;
    int key=left;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(a[mid]-z<=z)
        {
            key=mid;
            left=mid+1;
        }
        else
            right=mid-1;

    }
    return key;
}
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        if(a[i]<0)
            a[i]*=(-1);
    }
    sort(a,a+n);
    cout<<endl;
    for(int i=0;i<n;++i)
        cout<<a[i]<<" ";
    cout<<endl;
    int res=0,xmax;
    for(int i=0;i<n;++i)
    {
        if(a[i]==0)
            continue;
        xmax=searchBinaryMax(a,i,n-1,a[i]);
        cout<<endl<<xmax-i;
        res+=(xmax-i);
    }
    cout<<endl<<"res="<<res;
    return 0;
}
