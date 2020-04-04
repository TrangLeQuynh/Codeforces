#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,h;
    cin>>n>>h;
    int height;
    int width=0;
    for(int i=0;i<n;++i)
    {
        cin>>height;
        if(height<=h)
            width++;
        else
            width+=2;
    }
     cout<<width;
    return 0;
}
