#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
        cin>>a[i];
    int j=1;
    int num=1;
    int MAX=1;
    for(int i=0;i<n;++i)
    {
        for(;j<n;++j)
        {
            if(a[i]*2>=a[j])
            {
                num++;
                MAX= MAX>num?MAX:num;
            }
            else
            {
                num--;
                j--;
                if(j==i)
                {
                    j=i+2;
                    num=1;
                }
                break;
            }
        }
    }
    cout<<MAX;
    return 0;
}
