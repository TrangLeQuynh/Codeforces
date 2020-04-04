#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    int k;
    cin>>a>>k;
    char MAX;
    int imax;
    for(int i=0;i<a.length()&& k>0;++i)
    {
        MAX=a[i];
        imax=i;
        for(int j=i+1;j<=i+k&&j<a.length();++j)
            if(a[j]>MAX)
            {
                MAX=a[j];
                imax=j;
            }
        while(imax>i)
        {
            k--;
            swap(a[imax],a[imax-1]);
            imax--;
        }
    }
    cout<<a;
    return 0;
}
