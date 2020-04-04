#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;cin>>a;
    int x;
    for(int i=0;i<a;++i)
    {
        cin>>x;
        if(360%(180-x)==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
