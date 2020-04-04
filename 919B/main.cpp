#include <bits/stdc++.h>

using namespace std;

int convertS (int n)
{
    int num=0;
    while(n!=0)
    {
        num+=n%10;
        n/=10;
    }
    return num;
}

int main()
{
    int k;
    cin>>k;
    //find k-th min
    int num=0;
    int n=0;
    while(num<k)
    {
        n++;
        if(convertS(n)<=10)
            num++;
    }
    cout<<endl<<n*10+(10-convertS(n));
    return 0;
}
