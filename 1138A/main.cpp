#include <bits/stdc++.h>

using namespace std;

int searchBinary (vector<int> Arr,int x,int left,int right)
{
    int mid;
    while(left<= right)
    {
        mid=(right-left)/2+left;
        if(Arr[mid]==x)
            return mid;
        if(Arr[mid]<x)
            right=mid-1;
        else
            left=mid+1;
    }
    return -1;
}

int main()
{
    int n;cin>>n;
    int x;
    int tmp=0;
    int x1=0,x2=0;
    int res=0;
    int MAX=0;
    vector<int> tuna,ell;
    for(int i=0;i<n;++i)
    {
        cin>>x;
        if(x!=tmp)
        {
            if(x1>=x2)
                res=x2;
            else
                res=x1;
            if(res>MAX)
                MAX=res;
            tmp=x;
            x1=x2;
            x2=1;
        }
        else
            x2++;
    }
    if(x1>=x2)
        res=x2;
    else
        res=x1;
    if(res>MAX)
        MAX=res;
    cout<<endl<<MAX*2;
    return 0;
}
