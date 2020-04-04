#include <bits/stdc++.h>

using namespace std;

struct Gold
{
    int Length;
    bool check;
};

int main()
{
    int n;
    cin>>n;
    string str;cin>>str;
    int S=0,G=0;
    for(int i=0;i<n;++i)
        if(str[i]=='G')
            G++;
    int length=0;
    bool check=true;
    int MAX=0;
    for(int i=0;i<n;++i)
    {
        if(str[i]=='G')
            length++;
        else
        {
            if(check&&i+1-S==length)
            {
                length++;
                check=false;
            }
            else if(str[i-1]=='G')
            {
                length=i-S+1;
                check=false;
            }
            else
            {
                length=0;
                check=true;
            }
            S=i+1;
        }
        if(i==n-1&&length<G&&check)
                length++;
        if(length>=G)
        {
            MAX=G;
            break;
        }
        if(length>MAX)
            MAX=length;
    }
    cout<<MAX;
    return 0;
}
