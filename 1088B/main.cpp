#include <bits/stdc++.h>

using namespace std;
set<int> SET;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        SET.insert(a[i]);
    }
    int sum=0;
    int num=0;
    for(set<int>::iterator id=SET.begin();id!=SET.end() && num<k ;++id)
    {
        if((*id)!=0)
        {
            num++;
            cout<<(*id)-sum<<endl;
            sum+=(*id)-sum;
        }
    }
    while(num<k)
    {
        cout<<0<<endl;
        num++;
    }
    return 0;
}
