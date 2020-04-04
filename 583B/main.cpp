#include <bits/stdc++.h>

using namespace std;

map<int,bool> check;

int main()
{
    int n;cin>>n;
    int a[n];
    int change=0;
    int blocks=0;
    int index;
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
        if(blocks>=a[i])
        {
            check[i]=true;
            blocks++;
            index=i;
        }
    }

    while(blocks<n)
    {
        change++;
        for(int i=index;i>=0;--i)
            if(!check[i])
            {
                if(blocks>=a[i])
                {
                    check[i]=true;
                    blocks++;
                    index=i;
                    if(blocks==n)
                    {
                        cout<<change;
                        return 0;
                    }
                }
            }
        change++;
        for(int i=index;i<n;++i)
            if(!check[i])
            {
                if(blocks>=a[i])
                {
                    check[i]=true;
                    blocks++;
                    index=i;
                    if(blocks==n)
                    {
                        cout<<change;
                        return 0;
                    }
                }
            }


    }
    cout<<change;
    return 0;
}
