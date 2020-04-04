#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int m=1;
    while(true)
    {
        int tmp=n*m+1;
        for(int i=2;i<=sqrt(tmp);++i)
            if(tmp%i==0)
            {
            cout<<m;
            return 0;
            }
        m++;
    }
    return 0;
}
