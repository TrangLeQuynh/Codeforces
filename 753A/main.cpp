#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int num=n/2+1;
    int distinct[num];
    while(true)
    {
        int sum=0;
        int i;
        for( i=0;i<num-1;++i)
        {
            distinct[i]=i+1;
            sum+=i+1;
        }
        distinct[i]=n-sum;
        if(distinct[i]==i+1)
            break;
        num--;
        if(distinct[i]==0)
            break;
        else if(distinct[i]>0 && distinct[i]<i+1)
        {
            distinct[i-1]+=distinct[i];
            break;
        }
    }
    cout<<num<<endl;
    for(int i=0;i<num;++i)
        cout<<distinct[i]<<" ";
    return 0;
}
